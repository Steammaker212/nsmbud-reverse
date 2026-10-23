/* sub_602C3070
 * address: 0x602C3070   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C3070(int a1)
{
  int v2; // r0
  _DWORD v4[5]; // [sp+0h] [bp-28h] BYREF
  char v5; // [sp+14h] [bp-14h]
  int v6; // [sp+18h] [bp-10h]
  char v7; // [sp+1Ch] [bp-Ch]

  sub_602F3750(a1 + 6152);
  v2 = FIELD_U32(a1, 6284);
  v4[0] = dword_60AFE798[v2];
  v4[1] = 1069547520;
  v4[2] = -1077936128;
  v4[3] = -1115684864;
  v4[4] = &stru_60C90710;
  v5 = -1;
  v6 = v2;
  v7 = FIELD_U8(a1, 84);
  return sub_602A852C(a1 + 6104, v4);
}
