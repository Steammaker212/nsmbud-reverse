/* sub_609289E8
 * address: 0x609289E8   size: 1108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609289E8(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  float v8; // s0
  float v9; // s4
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s0
  float v14; // s16
  float v15; // s24
  float v16; // s18
  float v17; // s20
  float v18; // s0
  float v19; // s22
  int (**v21)(); // [sp+8h] [bp-60h] BYREF
  const char *v22; // [sp+Ch] [bp-5Ch]
  int (**v23)(); // [sp+10h] [bp-58h] BYREF
  const char *v24; // [sp+14h] [bp-54h]
  int (**v25)(); // [sp+18h] [bp-50h] BYREF
  char *v26; // [sp+1Ch] [bp-4Ch]

  sub_60922864(a1);
  *(_DWORD *)a1 = off_60C5DDFC;
  FIELD_U32(a1, 28) = off_60C5DE60;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "DiffuseColor";
  v22 = (const char *)&unk_60AEB296;
  v2 = default_ref_9419C8(a1 + 172);
  FIELD_U32(a1, 172) = &off_60C5DC4C;
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 188) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = 1065353216;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08(v2, &v23, &v21, &v25, a1);
  FIELD_U32(a1, 184) = 1065353216;
  FIELD_U32(a1, 188) = 1065353216;
  FIELD_U32(a1, 192) = 1065353216;
  FIELD_U32(a1, 196) = 1065353216;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "SpecularColor";
  v22 = (const char *)&unk_60AEB2C0;
  v3 = default_ref_9419C8(a1 + 200);
  FIELD_U32(a1, 200) = &off_60C5DC4C;
  FIELD_U32(a1, 212) = 0;
  FIELD_U32(a1, 216) = 0;
  FIELD_U32(a1, 220) = 0;
  FIELD_U32(a1, 224) = 1065353216;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08(v3, &v23, &v21, &v25, a1);
  FIELD_U32(a1, 212) = 1065353216;
  FIELD_U32(a1, 216) = 1065353216;
  FIELD_U32(a1, 220) = 1065353216;
  FIELD_U32(a1, 224) = 1065353216;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "BacksideColor";
  v22 = (const char *)&unk_60AEB2E7;
  v4 = default_ref_9419C8(a1 + 228);
  FIELD_U32(a1, 228) = &off_60C5DC4C;
  FIELD_U32(a1, 240) = 0;
  FIELD_U32(a1, 244) = 0;
  FIELD_U32(a1, 248) = 0;
  FIELD_U32(a1, 252) = 1065353216;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08(v4, &v23, &v21, &v25, a1);
  FIELD_U32(a1, 240) = 0;
  FIELD_U32(a1, 244) = 0;
  FIELD_U32(a1, 248) = 0;
  FIELD_U32(a1, 252) = 1065353216;
  v25 = &sead__SafeStringBase__vtable;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v26 = "Intensity";
  v24 = (const char *)&unk_60AEB226;
  v22 = "Min=0 ,Max=8";
  v5 = default_ref_9419C8(a1 + 256);
  FIELD_U32(a1, 256) = &off_60C5DC9C;
  sub_60941A08(v5, &v25, &v23, &v21, a1);
  FIELD_U32(a1, 268) = 1065353216;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "Direction";
  v22 = (const char *)&unk_60AEB130;
  v6 = default_ref_9419C8(a1 + 272);
  FIELD_U32(a1, 272) = &off_60C5DBFC;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08(v6, &v23, &v21, &v25, a1);
  FIELD_F32(a1, 284) = -1.0;
  FIELD_F32(a1, 288) = -1.0;
  FIELD_F32(a1, 292) = -1.0;
  FIELD_U32(a1, 272) = &off_60C5DBAC;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "ViewCoordinate";
  v22 = (const char *)&unk_60AEB313;
  v7 = default_ref_9419C8(a1 + 296);
  FIELD_U32(a1, 296) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08(v7, &v23, &v21, &v25, a1);
  FIELD_U8(a1, 308) = 0;
  FIELD_U32(a1, 312) = 0;
  FIELD_U32(a1, 316) = 0;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 324) = 0;
  v8 = sqrtf(
         (float)((float)(FIELD_F32(a1, 288) * FIELD_F32(a1, 288))
               + (float)(FIELD_F32(a1, 284) * FIELD_F32(a1, 284)))
       + (float)(FIELD_F32(a1, 292) * FIELD_F32(a1, 292)));
  if ( v8 <= 0.0 )
  {
    v10 = FIELD_F32(a1, 284);
    v11 = FIELD_F32(a1, 288);
    v12 = FIELD_F32(a1, 292);
  }
  else
  {
    v9 = 1.0 / v8;
    v10 = (float)(1.0 / v8) * FIELD_F32(a1, 284);
    FIELD_F32(a1, 284) = v10;
    v11 = v9 * FIELD_F32(a1, 288);
    FIELD_F32(a1, 288) = v11;
    v12 = v9 * FIELD_F32(a1, 292);
    FIELD_F32(a1, 292) = v12;
  }
  v13 = sqrtf((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12));
  if ( v13 > 0.0 )
  {
    v14 = 1.0;
    v15 = 1.0 / v13;
    v16 = (float)(1.0 / v13) * FIELD_F32(a1, 292);
    v17 = (float)(1.0 / v13) * FIELD_F32(a1, 284);
    v18 = sqrtf((float)(v16 * v16) + (float)(v17 * v17));
    v19 = v15 * FIELD_F32(a1, 288);
    if ( v18 > 0.0 )
      FIELD_F32(a1, 388) = atan2f(-(float)(v17 * (float)(1.0 / v18)), -(float)(v16 * (float)(1.0 / v18)));
    if ( v19 <= 1.0 )
    {
      if ( v19 >= -1.0 )
        v14 = -v19;
    }
    else
    {
      v14 = -1.0;
    }
    FIELD_F32(a1, 392) = asinf(v14);
  }
  return a1;
}
