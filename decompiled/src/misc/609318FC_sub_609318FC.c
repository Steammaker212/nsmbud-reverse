/* sub_609318FC
 * address: 0x609318FC   size: 2180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609318FC(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int (**v25)(); // [sp+Ch] [bp-3Ch] BYREF
  const char *v26; // [sp+10h] [bp-38h]
  int (**v27)(); // [sp+14h] [bp-34h] BYREF
  const char *v28; // [sp+18h] [bp-30h]
  int (**v29)(); // [sp+1Ch] [bp-2Ch] BYREF
  char *v30; // [sp+20h] [bp-28h]

  v29 = &sead__SafeStringBase__vtable;
  v30 = "aglfila";
  param_root_ref(a1, &v29, 0, a4);
  *(_DWORD *)a1 = off_60C5E1D0;
  FIELD_U32(a1, 396) = &off_60C5E20C;
  memset(a1 + 400, 0, 652);
  sub_60947BCC(a1 + 1052);
  FIELD_U32(a1, 1052) = &off_60C5DAF8;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "antialias_type";
  v26 = (const char *)&unk_60AEB0B8;
  v5 = default_ref_9419C8(a1 + 1080);
  FIELD_U32(a1, 1080) = &off_60C5E01C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v5, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1092) = 0;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "enable";
  v26 = (const char *)&unk_60AEAF58;
  v6 = default_ref_9419C8(a1 + 1096);
  FIELD_U32(a1, 1096) = &off_60C5D848;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v6, &v27, &v25, &v29, a1 + 1052);
  FIELD_U8(a1, 1108) = 1;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "fxaa_detect_edge_qa";
  v26 = (const char *)&unk_60AEBA90;
  v7 = default_ref_9419C8(a1 + 1112);
  FIELD_U32(a1, 1112) = &off_60C5E01C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v7, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1124) = 0;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "fxaa_fetcht_qa";
  v26 = (const char *)&unk_60AEBABE;
  v8 = default_ref_9419C8(a1 + 1128);
  FIELD_U32(a1, 1128) = &off_60C5E01C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v8, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1140) = 1;
  v29 = &sead__SafeStringBase__vtable;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v30 = "subpix_param";
  v28 = (const char *)&unk_60AEBAF9;
  v26 = "Min = 0.0, Max = 0.5, Mode = MinMaxLock";
  v9 = default_ref_9419C8(a1 + 1144);
  FIELD_U32(a1, 1144) = &off_60C5DC9C;
  sub_60941A08(v9, &v29, &v27, &v25, a1 + 1052);
  FIELD_U32(a1, 1156) = 1041865114;
  v29 = &sead__SafeStringBase__vtable;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v30 = "max_span";
  v28 = (const char *)&unk_60AEBB58;
  v26 = "Min = 0.0, Max = 5.0";
  v10 = default_ref_9419C8(a1 + 1160);
  FIELD_U32(a1, 1160) = &off_60C5DC9C;
  sub_60941A08(v10, &v29, &v27, &v25, a1 + 1052);
  FIELD_U32(a1, 1172) = 1077936128;
  v29 = &sead__SafeStringBase__vtable;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v30 = "span_multiply";
  v28 = (const char *)&unk_60AEBB91;
  v26 = "Min = 0.1, Max = 5.0";
  v11 = default_ref_9419C8(a1 + 1176);
  FIELD_U32(a1, 1176) = &off_60C5DC9C;
  sub_60941A08(v11, &v29, &v27, &v25, a1 + 1052);
  FIELD_U32(a1, 1188) = 1065353216;
  v29 = &sead__SafeStringBase__vtable;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v30 = "span_minimum";
  v28 = (const char *)&unk_60AEBBC9;
  v26 = "Min = 0.0, Max = 0.1";
  v12 = default_ref_9419C8(a1 + 1192);
  FIELD_U32(a1, 1192) = &off_60C5DC9C;
  sub_60941A08(v12, &v29, &v27, &v25, a1 + 1052);
  FIELD_U32(a1, 1204) = 1025758986;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "fxaa_reprojection";
  v26 = (const char *)&unk_60AEBC1F;
  v13 = default_ref_9419C8(a1 + 1208);
  FIELD_U32(a1, 1208) = &off_60C5D848;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v13, &v27, &v25, &v29, a1 + 1052);
  FIELD_U8(a1, 1220) = 1;
  v29 = &sead__SafeStringBase__vtable;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v30 = "fxaa_reprojection_move_limit";
  v28 = (const char *)&unk_60AEBC58;
  v26 = "Min = 1, Max = 16";
  v14 = default_ref_9419C8(a1 + 1224);
  FIELD_U32(a1, 1224) = &off_60C5DC9C;
  sub_60941A08(v14, &v29, &v27, &v25, a1 + 1052);
  FIELD_U32(a1, 1236) = 1090519040;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "smaa_variation";
  v26 = (const char *)&unk_60AEBCB6;
  v15 = default_ref_9419C8(a1 + 1240);
  FIELD_U32(a1, 1240) = &off_60C5E01C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v15, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1252) = 0;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "smaa_detect_edge_qa";
  v26 = (const char *)&unk_60AEBA90;
  v16 = default_ref_9419C8(a1 + 1256);
  FIELD_U32(a1, 1256) = &off_60C5E01C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v16, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1268) = 0;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "smaa_line_detect_qa";
  v26 = (const char *)&unk_60AEBCF4;
  v17 = default_ref_9419C8(a1 + 1272);
  FIELD_U32(a1, 1272) = &off_60C5E01C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v17, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1284) = 2;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "smaa_line_detect_th";
  v26 = (const char *)&unk_60AEBD27;
  v18 = default_ref_9419C8(a1 + 1288);
  FIELD_U32(a1, 1288) = &off_60C5DC9C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v18, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1300) = 1033476506;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "smaa_line_detect_local_adopt";
  v26 = (const char *)&unk_60AEBD5A;
  v19 = default_ref_9419C8(a1 + 1304);
  FIELD_U32(a1, 1304) = &off_60C5DC9C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v19, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1316) = 0x40000000;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "smaa_weight_calc_qa";
  v26 = (const char *)&unk_60AEBD84;
  v20 = default_ref_9419C8(a1 + 1320);
  FIELD_U32(a1, 1320) = &off_60C5E01C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v20, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1332) = 0;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "smaa_velocity_penalty_scale";
  v26 = (const char *)&unk_60AEBDBC;
  v21 = default_ref_9419C8(a1 + 1336);
  FIELD_U32(a1, 1336) = &off_60C5DC9C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v21, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1348) = 1065353216;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v28 = "depth_mask_func";
  v26 = (const char *)&unk_60AEBDF4;
  v22 = default_ref_9419C8(a1 + 1352);
  FIELD_U32(a1, 1352) = &off_60C5E27C;
  v29 = &sead__SafeStringBase__vtable;
  v30 = &byte_60ABC94D;
  sub_60941A08(v22, &v27, &v25, &v29, a1 + 1052);
  FIELD_U32(a1, 1364) = 7;
  v29 = &sead__SafeStringBase__vtable;
  v27 = &sead__SafeStringBase__vtable;
  v25 = &sead__SafeStringBase__vtable;
  v30 = "depth_mask_reference";
  v28 = (const char *)&unk_60AEBE25;
  v26 = "Min = 0.0, Max = 1.0";
  v23 = default_ref_9419C8(a1 + 1368);
  FIELD_U32(a1, 1368) = &off_60C5DC9C;
  sub_60941A08(v23, &v29, &v27, &v25, a1 + 1052);
  FIELD_U32(a1, 1380) = 1065353216;
  FIELD_U32(a1, 1396) = 0;
  FIELD_U32(a1, 1392) = 1038710997;
  FIELD_U32(a1, 1388) = 1058424226;
  FIELD_U32(a1, 1384) = 1050220167;
  FIELD_U32(a1, 1400) = 1065353216;
  FIELD_U32(a1, 1536) = 0;
  FIELD_U32(a1, 1540) = 0;
  FIELD_U32(a1, 1544) = 0;
  FIELD_U8(a1, 1548) = 1;
  FIELD_U8(a1, 1549) = 0;
  FIELD_U8(a1, 1552) = 0;
  FIELD_U8(a1, 1551) = 0;
  FIELD_U8(a1, 1550) = 0;
  FIELD_U8(a1, 1553) = 0;
  FIELD_U8(a1, 1554) = 1;
  FIELD_U8(a1, 1555) = 0;
  FIELD_U8(a1, 1556) = 1;
  FIELD_U8(a1, 1557) = 1;
  FIELD_U32(a1, 1560) = 0;
  FIELD_U32(a1, 1564) = 0;
  agl_TextureData_ref(a1 + 1568);
  agl_TextureData_ref(a1 + 1840);
  agl_TextureSampler_ref(a1 + 2112);
  agl_TextureSampler_ref(a1 + 2456);
  sub_60913BB4(a1 + 2800);
  FIELD_U32(a1, 2800) = off_60BF9C1C;
  sub_60913BB4(a1 + 2828);
  FIELD_U32(a1, 2828) = off_60BF9C1C;
  sub_609394E8(a1 + 2856);
  v29 = &sead__SafeStringBase__vtable;
  v30 = "filter_aa";
  sub_60947360(a1, a1 + 1052, &v29);
  v29 = &sead__SafeStringBase__vtable;
  v30 = "Icon=CIRCLE_BLACK";
  sub_60969510(a1 + 396, &v29);
  FIELD_U32(a1, 1124) = 0;
  FIELD_U32(a1, 1140) = 1;
  FIELD_U32(a1, 1156) = 1041865114;
  FIELD_U32(a1, 1172) = 1077936128;
  FIELD_U32(a1, 1188) = 1065353216;
  FIELD_U32(a1, 1204) = 1025758986;
  FIELD_U8(a1, 1220) = 1;
  FIELD_U32(a1, 1236) = 1090519040;
  FIELD_U32(a1, 1364) = 8;
  FIELD_U32(a1, 1380) = 1065353216;
  FIELD_U32(a1, 1544) = 0;
  return a1;
}
