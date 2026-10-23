/* sub_60964AD0
 * address: 0x60964AD0   size: 1648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60964AD0(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
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
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int (**v21)(); // [sp+4h] [bp-3Ch] BYREF
  const char *v22; // [sp+8h] [bp-38h]
  int (**v23)(); // [sp+Ch] [bp-34h] BYREF
  const char *v24; // [sp+10h] [bp-30h]
  int (**v25)(); // [sp+14h] [bp-2Ch] BYREF
  char *v26; // [sp+18h] [bp-28h]

  sub_60947BCC((_DWORD *)a1);
  *(_DWORD *)a1 = off_60C5EB6C;
  FIELD_U32(a1, 28) = &off_60C5EB98;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "shadow_map_type";
  v22 = "Shadow Map Type";
  v2 = default_ref_9419C8((_DWORD *)(a1 + 32));
  FIELD_U32(a1, 32) = &off_60C5E01C;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v2, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U32(a1, 44) = 0;
  v25 = &sead__SafeStringBase__vtable;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v26 = "size_w";
  v24 = (const char *)&unk_60AECCED;
  v22 = "Min=32,Max=2048";
  v3 = default_ref_9419C8((_DWORD *)(a1 + 48));
  FIELD_U32(a1, 48) = &off_60C5E01C;
  sub_60941A08((int)v3, (int *)&v25, (int)&v23, (int)&v21, a1);
  FIELD_U32(a1, 60) = 512;
  v25 = &sead__SafeStringBase__vtable;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v22 = "Min=32,Max=2048";
  v26 = "size_h";
  v24 = (const char *)&unk_60AEB442;
  v4 = default_ref_9419C8((_DWORD *)(a1 + 64));
  FIELD_U32(a1, 64) = &off_60C5E01C;
  sub_60941A08((int)v4, (int *)&v25, (int)&v23, (int)&v21, a1);
  FIELD_U32(a1, 76) = 512;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "reduce_type";
  v22 = (const char *)&unk_60AECD14;
  v5 = default_ref_9419C8((_DWORD *)(a1 + 80));
  FIELD_U32(a1, 80) = &off_60C5E01C;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v5, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U32(a1, 92) = 0;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "enable_hiz";
  v22 = (const char *)&unk_60AECD41;
  v6 = default_ref_9419C8((_DWORD *)(a1 + 96));
  FIELD_U32(a1, 96) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v6, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 108) = 0;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "force_array";
  v22 = (const char *)&unk_60AECD57;
  v7 = default_ref_9419C8((_DWORD *)(a1 + 112));
  FIELD_U32(a1, 112) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v7, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 124) = 0;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "use_16_unorm";
  v22 = "16_UNorm";
  v8 = default_ref_9419C8((_DWORD *)(a1 + 128));
  FIELD_U32(a1, 128) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v8, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 140) = 0;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "alloc_without_ctx";
  v22 = "WithoutContext";
  v9 = default_ref_9419C8((_DWORD *)(a1 + 144));
  FIELD_U32(a1, 144) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v9, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 156) = 0;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "alloc_from_mem1";
  v22 = "Mem1";
  v10 = default_ref_9419C8((_DWORD *)(a1 + 160));
  FIELD_U32(a1, 160) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v10, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 172) = 1;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "expand_to_mem2";
  v22 = "Expand To Mem2";
  v11 = default_ref_9419C8((_DWORD *)(a1 + 176));
  FIELD_U32(a1, 176) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v11, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 188) = 0;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "expand_all_slice";
  v22 = (const char *)&unk_60AECDE4;
  v12 = default_ref_9419C8((_DWORD *)(a1 + 192));
  FIELD_U32(a1, 192) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v12, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 204) = 1;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "scissor";
  v22 = "Scissor";
  v13 = default_ref_9419C8((_DWORD *)(a1 + 208));
  FIELD_U32(a1, 208) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v13, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 220) = 1;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "create_half";
  v22 = (const char *)&unk_60AECE1E;
  v14 = default_ref_9419C8((_DWORD *)(a1 + 224));
  FIELD_U32(a1, 224) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v14, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 236) = 0;
  v25 = &sead__SafeStringBase__vtable;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v26 = "half_size_cascade_num";
  v24 = (const char *)&unk_60AECE57;
  v22 = "Min=-1,Max=4";
  v15 = default_ref_9419C8((_DWORD *)(a1 + 240));
  FIELD_U32(a1, 240) = &off_60C5E01C;
  sub_60941A08((int)v15, (int *)&v25, (int)&v23, (int)&v21, a1);
  FIELD_U32(a1, 252) = -1;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "create_quarter";
  v22 = (const char *)&unk_60AECEA2;
  v16 = default_ref_9419C8((_DWORD *)(a1 + 256));
  FIELD_U32(a1, 256) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v16, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 268) = 0;
  v25 = &sead__SafeStringBase__vtable;
  v23 = &sead__SafeStringBase__vtable;
  v26 = "quater_size_cascade_num";
  v24 = (const char *)&unk_60AECEE0;
  v21 = &sead__SafeStringBase__vtable;
  v22 = "Min=-1,Max=4";
  v17 = default_ref_9419C8((_DWORD *)(a1 + 272));
  FIELD_U32(a1, 272) = &off_60C5E01C;
  sub_60941A08((int)v17, (int *)&v25, (int)&v23, (int)&v21, a1);
  FIELD_U32(a1, 284) = -1;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v24 = "reduce_mem1";
  v22 = (const char *)&unk_60AECF1B;
  v18 = default_ref_9419C8((_DWORD *)(a1 + 288));
  FIELD_U32(a1, 288) = &off_60C5D848;
  v25 = &sead__SafeStringBase__vtable;
  v26 = &byte_60ABC94D;
  sub_60941A08((int)v18, (int *)&v23, (int)&v21, (int)&v25, a1);
  FIELD_U8(a1, 300) = 1;
  v25 = &sead__SafeStringBase__vtable;
  v23 = &sead__SafeStringBase__vtable;
  v21 = &sead__SafeStringBase__vtable;
  v26 = "scissor_margin";
  v24 = "Scissor Margin";
  v22 = "Min=0,Max=4";
  v19 = default_ref_9419C8((_DWORD *)(a1 + 304));
  FIELD_U32(a1, 304) = &off_60C5DC9C;
  sub_60941A08((int)v19, (int *)&v25, (int)&v23, (int)&v21, a1);
  FIELD_U32(a1, 316) = 1065353216;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 324) = 0;
  FIELD_U32(a1, 328) = 0;
  agl_TextureSampler_ref(a1 + 336);
  FIELD_U32(a1, 680) = 0;
  agl_TextureSampler_ref(a1 + 688);
  FIELD_U32(a1, 1032) = 0;
  agl_TextureSampler_ref(a1 + 1040);
  FIELD_U32(a1, 1384) = 0;
  agl_TextureSampler_ref(a1 + 1392);
  sub_6091AC40((_DWORD *)(a1 + 1736));
  sub_60919E88((_DWORD *)(a1 + 2080));
  sub_6091ABEC((_DWORD *)(a1 + 2144));
  sub_6091AC40((_DWORD *)(a1 + 2488));
  agl_TextureSampler_ref(a1 + 2832);
  sub_609394E8(a1 + 3176);
  FIELD_U16(a1, 3664) = 0;
  return a1;
}
