/* sub_606E8DFC
 * address: 0x606E8DFC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E8DFC(int a1)
{
  float *v2; // r1
  int v3; // r0
  float v4; // s2
  float v5; // s4
  float v6; // s2
  float v7; // r1
  int v8; // r2
  int result; // r0
  float v10[2]; // [sp+0h] [bp-58h] BYREF
  float v11; // [sp+8h] [bp-50h] BYREF
  float v12; // [sp+Ch] [bp-4Ch]
  int v13; // [sp+10h] [bp-48h]
  int v14; // [sp+18h] [bp-40h] BYREF
  int v15; // [sp+1Ch] [bp-3Ch]

  v2 = (float *)(a1 + 2672);
  v3 = dword_60CC6484;
  v4 = FIELD_F32(dword_60CC6484, 116) + (float)(FIELD_F32(dword_60CC6484, 104) * 0.5);
  *v2 = v4;
  v5 = (float)((float)(int)(float)(v4 * 0.0625) * 16.0) + 8.0;
  v6 = -8.0
     - (float)((float)(int)(float)((float)(FIELD_F32(v3, 128) - (float)(FIELD_F32(v3, 108) * 0.5)) * -0.0625) * 16.0);
  *v2 = v5;
  FIELD_F32(a1, 2676) = v6;
  ((void (__fastcall *)(int))loc_606EB040)(a1);
  v7 = FIELD_F32(a1, 2676);
  v8 = FIELD_U32(a1, 2680);
  v11 = FIELD_F32(a1, 2672);
  v12 = v7;
  v13 = v8;
  sub_60833074(&v11);
  v14 = (int)v11;
  v15 = -(int)v12;
  sub_60455008(dword_60C9CF0C, (int)v11, v15);
  sub_603F4BF4(AreaTask_intance, v10, &v14);
  sub_60455014(
    (float *)dword_60C9CF0C,
    1,
    (float)((float)(int)(float)(v10[0] * 0.0625) * 16.0) + 8.0,
    -8.0 - (float)((float)(int)(float)(v10[1] * -0.0625) * 16.0),
    8000.0);
  result = AreaTask_intance;
  FIELD_U8(AreaTask_intance, 1872) = 0;
  return result;
}
