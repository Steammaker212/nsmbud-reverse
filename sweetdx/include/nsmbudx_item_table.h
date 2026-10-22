/*
 * nsmbudx_item_table.h -- the game's own item identifiers, and the mode tables they index.
 *
 * NSMBU Deluxe (Switch) v1.0.0. All RVAs are Deluxe; image base 0x60000000.
 *
 * Everything here is read out of the shipped binary, not inferred:
 *
 *   sub_604F2044  (RVA 0x004F2044, now named ItemNameTable_build) initialises a table of
 *                 {vtable, char* name} pairs. The name half is quoted verbatim from
 *                 .rodata. The first word of every record is the constant
 *                 12321336 == 0xBC0000, which is an existing symbol in the binary
 *                 (`??g_ResourceManager`), i.e. each record begins with that shared
 *                 pointer. The constant is therefore recorded as an observed value, not
 *                 as a purpose-built "item name table" symbol.
 *
 *   item name list order, exactly as written by that initialiser:
 *
 *       index  name
 *       -----  ----------
 *         0    Kinoko          (Mushroom)
 *         1    FireFlower
 *         2    Star
 *         3    IceFlower
 *         4    Propeller
 *         5    MameKinoko      (Mini Mushroom)
 *         6    Penguin
 *         7    NutKinoko       (Acorn)
 *         8    PNutKinoko      (P-Acorn)
 *         9    PeachCrown
 *
 *   That is ten entries, and the three player "power-up mode" tables are also ten
 *   entries each, read back from memory at the addresses below:
 *
 *       body    0x00B0C230  [1, 0, 0, 1, 2, 3, 0, 4, 4, 5]
 *       height  0x00B0C2BC  [16.0, 31.0, 31.0, 6.0, 31.0 x6]
 *       balloon 0x00B0C34C  [0.0, -4.0, -4.0, 4.0, -5.0, -2.0, -4.0, -4.0, -4.0, 0.0]
 *
 *   The tables are dword-stride. Note the 0xA5, 0xA4, 0xA3, 0xA2 words immediately
 *   after the body table: those belong to the following data and must not be
 *   overwritten.
 *
 * IMPORTANT correction to an earlier note in this repository: "item value 3 is Fire
 * Flower" is WRONG for this list -- index 1 is FireFlower and index 3 is IceFlower.
 * The question block's own item id is set by a separate argument in its spawn call and
 * must be read from that call site rather than assumed from this ordering.
 *
 * The player's current power-up mode is a 4-byte WORD at Player + 0x528 (1320 decimal).
 * It is read and written with LDR/STR, and the mode tables are indexed with LSL#2 (dword
 * stride). An earlier note here claimed it was a byte written with STRB -- that was wrong.
 * Every access to 0x528 in the player region is a word access (238 of them, zero byte
 * accesses); the STRB sites at 0x45xxxx are a different struct sharing the displacement.
 *
 * The mode is used as a DIRECT index into the ten-entry tables with no clamp, so a mode of
 * 10 (Hammer) reads past the end and needs a real 11th entry rather than an existing slot.
 */
#ifndef NSMBUDX_ITEM_TABLE_H
#define NSMBUDX_ITEM_TABLE_H

#include <stdint.h>

/* Image base for every RVA in this project. */
#define NSMBUDX_IMAGE_BASE 0x60000000

/* The constant stored in the vtable half of every item-name record. */
#define NSMBUDX_ITEM_VTABLE 0x00BC0000

/* Number of retail power-up modes. The body/height/balloon tables all have this length. */
#define NSMBUDX_POWERUP_MODE_COUNT 10

/* Retail power-up mode identifiers, in the order the game's own name table lists them. */
typedef enum NsmbudxPowerupMode {
    NSMBUDX_MODE_KINOKO     = 0,   /* Mushroom            */
    NSMBUDX_MODE_FIREFLOWER = 1,   /* Fire Flower         */
    NSMBUDX_MODE_STAR       = 2,   /* Super Star          */
    NSMBUDX_MODE_ICEFLOWER  = 3,   /* Ice Flower          */
    NSMBUDX_MODE_PROPELLER  = 4,   /* Propeller Mushroom  */
    NSMBUDX_MODE_MAMEKINOKO = 5,   /* Mini Mushroom       */
    NSMBUDX_MODE_PENGUIN    = 6,   /* Penguin Suit        */
    NSMBUDX_MODE_NUTKINOKO  = 7,   /* Acorn Mushroom      */
    NSMBUDX_MODE_PNUTKINOKO = 8,   /* P-Acorn             */
    NSMBUDX_MODE_PEACHCROWN = 9,   /* Peachette's crown   */

    /* Not retail. 10 is where a Hammer Suit would have to live; it has no entry in
     * any of the three tables above, and no body type of its own (body table entry
     * would resolve to type 0, colour 2), so it renders as Super Mario. */
    NSMBUDX_MODE_HAMMER     = 10
} NsmbudxPowerupMode;

/* One record of the item-name table built by sub_604F2044. */
typedef struct NsmbudxItemName {
    uint32_t    vtable;   /* always NSMBUDX_ITEM_VTABLE (0x00BC0000) */
    const char *name;     /* points into .rodata, e.g. "FireFlower"  */
} NsmbudxItemName;

/* ------------------------------------------------------------------------- */
/* Power-up mode tables. Read-only retail data; patch copies, never these.    */
/* ------------------------------------------------------------------------- */

/* Player body type selected by each mode. dword stride, RVA 0x00B0C230. */
extern const uint32_t Nsmbudx_bodyTypeByMode[NSMBUDX_POWERUP_MODE_COUNT];

/* Player collision height per mode, in float metres. dword stride, RVA 0x00B0C2BC. */
extern const float Nsmbudx_heightByMode[NSMBUDX_POWERUP_MODE_COUNT];

/* Balloon offset per mode. dword stride, RVA 0x00B0C34C. */
extern const float Nsmbudx_balloonByMode[NSMBUDX_POWERUP_MODE_COUNT];

/* The player's active power-up mode is a 4-byte word at this offset in the Player object. */
#define NSMBUDX_PLAYER_OFF_MODE 0x528

/* The previous mode is saved here by Player_setPowerupMode (RVA 0x795CDC) before the new
 * mode is written, so a revert (damage shrink, etc.) knows what to return to. */
#define NSMBUDX_PLAYER_OFF_PREV_MODE 0x2C78

/* Six PC-relative readers that index these tables. Each loads the table with
 * `LDR Rt, =table - pc` then `LDR Rt, [PC, Rt]`, so the stored word is
 * (table_address - pc). A patch that repoints a table must preserve that form. */
#define NSMBUDX_READER_BODY_A      0x0078C58C
#define NSMBUDX_READER_BODY_B      0x0078E604
#define NSMBUDX_READER_BODY_C      0x0078E7E8
#define NSMBUDX_READER_HEIGHT_A    0x00795FF0
#define NSMBUDX_READER_HEIGHT_B    0x007960F8
#define NSMBUDX_READER_BALLOON     0x007982D8

#endif /* NSMBUDX_ITEM_TABLE_H */
