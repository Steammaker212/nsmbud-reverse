/* sub_60716838
 * address: 0x60716838   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60716838(int a1, unsigned int a2, int a3, int a4)
{
  unsigned __int8 v4; // r4
  int v5; // r5

  v4 = a2;
  v5 = sub_6071B2FC(
         TilesetMgr_instance,
         FIELD_U8(LevelInfo_instance, 18),
         (4 * a3) & 0x3C00 | (a2 >> 4) & 0x3F0 | ((unsigned __int8)a3 >> 4),
         a4);
  return (sub_60723478(v4 >> 4) & v5) != 0;
}
