# Build the mod module from the decompiled C.
#
# This mirrors codedx's build exactly on the parts that matter, because codedx's
# path is the one that has been shown to produce a module a Switch will load:
#
#   * clang, --target=armv7l-none-eabihf, -mcpu=cortex-a57, hard float, -fPIC
#   * arm-none-eabi-ld with -pie, so _DYNAMIC exists and crt0.s can emit a MOD0
#   * three loadable segments, which is what elf2nso.py requires
#
# The toolchain is therefore *not* devkitA64: aarch64-none-elf-gcc has no ARM
# state (`-marm`) and rejects the whole target.  devkitARM's arm-none-eabi works
# for the linker; clang does the code generation.
#
# Symbol resolution comes from main.ld, generated from data/loader/main.sym by
# scripts/pipeline/emit_linker_script.py.  A hook that references a game function
# resolves to the same RVA the corpus file records.

# Note: `?=` cannot be used for CC/LD, because make predefines CC=cc and LD=ld
# as built-in variables, so a `?=` assignment would never take effect.
ifeq ($(origin CC),default)
CC        := clang
endif
ifeq ($(origin LD),default)
LD        := arm-none-eabi-ld
endif
# OBJDUMP has no built-in default, unlike CC and LD, so its origin is "undefined"
# rather than "default". Guarding on "default" here would leave it empty and the
# recipe would begin with a literal `-t`, which sh reads as the command `t`.
ifeq ($(origin OBJDUMP),undefined)
# devkitARM's objdump, not the LLVM installer's: it is on PATH without spaces, and
# make runs recipes through sh, which cannot cope with "(x86)" in a path. The
# symbol table is identical either way.
OBJDUMP   := arm-none-eabi-objdump
endif
PYTHON    ?= python

BUILD     := build
OUT       := out
TARGET    := $(OUT)/mod.elf
NSO       := $(OUT)/subsdk0
MODSYM    := $(OUT)/mod.sym
# The patch is applied to the game's `main` module, so its filename must be that
# module's build ID, not the title ID.
#
# Atmosphere's exefs_patches loader keys each `.ips` by the build ID of the NSO it
# patches, and it looks the file up by that ID. Naming it after the title ID --
# which is what a first draft did -- produces a patch Atmosphere never loads, and
# the game then boots completely unmodified with no error anywhere. sweetdx's
# working artifact is named AEE6DCCC06D9C05B42061E2019123A61.ips for this reason.
BUILD_ID  := AEE6DCCC06D9C05B42061E2019123A61
IPS       := $(OUT)/$(BUILD_ID).ips

# The module links at 0 and is loaded at this RVA, which is the first byte past
# the game's main module (measured: the ELF's last allocated byte is RVA
# 0x00CD1000).  hooks_to_ips.py needs it to turn a module symbol address into the
# address the patch writes a branch to.
MODULE_BASE := 0x00CD1000

ARCH      := --target=armv7l-none-eabihf -mabi=aapcs-linux -mcpu=cortex-a57 \
             -mfpu=crypto-neon-fp-armv8 -mfloat-abi=hard -fPIC

CFLAGS    := $(ARCH) -O2 -fno-strict-aliasing -ffunction-sections \
             -fdata-sections -fno-builtin -fno-common -nostdlib -nostdinc \
             -fno-exceptions -fno-rtti -Wall -Wno-unused-parameter \
             -I include
ASFLAGS   := $(ARCH) -x assembler-with-cpp
LDFLAGS   := -pie -T linker.ld -T main.ld -T sdk.ld --no-warn-rwx-segments

SRCS      := $(wildcard source/*.c source/*.s hooks/*.c)
OBJS      := $(patsubst %,$(BUILD)/%.o,$(SRCS))

# The .hks file is the input to the patcher, and it must agree with the module's
# symbol table: a hook whose `func:` is not a global in the ELF produces an IPS
# that branches into nothing. `verify_hooks.py` checks that agreement.
HKS       := ../hooks/hooks.hks

all: $(IPS)

$(NSO): $(TARGET)
	$(PYTHON) scripts/elf2nso.py $< $@ -s

# Module symbol table in the form hooks_to_ips.py expects: one
# `<name> = <address>;` line per function, where the address is the module's own
# link address. Written with -o rather than a shell redirect, because PowerShell
# redirects as UTF-16 and the symbol reader cannot decode that.
$(MODSYM): $(TARGET)
	$(PYTHON) scripts/normalise_symtab.py --elf $< --objdump $(OBJDUMP) -o $@

$(IPS): $(NSO) $(MODSYM) $(HKS)
	$(PYTHON) scripts/hooks_to_ips.py $(HKS) $(MODSYM) $(MODULE_BASE) $@
	$(PYTHON) scripts/verify_ips.py --ips $@ --sym $(MODSYM) --hks $(HKS) \
	    --base $(MODULE_BASE)
	@echo "built $@"

# The exact directory tree Atmosphere expects on the SD card. Building it here
# rather than in a script that copies by hand means the artifact that gets
# verified is the artifact that gets deployed.
LAYEREDFS := $(OUT)/layeredfs/atmosphere/contents/0100EA80032EA000

deploy: $(NSO) $(IPS)
	@mkdir -p $(LAYEREDFS)/exefs
	@cp $(NSO) $(LAYEREDFS)/exefs/subsdk0
	@mkdir -p $(OUT)/layeredfs/atmosphere/exefs_patches/0100EA80032EA000
	@cp $(IPS) $(OUT)/layeredfs/atmosphere/exefs_patches/0100EA80032EA000/
	@echo ""
	@echo "Deployable artifact:"
	@echo "  $(LAYEREDFS)/exefs/subsdk0"
	@echo "  $(OUT)/layeredfs/atmosphere/exefs_patches/0100EA80032EA000/$(notdir $(IPS))"
	@echo ""
	@echo "Copy the contents of $(OUT)/layeredfs to the root of the SD card."

$(BUILD)/%.c.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD)/%.s.o: %.s
	@mkdir -p $(dir $@)
	$(CC) $(ASFLAGS) -c $< -o $@

$(TARGET): $(OBJS) linker.ld main.ld sdk.ld
	@mkdir -p $(OUT)
	$(LD) $(LDFLAGS) -o $@ $(OBJS)
	@echo "built $@"

# A hook is only usable if its site still decodes to its target and its symbol
# exists in the module. Run this rather than trusting the catalogue.
verify: $(TARGET)
	$(PYTHON) ../scripts/pipeline/verify_hooks.py \
	    --elf $(GAME_ELF) --hks $(HKS) --sym ../data/loader/main.sym
	$(PYTHON) ../scripts/pipeline/check_linker_collisions.py \
	    --sym ../data/loader/main.sym --elf $(TARGET)

# Regenerate the relocated symbol script from the measured map.
main.ld: ../data/loader/main.sym
	$(PYTHON) ../scripts/pipeline/emit_linker_script.py --sym $< --out $@

clean:
	rm -rf $(BUILD) $(OUT)

.PHONY: all clean verify deploy
