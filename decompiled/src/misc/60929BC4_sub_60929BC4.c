/* sub_60929BC4
 * address: 0x60929BC4   size: 1104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60929BC4(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  float v11; // s0
  float v12; // s0
  int (**v14)(); // [sp+8h] [bp-50h] BYREF
  const char *v15; // [sp+Ch] [bp-4Ch]
  int (**v16)(); // [sp+10h] [bp-48h] BYREF
  const char *v17; // [sp+14h] [bp-44h]
  int (**v18)(); // [sp+18h] [bp-40h] BYREF
  char *v19; // [sp+1Ch] [bp-3Ch]

  sub_60922864(a1);
  *(_DWORD *)a1 = off_60C5DF0C;
  FIELD_U32(a1, 28) = off_60C5DF70;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "DiffuseColor";
  v15 = (const char *)&unk_60AEB296;
  v2 = default_ref_9419C8(a1 + 172);
  FIELD_U32(a1, 172) = &off_60C5DC4C;
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 188) = 0;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = 1065353216;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v2, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 184) = 1065353216;
  FIELD_U32(a1, 188) = 1065353216;
  FIELD_U32(a1, 192) = 1065353216;
  FIELD_U32(a1, 196) = 1065353216;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "SpecularColor";
  v15 = (const char *)&unk_60AEB2C0;
  v3 = default_ref_9419C8(a1 + 200);
  FIELD_U32(a1, 200) = &off_60C5DC4C;
  FIELD_U32(a1, 212) = 0;
  FIELD_U32(a1, 216) = 0;
  FIELD_U32(a1, 220) = 0;
  FIELD_U32(a1, 224) = 1065353216;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v3, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 212) = 1065353216;
  FIELD_U32(a1, 216) = 1065353216;
  FIELD_U32(a1, 220) = 1065353216;
  FIELD_U32(a1, 224) = 1065353216;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v19 = "Intensity";
  v17 = (const char *)&unk_60AEB226;
  v15 = "Min=0,Max=8";
  v4 = default_ref_9419C8(a1 + 228);
  FIELD_U32(a1, 228) = &off_60C5DC9C;
  sub_60941A08(v4, &v18, &v16, &v14, a1);
  FIELD_U32(a1, 240) = 1065353216;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "Length";
  v15 = (const char *)&unk_60AEB35B;
  v5 = default_ref_9419C8(a1 + 244);
  FIELD_U32(a1, 244) = &off_60C5DC9C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v5, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 256) = 1065353216;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "Direction";
  v15 = (const char *)&unk_60AEB130;
  v6 = default_ref_9419C8(a1 + 260);
  FIELD_U32(a1, 260) = &off_60C5DBFC;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v6, &v16, &v14, &v18, a1);
  FIELD_F32(a1, 272) = -1.0;
  FIELD_F32(a1, 276) = -1.0;
  FIELD_F32(a1, 280) = -1.0;
  FIELD_U32(a1, 260) = &off_60C5DBAC;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "Position";
  v15 = (const char *)&unk_60AEB335;
  v7 = default_ref_9419C8(a1 + 284);
  FIELD_U32(a1, 284) = &off_60C5DBFC;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v7, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 296) = 0;
  FIELD_U32(a1, 300) = 0;
  FIELD_U32(a1, 304) = 0;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "Angle";
  v15 = (const char *)&unk_60AEB368;
  v8 = default_ref_9419C8(a1 + 308);
  FIELD_U32(a1, 308) = &off_60C5DC9C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v8, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 320) = 1056964608;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "DistDamp";
  v15 = (const char *)&unk_60AEB37E;
  v9 = default_ref_9419C8(a1 + 324);
  FIELD_U32(a1, 324) = &off_60C5DC9C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v9, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 336) = 1065353216;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "AngleDamp";
  v15 = (const char *)&unk_60AEB395;
  v10 = default_ref_9419C8(a1 + 340);
  FIELD_U32(a1, 340) = &off_60C5DC9C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v10, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 352) = 1065353216;
  FIELD_U32(a1, 356) = 0;
  FIELD_U32(a1, 360) = 0;
  FIELD_U32(a1, 364) = 0;
  FIELD_U32(a1, 368) = 0;
  v11 = sqrtf(
          (float)((float)(FIELD_F32(a1, 276) * FIELD_F32(a1, 276))
                + (float)(FIELD_F32(a1, 272) * FIELD_F32(a1, 272)))
        + (float)(FIELD_F32(a1, 280) * FIELD_F32(a1, 280)));
  if ( v11 > 0.0 )
  {
    v12 = 1.0 / v11;
    FIELD_F32(a1, 272) = v12 * FIELD_F32(a1, 272);
    FIELD_F32(a1, 276) = v12 * FIELD_F32(a1, 276);
    FIELD_F32(a1, 280) = v12 * FIELD_F32(a1, 280);
  }
  return a1;
}
