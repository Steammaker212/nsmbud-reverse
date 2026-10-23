/* sub_601F471C
 * address: 0x601F471C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F471C(int a1)
{
  int v2; // r5
  float *v3; // r0
  float v4; // r1
  float v5; // r2
  float v6; // s0
  int result; // r0
  _DWORD v8[2]; // [sp+4h] [bp-2Ch] BYREF
  int v9; // [sp+Ch] [bp-24h]

  v2 = FIELD_U32(dword_60CC6D78, 412);
  sub_601F2688(a1, 0, 1, 0, 5.0, 1.0);
  v8[0] = -1;
  v8[1] = -1;
  v9 = -1;
  sub_601FA238(dword_60C8BF58, v8, 0x100000, v2);
  FIELD_U32(a1, 248) = v9;
  FIELD_U32(a1, 240) = v2;
  FIELD_U32(a1, 592) = 10;
  sub_6019EC34((_DWORD *)(dword_60CC6D78 + 456), v8);
  v3 = (float *)sub_601E0040((int)v8);
  v4 = *v3;
  FIELD_F32(a1, 840) = *v3;
  v5 = v3[1];
  FIELD_F32(a1, 844) = v5;
  v6 = v3[2] + 50.0;
  FIELD_F32(a1, 848) = v6;
  FIELD_F32(a1, 80) = v4 + 900.0;
  FIELD_F32(a1, 84) = v5 + 760.0;
  FIELD_F32(a1, 88) = v6 + 450.0;
  FIELD_U32(a1, 192) = -548801376;
  FIELD_U32(a1, 180) = -727758346;
  FIELD_U32(a1, 200) = 1093664768;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
  result = sub_601E4C88((_DWORD *)dword_60C8B13C, 89, (_DWORD *)(a1 + 80));
  FIELD_U8(a1, 932) = 1;
  FIELD_U8(a1, 933) = 0;
  FIELD_U32(a1, 596) = 0;
  return result;
}
