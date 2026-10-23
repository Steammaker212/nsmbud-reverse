/* sub_6092D6E0
 * address: 0x6092D6E0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092D6E0(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r1
  float v8; // s16
  float v9; // s18
  float v10; // s0
  float v11; // s10
  float v12; // s12
  float v13; // s6
  float v14; // s8
  float v15; // s4
  float v16; // s5
  float v17; // s10
  float v18; // s3
  float v19; // s14
  float v20; // s0
  _DWORD v22[2]; // [sp+8h] [bp-40h] BYREF
  _DWORD v23[2]; // [sp+10h] [bp-38h] BYREF
  int (**v24)(); // [sp+18h] [bp-30h] BYREF
  char *v25; // [sp+1Ch] [bp-2Ch]

  sub_6092D8A4(a1, a2, 0, a3);
  v23[0] = &sead__SafeStringBase__vtable;
  v22[0] = &sead__SafeStringBase__vtable;
  v23[1] = "enable";
  v22[1] = &unk_60AEAF58;
  v6 = FIELD_U32(a1, 28);
  v24 = &sead__SafeStringBase__vtable;
  v25 = &byte_60ABC94D;
  sub_60941A08(a1 + 3604, v23, v22, &v24, v6);
  FIELD_U8(a1, 3616) = 1;
  v7 = FIELD_U32(a1, 28);
  v24 = &sead__SafeStringBase__vtable;
  v25 = "dof";
  sub_60947360(a1 + 848, v7, &v24);
  sub_6092DC18(a1 + 32);
  v8 = FIELD_F32(a1, 448);
  v9 = sinf(v8);
  v10 = cosf(v8);
  v11 = FIELD_F32(a1, 428);
  v12 = FIELD_F32(a1, 432);
  v13 = FIELD_F32(a1, 412);
  v14 = FIELD_F32(a1, 408);
  v15 = v10 * 0.0;
  v16 = v10 * v11;
  v17 = v9 * v11;
  v18 = (float)(v9 * 0.0) + (float)(v10 * 0.0);
  FIELD_F32(a1, 788) = v16;
  v19 = (float)((float)(v10 * 0.0) - v9) * v12;
  v20 = (float)((float)(v9 * 0.0) + v10) * v12;
  FIELD_F32(a1, 792) = v19;
  FIELD_F32(a1, 796) = (float)((float)((float)(v19 * v13) + (float)(v16 * v14)) + (float)((float)(v18 * 0.0) * 0.0))
                       + 0.0;
  FIELD_U32(a1, 800) = 0;
  FIELD_U32(a1, 816) = 0;
  FIELD_F32(a1, 804) = v17;
  FIELD_F32(a1, 808) = v20;
  FIELD_F32(a1, 812) = (float)((float)((float)(v20 * v13) + (float)(v17 * v14))
                               + (float)((float)((float)((float)(v9 * 0.0) - v15) * 0.0) * 0.0))
                       + 0.0;
  sub_60938F1C(a1, 0);
  sub_6092E254(a1, a3);
  sub_6092E6CC(a1, a3);
  v24 = &sead__SafeStringBase__vtable;
  v25 = "DepthOfField";
  return nullsub_123(a1 + 1620, a2, &v24, a3);
}
