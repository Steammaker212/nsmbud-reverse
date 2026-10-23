/* sub_606A76C4
 * address: 0x606A76C4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A76C4(int a1)
{
  int v2; // r5
  int v3; // r6
  float v4; // s0
  __int16 v5; // r0
  _WORD *v6; // r4
  int v7; // t1
  int v9; // [sp+4h] [bp-1Ch] BYREF
  int v10; // [sp+8h] [bp-18h] BYREF
  int v11; // [sp+Ch] [bp-14h] BYREF

  v11 = 0;
  v10 = 0;
  v9 = 0;
  v2 = a1 + 648;
  v3 = sub_605BFAE0(a1 + 648, &v11, &v10, &v9, FIELD_F32(a1, 108));
  sub_606A7EB8(a1 + 1760, v10, v9);
  ((void (__fastcall *)(int, int))loc_606A7794)(a1, v3);
  LODWORD(v4) = (int)(float)(FIELD_F32(a1, 1848) * 65536.0);
  FIELD_U32(a1, 160) = LODWORD(v4) << 12;
  if ( ((int (__fastcall *)(int, int, float))loc_6069B070)(a1 + 1792, a1 + 108, v4) == 1 )
    sub_60160948((_DWORD *)(a1 + 656));
  sub_605BF968(v2);
  v7 = FIELD_S16(a1, 1860);
  v6 = (_WORD *)(a1 + 1860);
  v5 = v7;
  if ( v7 >= 1 )
    *v6 = v5 - 1;
  return 1;
}
