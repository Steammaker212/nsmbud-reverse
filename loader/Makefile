# Build the mod module from the decompiled C.
#
# The module is linked at a fixed layout by linker.ld (from codedx, GPL-3.0) and
# becomes a patch via scripts/hooks_to_ips.py. Symbols come from
# ../data/loader/main.sym, which the analysis pipeline generates, so a hook that
# references a game function resolves to the same RVA the corpus file records.
#
# Requires devkitPro's devkitA64 (aarch64-none-elf-gcc, 32-bit ARM mode).

TOOLCHAIN ?= $(DEVKITPRO)/devkitA64/bin
CC        := $(TOOLCHAIN)/aarch64-none-elf-gcc
LD        := $(TOOLCHAIN)/aarch64-none-elf-ld
AS        := $(TOOLCHAIN)/aarch64-none-elf-as
OBJCOPY   := $(TOOLCHAIN)/aarch64-none-elf-objcopy

BUILD     := build
OUT       := out
TARGET    := $(OUT)/mod.elf

CFLAGS    := -march=armv8-a -marm -mthumb-interwork -O2 -fno-strict-aliasing \
             -ffunction-sections -fdata-sections -fno-builtin \
             -fno-common -nostdlib -nostdinc -fno-exceptions -fno-rtti \
             -Wall -Wno-unused-parameter -I include -I ../decompiled/src/include
LDFLAGS   := -T linker.ld -T sdk.ld -nostdlib --gc-sections --no-warn-rwx-segments

SRCS      := $(wildcard source/*.c source/*.s hooks/*.c)
OBJS      := $(patsubst %,$(BUILD)/%.o,$(SRCS))

all: $(TARGET)

$(BUILD)/%.c.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD)/%.s.o: %.s
	@mkdir -p $(dir $@)
	$(AS) -march=armv8-a -c $< -o $@

$(TARGET): $(OBJS) linker.ld sdk.ld
	@mkdir -p $(OUT)
	$(LD) $(LDFLAGS) -o $@ $(OBJS)
	@echo "built $@"

clean:
	rm -rf $(BUILD) $(OUT)

.PHONY: all clean
