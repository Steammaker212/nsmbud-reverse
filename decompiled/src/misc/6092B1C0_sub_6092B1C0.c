/* sub_6092B1C0
 * address: 0x6092B1C0   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6092B1C0(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int (**v14)(); // [sp+8h] [bp-38h] BYREF
  const char *v15; // [sp+Ch] [bp-34h]
  int (**v16)(); // [sp+10h] [bp-30h] BYREF
  const char *v17; // [sp+14h] [bp-2Ch]
  int (**v18)(); // [sp+18h] [bp-28h] BYREF
  char *v19; // [sp+1Ch] [bp-24h]

  sub_60922864(a1);
  *(_DWORD *)a1 = off_60C5DF94;
  FIELD_U32(a1, 28) = off_60C5DFF8;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "proj_type";
  v15 = "proj";
  v4 = default_ref_9419C8(a1 + 172);
  FIELD_U32(a1, 172) = &off_60C5E01C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v4, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 184) = a2;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "view_pos";
  v15 = (const char *)&unk_60AEB3C4;
  v5 = default_ref_9419C8(a1 + 188);
  FIELD_U32(a1, 188) = &off_60C5DBFC;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v5, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = 1148846080;
  FIELD_U32(a1, 208) = 0;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "view_at";
  v15 = (const char *)&unk_60AEB3D9;
  v6 = default_ref_9419C8(a1 + 212);
  FIELD_U32(a1, 212) = &off_60C5DBFC;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v6, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 224) = 0;
  FIELD_U32(a1, 228) = 0;
  FIELD_U32(a1, 232) = 1036831949;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "view_up";
  v15 = (const char *)&unk_60AEB3EB;
  v7 = default_ref_9419C8(a1 + 236);
  FIELD_U32(a1, 236) = &off_60C5DBFC;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v7, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 248) = 0;
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 1065353216;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "near";
  v15 = (const char *)&unk_60AEB3FA;
  v8 = default_ref_9419C8(a1 + 260);
  FIELD_U32(a1, 260) = &off_60C5DC9C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v8, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 272) = 1065353216;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = (const char *)&unk_60AEB401;
  v15 = (const char *)&unk_60AEB405;
  v9 = default_ref_9419C8(a1 + 276);
  FIELD_U32(a1, 276) = &off_60C5DC9C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v9, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 288) = 1176256512;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "aspect";
  v15 = (const char *)&unk_60AEB416;
  v10 = default_ref_9419C8(a1 + 292);
  FIELD_U32(a1, 292) = &off_60C5DC9C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v10, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 304) = 1065353216;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "fovy";
  v15 = (const char *)&unk_60AEB42B;
  v11 = default_ref_9419C8(a1 + 308);
  FIELD_U32(a1, 308) = &off_60C5DC9C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v11, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 320) = 1110704128;
  v16 = &sead__SafeStringBase__vtable;
  v14 = &sead__SafeStringBase__vtable;
  v17 = "height";
  v15 = (const char *)&unk_60AEB442;
  v12 = default_ref_9419C8(a1 + 324);
  FIELD_U32(a1, 324) = &off_60C5DC9C;
  v18 = &sead__SafeStringBase__vtable;
  v19 = &byte_60ABC94D;
  sub_60941A08(v12, &v16, &v14, &v18, a1);
  FIELD_U32(a1, 336) = 1148846080;
  FIELD_U64(a1, 340) = 1065353216;
  FIELD_U64(a1, 348) = 0;
  FIELD_U64(a1, 356) = 0x3F80000000000000LL;
  FIELD_U64(a1, 364) = 0;
  FIELD_U64(a1, 372) = 0;
  FIELD_U64(a1, 380) = 1065353216;
  FIELD_U64(a1, 388) = 1065353216;
  FIELD_U64(a1, 396) = 0;
  FIELD_U64(a1, 404) = 0x3F80000000000000LL;
  FIELD_U64(a1, 412) = 0;
  FIELD_U64(a1, 420) = 0;
  FIELD_U64(a1, 428) = 1065353216;
  FIELD_U64(a1, 436) = 0;
  FIELD_U64(a1, 444) = 0x3F80000000000000LL;
  FIELD_U64(a1, 452) = 1065353216;
  FIELD_U64(a1, 460) = 0;
  FIELD_U64(a1, 468) = 0x3F80000000000000LL;
  FIELD_U64(a1, 476) = 0;
  FIELD_U64(a1, 484) = 0;
  FIELD_U64(a1, 492) = 1065353216;
  FIELD_U64(a1, 500) = 0;
  FIELD_U64(a1, 508) = 0x3F80000000000000LL;
  return a1;
}
