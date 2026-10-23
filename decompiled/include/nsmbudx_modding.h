/* NSMBU Deluxe (Switch) v1.0.0 -- player power-up modes, item ids and the offsets that connect them.
 *
 * This is the modding surface for power-ups. Every value here has an address or a table read behind it, recorded in
 * decompiled/MODE_PLUMBING.md and decompiled/blocks/QB_pipeline_summary.md. Where the database has no name for a
 * function the real `sub_XXXXXXXX` spelling is used rather than an invented name, so a mod author can paste an
 * address into a disassembler and land on the code.
 *
 * A power-up travels through four tables, and two of its numbers are easy to confuse:
 *
 *      question block contents (tkCmn)
 *          -> action code            dword_60B04164[contents]
 *          -> item id                dword_60B0267C[action]
 *          -> item Profile*          dword_60C9D3F4[item id]
 *          -> factory builds the item, which calls the grant gate with a TARGET MODE
 *          -> Player + 0x528         that mode is now the player's
 *
 * The item id picks the actor; the mode is what the player becomes. They do not share an order -- FireFlower is item
 * 1 and mode 1, but Propeller is item 3 and mode 4, and IceFlower is item 3 in the *action* table while being item
 * 3 / mode 3 only by coincidence. Use the tables below rather than assuming.
 */
#ifndef NSMBUDX_MODDING_H
#define NSMBUDX_MODDING_H

#include <stdint.h>

/* ---- player power-up modes ------------------------------------------------------------------------------------
 *
 * `Player + 0x528` holds the current mode. The previous mode is kept at `Player + 0x2C78` so a temporary power-up
 * can be undone.
 */
#define PLAYER_MODE_OFFSET              0x528
#define PLAYER_PREVIOUS_MODE_OFFSET     0x2C78

enum PlayerPowerupMode {
    PLAYER_MODE_SMALL            = 0,   /* Kinoko in the table's terms -- the base state */
    PLAYER_MODE_FIRE_FLOWER      = 1,
    PLAYER_MODE_STAR             = 2,
    PLAYER_MODE_ICE_FLOWER       = 3,
    PLAYER_MODE_PROPELLER        = 4,
    PLAYER_MODE_MINI_MUSHROOM    = 5,   /* MameKinoko */
    PLAYER_MODE_PENGUIN          = 6,
    PLAYER_MODE_NUT_MUSHROOM     = 7,
    PLAYER_MODE_P_NUT_MUSHROOM   = 8,
    PLAYER_MODE_PEACH_CROWN      = 9,
    PLAYER_MODE__COUNT           = 10
};

/* ---- item ids, as the resolver table indexes them -------------------------------------------------------------- */
#define ITEM_ID_MUSHROOM             0
#define ITEM_ID_FIRE_FLOWER          1
#define ITEM_ID_STAR                 2
#define ITEM_ID_ICE_FLOWER           3
#define ITEM_ID_PROPELLER            4
#define ITEM_ID_MINI_MUSHROOM        5
#define ITEM_ID_PENGUIN              6
#define ITEM_ID_NUT_MUSHROOM         7
#define ITEM_ID_P_NUT_MUSHROOM       8
#define ITEM_ID_PEACH_CROWN          9

/* ---- the resolver tables --------------------------------------------------------------------------------------
 *
 * dword_60B0267C maps an action code to an item id; its first twelve entries are the meaningful ones and the rest
 * are 0xFFFFFFFF terminators:
 *
 *      0, 3, 7, 0, 1, 4, 6, 5, 2, 2, 8, 9
 *
 * dword_60C9D3F4 maps an item id to the Profile* cell that registers the actor class.
 */
#define TABLE_ACTION_TO_ITEM_ADDR    0x00B0267C
#define TABLE_ITEM_TO_PROFILE_ADDR   0x60C9D3F4

/* ---- the mode guard -------------------------------------------------------------------------------------------
 *
 * The grant gate refuses a mode unless the player is already in a mode that permits the transition. The mask is a
 * bitmap where bit n corresponds to mode n + 1:
 *
 *      0x1FB  permits modes 1, 2, 4, 5, 6, 7, 8, 9   -- bit 2 is clear, so mode 3 (Ice Flower) is refused
 *      0x1FF  the same mask with bit 2 set, which admits mode 3
 *
 * Do not reach for 0x3FB: it sets bit 9 (mode 10, which does not exist) and leaves mode 3 refused.
 *
 * 0x1FB is the value the shipped game uses at both sites in the grant gate, which is why Ice Flower does not behave
 * like the other power-ups. A mod that wants it to has to change this mask; no edit to the mode table will do it.
 * See decompiled/ICE_FLOWER_PATCH.md for the two instruction addresses.
 */
#define MODE_GUARD_MASK_DEFAULT      0x1FB
#define MODE_GUARD_MASK_WITH_ICE     0x1FF

/* ---- data words that must keep their current values ------------------------------------------------------------ */
#define MODE_DATA_FLOAT_ZERO_ADDR    0x60B0C2E4   /* 0.0f, used in the mode-transition compare */
#define MODE_DATA_SENTINEL_ADDR      0x60B0C258   /* 0xA5 sentinel */
#define MODE_DATA_SENTINEL_VALUE     0xA5

/* ---- entry points ---------------------------------------------------------------------------------------------
 *
 * Declared with `()` and no prototype: several are called at more than one arity across the corpus and a full
 * prototype would reject those call sites. The comment gives the address so the function can be found in a
 * disassembler; where the database has a name it is used, and where it does not the `sub_` spelling stands.
 */
int __fastcall Player_setPowerupMode_helper();   /* 0x007AE108 */
int __fastcall sub_60796A60();                   /* 0x00796A60  Player vtable slot 39: Player_modeGroupTable[mode] */

/* The shared item-give gate, 0x00463998.
 *
 *   a1 = item actor, a2 = out result, a3 = target player mode, a4 = contact flag
 *   returns 1 and writes 1 to *a2 when the grant will happen
 *           2 when the player already has the power-up (feedback only, nothing changes)
 *           0 when the mode guard blocks it
 *
 * This is the function to patch if a mod needs a power-up to apply under conditions the game refuses.
 */
int __fastcall sub_60463998();

/* The item grant gate reached from the question block, 0x00465E4C. Applies the 0x1FB mask above. */
int __fastcall sub_60465E4C();

#endif /* NSMBUDX_MODDING_H */
