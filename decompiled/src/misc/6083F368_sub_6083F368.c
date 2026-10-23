/* sub_6083F368
 * address: 0x6083F368   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083F368(_DWORD *a1, int a2)
{
  _DWORD v5[20]; // [sp+0h] [bp-50h] BYREF

  memset(v5, 0, 64);
  sub_60998EF4(v5);
  HIWORD(v5[0]) = 0;
  v5[5] = FIELD_U32(a2, 16) / 2;
  v5[6] = sub_6083DA30(a2);
  v5[4] = 128;
  BYTE1(v5[0]) = 2;
  v5[3] = sub_6083DA10(a2);
  HIWORD(v5[1]) = sub_6083DA20(a2);
  return sub_6083CF64(a1, (int)v5);
}
