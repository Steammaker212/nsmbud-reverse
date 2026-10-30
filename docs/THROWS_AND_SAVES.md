# Throws and saves: what the game does, and where the mod steps in

Reverse-engineered on NSMBU Deluxe v1.0.0 (Switch, ARM32). Addresses are IDA
addresses (RVA + 0x60000000); `.hks`/`.sym` files take the RVA. The code lives in
`source`.

## 1. Where a throw starts

Every throw tests the same thing: the throw button (input at player +0x2B0,
`sub_60786670`) and the mode's projectile count. Fire (mode 2) throws while
fewer than 2 fireballs are out; Penguin (5) and Ice (6) throw while at most 1
iceball is out. The counts are per player, in a block whose pointer is at
0x60C7B420: fireballs at +0x68 + 8·n, iceballs at +0x88 + 8·n, where n is the
byte at player +0x54 (0 if it is not 0-3).

That test exists in three places:

| Address | What | Starts the animation |
|---|---|---|
| 0x607AA954 `Player::canThrow` | the test as a function; asked by states that throw inside themselves (swim, carried, etc.: 0x6079C110, 0x607B792C, 0x607B85EC, 0x607BD438, 0x607BC658) | those states play 33/34/35/143 themselves |
| 0x607AAA00 (`startThrow`) | **the ordinary throw** (standing, walking, jumping), called from 0x607965CC. It does **not** call canThrow: it has its own copy of the test, then changes to the Throw state 0x60CC4D6C | yes: the Throw state's begin (0x607AAF18) plays animation 33 |
| 0x607AAF80 (Throw state execute) | phase (+0x26D4) 0: at frame 4 calls createFireBall, then phase 1. Phase 1: its own copy of the test again; on success restarts animation 33 (a throw right after a throw) | yes |

`Player::createFireBall` (0x607AABA0) then spawns the projectile. The only
other caller of the button test, 0x60253194, is an input recorder, not a throw.

A gate on `canThrow` alone therefore never saw the ordinary throw. That is why
the Hammer Suit still played the throw animation with all its hammers out.

**In the mod** (`code/framework/throws.cpp`, `hooks/framework/throws.hks`):
gates registered with `ModBase::throws::addGate` are asked at all four
addresses:

- `canThrow`: 1 becomes 0 when a gate refuses.
- `startThrow`: returns 0 (no state change, as when the test fails) when a gate
  refuses. Its only side effects are on the throwing path.
- Throw execute: in phase 1, when a gate refuses, the player's two counts are
  raised to the limit for that one call and put back after. The state's own test
  then fails, and the rest of the state (back to walking or falling as the
  animation ends) runs unchanged.
- `createFireBall`: no projectile when a gate refuses (this also covers the
  spin-jump throw, 0x607AB2C8, which reaches it directly).

The data symbol is `ModBase::throws::projectileCounts = 0x00C7B420` in
`symbols/player/player.sym`.

## 2. How the save loads at boot

| Address | What |
|---|---|
| 0x60CC6E04 | save manager instance (pointer). +0x14 its thread, +0x18 state (0 idle, 1 loading, 2 saving), +0x1C load status, +0x20 save status, +0x28 the 0xC274-byte save buffer |
| 0x608292BC | request load: state 1, command 1 to the thread |
| 0x60829330 | save now: state 2, command 2 |
| 0x607DF9E4 | load and wait while state is 1; the last call of boot init 0x60825A20 |
| 0x6082A2A4 | the loader (on the save thread): opens `save://rp_savedata.dat`, reads 0xC274 bytes, checks them |
| 0x6082AC1C | the writer: CRCs, writes 0xC274 bytes, commits the `save` device |

The loader sets the load status: 0 loaded; 1 no file (the open failed); −1 the
read failed; −2 wrong size or failed checks. For 1 and −1 it builds a new save
in memory (magic `RPSD`, version 0x20001, empty files).

The boot sequence (states built at 0x607DFF58) reads the status in state 3
(0x607DED50):

- 1 → state 4, whose begin is "save now" (0x607DEDD8 → 0x60829330); state 4
  waits for the write (0x607DEDEC), then goes to state 5.
- 0 → state 5.

So a missing save file makes the game write a new one immediately, while it
starts.

sead's open (0x608E27F4) calls `nn::fs::OpenFile` directly for reads. For
writes (mode table 0x60AF2CC4: 6 = Write | AllowAppend) it first calls
`GetEntryType` and, if the file is missing, `CreateFile` on the save mount. Then
it calls `OpenFile`, and `SetFileSize` if the file already existed.

## 3. The SD-card redirect

`code/engine/sd_file_redirect.cpp` hooks `nn::fs::OpenFile` (0x609ADBEC). Once
the SD card is mounted (the log says `sd: SD card mounted; saves go to
sd:/nsmbudx`):

- **`content:/x`** is read from `sd:/nsmbudx/content/x` when that file exists.
- **Save files `save:/name`** go to `sd:/nsmbudx/name`; `rp_savedata.dat` is
  `savedata.dat`.
  - **Writes** create the SD file and open it with the game's mode.
  - **Reads** only ever use the SD file. Missing or empty, it is reported as
    `ResultPathNotFound` (0x202), whatever the console holds. The loader then
    sets status 1, and the boot sequence writes a new save to the SD card at
    once. The log shows
    `sd: no sd:/nsmbudx/savedata.dat yet; the game starts that file anew`.

**The mount needs permission.** The retail `main.npdm` grants FS permissions
0x4000000000000000, which has no SD-card bit (bit 21). The mod's `main.npdm`
(mod root, copied into `output/atmosphere/contents/0100EA80032EA000/exefs/` by
`compile.bat` after a successful build) is the game's own with only that bit
added, in both the ACID FsAccessControl and the ACI0 FsAccessHeader
(0x4000000000200000). If the mount fails, the log says
`sd: cannot mount the SD card (result …)`, and nothing is redirected: the game
uses the console save.
