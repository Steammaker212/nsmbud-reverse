/* sub_6058EE0C
 * address: 0x6058EE0C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058EE0C(float *a1)
{
  int v2; // r2
  float v3; // s2
  float *v4; // r0
  int v5; // s0
  float v6; // s6
  float v7; // s2
  int result; // r0
  int v9; // r1
  char v10; // r2
  int v11[2]; // [sp+0h] [bp-20h] BYREF
  float v12; // [sp+8h] [bp-18h] BYREF
  float v13; // [sp+Ch] [bp-14h]

  if ( !FIELD_U8(dword_60CBC000, 2714) )
    return (*(int (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF608);
  v2 = FIELD_U32(dword_60C9CF0C, 1416);
  v11[1] = FIELD_U32(dword_60C9CF0C, 1420);
  v11[0] = v2;
  sub_603F4BF4(AreaTask_intance, &v12, v11);
  v3 = v12 * 0.0625;
  v4 = (float *)dword_60CBC000;
  FIELD_F32(dword_60CBC000, 32) = v12;
  v5 = (int)(float)(v13 * 0.0625);
  v4[9] = v13;
  v6 = (float)((float)(int)v3 * 16.0) + 8.0;
  v7 = (float)((float)v5 * 16.0) + -8.0;
  v12 = v6;
  v13 = v7;
  a1[27] = v6;
  a1[28] = v7;
  v4[6] = v6;
  v4[7] = v7;
  result = sub_6058F1F0(a1);
  v9 = dword_60CBC000;
  v10 = 1;
  if ( !result )
  {
    result = 1;
    v10 = 0;
    FIELD_U8(dword_60CBC000, 153) = 1;
    FIELD_U32(v9, 112) = 1;
  }
  FIELD_U8(v9, 157) = v10;
  return result;
}
