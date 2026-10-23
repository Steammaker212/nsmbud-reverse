/* sub_609AA978
 * address: 0x609AA978   size: 2064   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609AA978(int a1, int a2, int a3, int a4)
{
  __int64 v5; // r2
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  int v23; // [sp+20h] [bp-40h]
  int (**v24)(); // [sp+24h] [bp-3Ch] BYREF
  const char *v25; // [sp+28h] [bp-38h]
  int (**v26)(); // [sp+2Ch] [bp-34h] BYREF
  const char *v27; // [sp+30h] [bp-30h]
  int (**v28)(); // [sp+34h] [bp-2Ch] BYREF
  char *v29; // [sp+38h] [bp-28h]

  *(_DWORD *)a1 = &off_60C5D53C;
  v28 = &sead__SafeStringBase__vtable;
  v29 = "aglccr";
  v23 = a1 + 4;
  param_root_ref((_DWORD *)(a1 + 4), &v28, 0, a4);
  LODWORD(v5) = off_60C61150;
  HIDWORD(v5) = off_60C61168;
  *(_QWORD *)a1 = v5;
  sub_60947BCC((_DWORD *)(a1 + 400));
  FIELD_U32(a1, 400) = &off_60C5DAF8;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v27 = "enable";
  v25 = (const char *)&unk_60AEAF58;
  v6 = default_ref_9419C8((_DWORD *)(a1 + 428));
  FIELD_U32(a1, 428) = &off_60C5D848;
  v28 = &sead__SafeStringBase__vtable;
  v29 = &byte_60ABC94D;
  sub_60941A08((int)v6, (int *)&v26, (int)&v24, (int)&v28, a1 + 400);
  FIELD_U8(a1, 440) = 1;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v29 = "hue";
  v27 = (const char *)&unk_60AF1C57;
  v25 = "Min=-180, Max=180";
  v7 = default_ref_9419C8((_DWORD *)(a1 + 444));
  FIELD_U32(a1, 444) = &off_60C5DC9C;
  sub_60941A08((int)v7, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 456) = 0;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v29 = "saturation";
  v27 = (const char *)&unk_60AEB732;
  v25 = "Min=0, Max=2";
  v8 = default_ref_9419C8((_DWORD *)(a1 + 460));
  FIELD_U32(a1, 460) = &off_60C5DC9C;
  sub_60941A08((int)v8, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 472) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v25 = "Min=0, Max=2";
  v29 = "brightness";
  v27 = (const char *)&unk_60AF1C86;
  v9 = default_ref_9419C8((_DWORD *)(a1 + 476));
  FIELD_U32(a1, 476) = &off_60C5DC9C;
  sub_60941A08((int)v9, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 488) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v29 = "gamma";
  v27 = (const char *)&unk_60AF1C93;
  v25 = "Min=0.25, Max=4";
  v10 = default_ref_9419C8((_DWORD *)(a1 + 492));
  FIELD_U32(a1, 492) = &off_60C5DC9C;
  sub_60941A08((int)v10, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 504) = 1065353216;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v27 = "order_toycam_hsb";
  v25 = (const char *)&unk_60AF1CC4;
  v11 = default_ref_9419C8((_DWORD *)(a1 + 508));
  FIELD_U32(a1, 508) = &off_60C5D848;
  v28 = &sead__SafeStringBase__vtable;
  v29 = &byte_60ABC94D;
  sub_60941A08((int)v11, (int *)&v26, (int)&v24, (int)&v28, a1 + 400);
  FIELD_U8(a1, 520) = 0;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v27 = "toycam_enable";
  v25 = (const char *)&unk_60AF1D06;
  v12 = default_ref_9419C8((_DWORD *)(a1 + 524));
  FIELD_U32(a1, 524) = &off_60C5D848;
  v28 = &sead__SafeStringBase__vtable;
  v29 = &byte_60ABC94D;
  sub_60941A08((int)v12, (int *)&v26, (int)&v24, (int)&v28, a1 + 400);
  FIELD_U8(a1, 536) = 0;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v29 = "toycam_offset1";
  v27 = (const char *)&unk_60AF1D31;
  v25 = "Min=0, Max=1";
  v13 = default_ref_9419C8((_DWORD *)(a1 + 540));
  FIELD_U32(a1, 540) = &off_60C5DC4C;
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 560) = 0;
  FIELD_U32(a1, 564) = 1065353216;
  sub_60941A08((int)v13, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 552) = 0;
  FIELD_U32(a1, 556) = 0;
  FIELD_U32(a1, 560) = 0;
  FIELD_U32(a1, 564) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v25 = "Min=0, Max=1";
  v29 = "toycam_offset2";
  v27 = (const char *)&unk_60AF1D5C;
  v14 = default_ref_9419C8((_DWORD *)(a1 + 568));
  FIELD_U32(a1, 568) = &off_60C5DC4C;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 588) = 0;
  FIELD_U32(a1, 592) = 1065353216;
  sub_60941A08((int)v14, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 584) = 0;
  FIELD_U32(a1, 588) = 0;
  FIELD_U32(a1, 592) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v29 = "toycam_level1";
  v25 = "Min=0, Max=2";
  v27 = (const char *)&unk_60AF1D86;
  v15 = default_ref_9419C8((_DWORD *)(a1 + 596));
  FIELD_U32(a1, 596) = &off_60C5DC4C;
  FIELD_U32(a1, 608) = 0;
  FIELD_U32(a1, 612) = 0;
  FIELD_U32(a1, 616) = 0;
  FIELD_U32(a1, 620) = 1065353216;
  sub_60941A08((int)v15, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 608) = 1065353216;
  FIELD_U32(a1, 612) = 1065353216;
  FIELD_U32(a1, 616) = 1065353216;
  FIELD_U32(a1, 620) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v25 = "Min=0, Max=2";
  v29 = "toycam_level2";
  v27 = (const char *)&unk_60AF1DA7;
  v16 = default_ref_9419C8((_DWORD *)(a1 + 624));
  FIELD_U32(a1, 624) = &off_60C5DC4C;
  FIELD_U32(a1, 636) = 0;
  FIELD_U32(a1, 640) = 0;
  FIELD_U32(a1, 644) = 0;
  FIELD_U32(a1, 648) = 1065353216;
  sub_60941A08((int)v16, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 636) = 1065353216;
  FIELD_U32(a1, 640) = 1065353216;
  FIELD_U32(a1, 644) = 1065353216;
  FIELD_U32(a1, 648) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v25 = "Min=0, Max=2";
  v29 = "toycam_saturation1";
  v27 = (const char *)&unk_60AF1DCD;
  v17 = default_ref_9419C8((_DWORD *)(a1 + 652));
  FIELD_U32(a1, 652) = &off_60C5DC9C;
  sub_60941A08((int)v17, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 664) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v25 = "Min=0, Max=2";
  v29 = "toycam_saturation2";
  v27 = (const char *)&unk_60AF1DEA;
  v18 = default_ref_9419C8((_DWORD *)(a1 + 668));
  FIELD_U32(a1, 668) = &off_60C5DC9C;
  sub_60941A08((int)v18, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 680) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v25 = "Min=0, Max=2";
  v29 = "toycam_brightness";
  v27 = (const char *)&unk_60AF1C86;
  v19 = default_ref_9419C8((_DWORD *)(a1 + 684));
  FIELD_U32(a1, 684) = &off_60C5DC9C;
  sub_60941A08((int)v19, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 696) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v25 = "Min=0, Max=2";
  v29 = "toycam_contrast";
  v27 = (const char *)&unk_60AF1E16;
  v20 = default_ref_9419C8((_DWORD *)(a1 + 700));
  FIELD_U32(a1, 700) = &off_60C5DC9C;
  sub_60941A08((int)v20, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 712) = 1065353216;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v24 = &sead__SafeStringBase__vtable;
  v29 = "toycam_mul_color";
  v27 = (const char *)&unk_60AF1E3A;
  v25 = "Min=0, Max=1";
  v21 = default_ref_9419C8((_DWORD *)(a1 + 716));
  FIELD_U32(a1, 716) = &off_60C5DC4C;
  FIELD_U32(a1, 728) = 0;
  FIELD_U32(a1, 732) = 0;
  FIELD_U32(a1, 736) = 0;
  FIELD_U32(a1, 740) = 1065353216;
  sub_60941A08((int)v21, (int *)&v28, (int)&v26, (int)&v24, a1 + 400);
  FIELD_U32(a1, 728) = 1065353216;
  FIELD_U32(a1, 732) = 1065353216;
  FIELD_U32(a1, 736) = 1065353216;
  FIELD_U32(a1, 740) = 1065353216;
  sub_6090B350(a1 + 744);
  FIELD_U32(a1, 848) = 0;
  FIELD_U32(a1, 852) = 0;
  sub_60919E88((_DWORD *)(a1 + 856));
  sub_6091ABEC((_DWORD *)(a1 + 920));
  sub_6091ABEC((_DWORD *)(a1 + 1264));
  sub_6091ABEC((_DWORD *)(a1 + 1608));
  sub_6091ABEC((_DWORD *)(a1 + 1952));
  sub_6091ABEC((_DWORD *)(a1 + 2296));
  sub_6091ABEC((_DWORD *)(a1 + 2640));
  sub_6091ABEC((_DWORD *)(a1 + 2984));
  sub_6091ABEC((_DWORD *)(a1 + 3328));
  agl_TextureData_ref(a1 + 3672);
  agl_TextureSampler_ref(a1 + 3944);
  FIELD_U32(a1, 4308) = 0;
  FIELD_U32(a1, 4304) = 0;
  FIELD_U32(a1, 4300) = 0;
  FIELD_U32(a1, 4296) = 0;
  FIELD_U32(a1, 4292) = 0;
  FIELD_U32(a1, 4288) = 0;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v29 = "level";
  v27 = (const char *)&unk_60AF1E4A;
  sub_609ACF8C(a1 + 4456, &v28, &v26, a1 + 400);
  FIELD_U32(a1, 5036) = 0;
  FIELD_U32(a1, 5040) = 0;
  FIELD_U32(a1, 748) &= ~1u;
  FIELD_U8(a1, 744) = 0;
  FIELD_U8(a1, 745) = 0;
  FIELD_U32(a1, 5028) = 3;
  v28 = &sead__SafeStringBase__vtable;
  v29 = "Icon=COLOR";
  sub_60969510(a1, &v28);
  v28 = &sead__SafeStringBase__vtable;
  v29 = "color_correction";
  sub_60947360(v23, a1 + 400, (int *)&v28);
  sub_609AB258(a1);
  return a1;
}
