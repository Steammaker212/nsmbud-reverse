/* sub_60300338
 * address: 0x60300338   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60300338(int a1)
{
  float *v2; // r8
  float *v3; // r6
  float v4; // s18
  float v5; // s16
  int **v6; // r7
  int v7; // r0
  int (__fastcall *v8)(int, int (***)()); // r2
  int v9; // r0
  float v10; // s20
  float v11; // s22
  float v12; // s0
  float v13; // s2
  int v14; // r0
  int (__fastcall *v15)(int, int (***)()); // r2
  int v16; // r0
  float v17; // s26
  float v18; // s28
  __n128 result; // q0
  float v20; // s0
  float v21; // s2
  int (**v22)(); // [sp+0h] [bp-80h] BYREF
  const char *v23; // [sp+4h] [bp-7Ch]
  float v24; // [sp+Ch] [bp-74h]
  float v25; // [sp+1Ch] [bp-64h]

  v2 = (float *)(a1 + 8436);
  v3 = (float *)(a1 + 8432);
  v4 = FIELD_F32(a1, 8436) - FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 8432) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 304) = v5;
  FIELD_F32(a1, 308) = v4;
  v6 = (int **)(a1 + 6300);
  v7 = **(_DWORD **)(a1 + 6300);
  v8 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v7 + 84);
  v22 = &sead__SafeStringBase__vtable;
  v23 = "neck_02";
  v9 = v8(v7, &v22);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v6 + 108))(**v6, v9, &v22);
  v10 = v24;
  v11 = v25;
  v12 = v24 - FIELD_F32(a1, 108);
  v13 = v25 - FIELD_F32(a1, 112);
  FIELD_F32(a1, 6724) = v12;
  FIELD_F32(a1, 6728) = v13;
  FIELD_F32(a1, 6420) = v12 * 0.5;
  FIELD_F32(a1, 6424) = v13 * 0.5;
  FIELD_F32(a1, 8244) = v12;
  FIELD_F32(a1, 8248) = v13;
  v14 = **v6;
  v15 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v14 + 84);
  v22 = &sead__SafeStringBase__vtable;
  v23 = "neck_03";
  v16 = v15(v14, &v22);
  (*(void (__fastcall **)(int, int, int (***)()))(*(_DWORD *)**v6 + 108))(**v6, v16, &v22);
  v17 = v24 - FIELD_F32(a1, 108);
  v18 = v25 - FIELD_F32(a1, 112);
  FIELD_F32(a1, 7028) = v17;
  FIELD_F32(a1, 7032) = v18;
  if ( Actor__getProfileId((Actor *)a1) == 497 || Actor__getProfileId((Actor *)a1) == 498 )
  {
    FIELD_F32(a1, 7332) = (float)(v5 + v17) * 0.5;
    FIELD_F32(a1, 7336) = (float)(v4 + v18) * 0.5;
  }
  v20 = FIELD_F32(a1, 108);
  v21 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 7636) = v10 - v20;
  FIELD_F32(a1, 7640) = v11 - v21;
  result.n128_f32[0] = *v3 - v20;
  result.n128_f32[2] = *v2 - v21;
  FIELD_U32(a1, 7940) = result.n128_u32[0];
  FIELD_U32(a1, 7944) = result.n128_u32[2];
  return result;
}
