/* sub_60716778
 * address: 0x60716778   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_60716778(int a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int8 v4; // r5
  unsigned int v6; // r9
  __int16 v7; // r7
  __int16 v8; // r0

  v4 = a2;
  v6 = (4 * a3) & 0x3C00 | (a2 >> 4) & 0x3F0 | ((unsigned __int8)a3 >> 4);
  v7 = sub_6071B2FC(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), v6, a4);
  v8 = sub_60723478(v4 >> 4);
  return sub_6071B32C(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), v6, a4, v8 | v7);
}
