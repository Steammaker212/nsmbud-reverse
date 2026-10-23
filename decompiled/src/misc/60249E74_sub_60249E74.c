/* sub_60249E74
 * address: 0x60249E74   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60249E74(int a1, int a2, int a3)
{
  int v3; // r5
  _BOOL4 v5; // r6
  int v6; // r7
  int v7; // r1
  _DWORD v9[9]; // [sp+4h] [bp-24h] BYREF

  v3 = FIELD_U32(a3, 64);
  v5 = sub_6000ADDC(a1, v3);
  v6 = FIELD_S8(v3, 84);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 368))(a1);
  v7 = FIELD_U32(v3, 112);
  v9[0] = FIELD_U32(v3, 108);
  v9[1] = v7;
  v9[2] = 1166843904;
  Enemy__vf1A0(a1, v9);
  sub_602A6024(a1, v5, v6, -1);
  return 1;
}
