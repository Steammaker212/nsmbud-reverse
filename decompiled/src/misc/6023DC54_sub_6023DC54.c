/* sub_6023DC54
 * address: 0x6023DC54   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023DC54(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-28h] BYREF
  char v4; // [sp+10h] [bp-18h]
  char v5; // [sp+11h] [bp-17h]
  __int16 v6; // [sp+12h] [bp-16h]
  __int16 v7; // [sp+14h] [bp-14h]
  char v8; // [sp+16h] [bp-12h]

  v3[0] = FIELD_U32(a1, 108);
  v3[1] = FIELD_U32(a1, 112);
  v3[2] = FIELD_U32(a1, 116);
  v3[3] = 0;
  v4 = 3;
  v5 = FIELD_U8(a1, 86);
  v7 = 0;
  v6 = 0;
  v8 = 0;
  sub_60583000(dword_60CAF15C, v3, 3);
  Enemy__collisionStar(a1);
  return 1;
}
