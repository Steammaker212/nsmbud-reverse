/* sub_6095CDD0
 * address: 0x6095CDD0   size: 1116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095CDD0(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  int (**v16)(); // [sp+4h] [bp-3Ch] BYREF
  const char *v17; // [sp+8h] [bp-38h]
  int (**v18)(); // [sp+Ch] [bp-34h] BYREF
  const char *v19; // [sp+10h] [bp-30h]
  int (**v20)(); // [sp+14h] [bp-2Ch] BYREF
  char *v21; // [sp+18h] [bp-28h]

  v20 = &sead__SafeStringBase__vtable;
  v21 = "aglsdw";
  param_root_ref((_DWORD *)a1, &v20, 0, a4);
  *(_DWORD *)a1 = off_60C5EAEC;
  FIELD_U32(a1, 396) = &off_60C5EB28;
  FIELD_U32(a1, 400) = sub_6095D2B8;
  FIELD_U32(a1, 404) = 0;
  FIELD_U32(a1, 408) = sub_6095D50C;
  FIELD_U32(a1, 412) = 0;
  sub_60947BCC((_DWORD *)(a1 + 416));
  FIELD_U32(a1, 416) = &off_60C5DAF8;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v19 = "cascade_num";
  v17 = "Cascade Num";
  v5 = default_ref_9419C8((_DWORD *)(a1 + 444));
  FIELD_U32(a1, 444) = &off_60C5E01C;
  v20 = &sead__SafeStringBase__vtable;
  v21 = &byte_60ABC94D;
  sub_60941A08((int)v5, (int *)&v18, (int)&v16, (int)&v20, a1 + 416);
  FIELD_U32(a1, 456) = 1;
  v20 = &sead__SafeStringBase__vtable;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v21 = "mip_level_num";
  v19 = "MipLevel Num";
  v17 = "Min=1, Max=8";
  v6 = default_ref_9419C8((_DWORD *)(a1 + 460));
  FIELD_U32(a1, 460) = &off_60C5E01C;
  sub_60941A08((int)v6, (int *)&v20, (int)&v18, (int)&v16, a1 + 416);
  FIELD_U32(a1, 472) = 1;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v19 = "depth_clamp";
  v17 = "Depth Clamp";
  v7 = default_ref_9419C8((_DWORD *)(a1 + 476));
  FIELD_U32(a1, 476) = &off_60C5D848;
  v20 = &sead__SafeStringBase__vtable;
  v21 = &byte_60ABC94D;
  sub_60941A08((int)v7, (int *)&v18, (int)&v16, (int)&v20, a1 + 416);
  FIELD_U8(a1, 488) = 1;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v19 = "bounding_calc_type";
  v17 = "Bounding Calc Type";
  v8 = default_ref_9419C8((_DWORD *)(a1 + 492));
  FIELD_U32(a1, 492) = &off_60C5E01C;
  v20 = &sead__SafeStringBase__vtable;
  v21 = &byte_60ABC94D;
  sub_60941A08((int)v8, (int *)&v18, (int)&v16, (int)&v20, a1 + 416);
  FIELD_U32(a1, 504) = 1;
  v20 = &sead__SafeStringBase__vtable;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v21 = "optimize_offset_near";
  v19 = "Optimize Offset Near";
  v17 = "Min=0";
  v9 = default_ref_9419C8((_DWORD *)(a1 + 508));
  FIELD_U32(a1, 508) = &off_60C5DC9C;
  sub_60941A08((int)v9, (int *)&v20, (int)&v18, (int)&v16, a1 + 416);
  FIELD_U32(a1, 520) = 0;
  v20 = &sead__SafeStringBase__vtable;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v17 = "Min=0";
  v21 = "optimize_offset_far";
  v19 = "Optimize Offset Far";
  v10 = default_ref_9419C8((_DWORD *)(a1 + 524));
  FIELD_U32(a1, 524) = &off_60C5DC9C;
  sub_60941A08((int)v10, (int *)&v20, (int)&v18, (int)&v16, a1 + 416);
  FIELD_U32(a1, 536) = 0;
  v20 = &sead__SafeStringBase__vtable;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v21 = "stable_texel_width";
  v19 = "Stable Texel Width";
  v17 = "Min=1, Max=32";
  v11 = default_ref_9419C8((_DWORD *)(a1 + 540));
  FIELD_U32(a1, 540) = &off_60C5E01C;
  sub_60941A08((int)v11, (int *)&v20, (int)&v18, (int)&v16, a1 + 416);
  FIELD_U32(a1, 552) = 1;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v19 = "cascade_near";
  v17 = "cascade_near";
  v12 = default_ref_9419C8((_DWORD *)(a1 + 556));
  FIELD_U32(a1, 556) = &off_60C5E690;
  v20 = &sead__SafeStringBase__vtable;
  v21 = &byte_60ABC94D;
  sub_60941A08((int)v12, (int *)&v18, (int)&v16, (int)&v20, a1 + 416);
  FIELD_U32(a1, 568) = 0;
  FIELD_U32(a1, 556) = &off_60C5E640;
  FIELD_U32(a1, 572) = 0;
  FIELD_U8(a1, 576) = 0;
  v20 = &sead__SafeStringBase__vtable;
  v21 = "same_point_epsilon";
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v19 = "Same Point Epsilon";
  v17 = "Min=0, Max=1";
  v13 = default_ref_9419C8((_DWORD *)(a1 + 580));
  FIELD_U32(a1, 580) = &off_60C5DC9C;
  sub_60941A08((int)v13, (int *)&v20, (int)&v18, (int)&v16, a1 + 416);
  FIELD_U32(a1, 592) = 1028443341;
  v18 = &sead__SafeStringBase__vtable;
  v16 = &sead__SafeStringBase__vtable;
  v19 = "near_far_margin_array";
  v17 = "Near Far Margin";
  v14 = default_ref_9419C8((_DWORD *)(a1 + 596));
  FIELD_U32(a1, 596) = &off_60C5E690;
  v20 = &sead__SafeStringBase__vtable;
  v21 = &byte_60ABC94D;
  sub_60941A08((int)v14, (int *)&v18, (int)&v16, (int)&v20, a1 + 416);
  FIELD_U32(a1, 608) = 0;
  FIELD_U32(a1, 596) = &off_60C5E640;
  FIELD_U32(a1, 612) = 0;
  FIELD_U8(a1, 616) = 0;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 624) = 0;
  sub_60964AD0(a1 + 632);
  FIELD_U8(a1, 4304) = 1;
  sub_609673A0(a1 + 4308);
  FIELD_U32(a1, 4424) = 0;
  FIELD_U32(a1, 4460) = 0;
  return a1;
}
