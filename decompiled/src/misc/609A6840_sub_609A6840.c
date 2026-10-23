/* sub_609A6840
 * address: 0x609A6840   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A6840(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r0
  _DWORD v7[2]; // [sp+8h] [bp-38h] BYREF
  int v8[2]; // [sp+10h] [bp-30h] BYREF
  int (**v9)(); // [sp+18h] [bp-28h] BYREF
  char *v10; // [sp+1Ch] [bp-24h]

  *(_DWORD *)a1 = &off_60C5D53C;
  v9 = &sead__SafeStringBase__vtable;
  v10 = "aglmf";
  param_root_ref((_DWORD *)(a1 + 4), &v9, 0, a4);
  FIELD_U32(a1, 408) = 0;
  FIELD_U32(a1, 404) = a1 + 400;
  FIELD_U32(a1, 400) = a1 + 400;
  *(_DWORD *)a1 = off_60C60E18;
  FIELD_U32(a1, 4) = off_60C60E34;
  FIELD_U32(a1, 420) = 0;
  FIELD_U32(a1, 416) = a1 + 412;
  FIELD_U32(a1, 412) = a1 + 412;
  FIELD_U32(a1, 432) = 0;
  FIELD_U32(a1, 428) = a1 + 424;
  FIELD_U32(a1, 424) = a1 + 424;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 440) = a1 + 436;
  FIELD_U32(a1, 436) = a1 + 436;
  FIELD_U32(a1, 456) = 0;
  FIELD_U32(a1, 452) = a1 + 448;
  FIELD_U32(a1, 448) = a1 + 448;
  FIELD_U32(a1, 468) = 0;
  FIELD_U32(a1, 464) = a1 + 460;
  FIELD_U32(a1, 460) = a1 + 460;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 476) = a1 + 472;
  FIELD_U32(a1, 472) = a1 + 472;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 488) = a1 + 484;
  FIELD_U32(a1, 484) = a1 + 484;
  sub_609472C0((_DWORD *)(a1 + 496));
  FIELD_U32(a1, 496) = &off_60C5DACC;
  sub_609472C0((_DWORD *)(a1 + 532));
  FIELD_U32(a1, 532) = &off_60C5DACC;
  sub_609472C0((_DWORD *)(a1 + 568));
  FIELD_U32(a1, 568) = &off_60C5DACC;
  sub_609472C0((_DWORD *)(a1 + 604));
  FIELD_U32(a1, 604) = &off_60C5DACC;
  sub_609472C0((_DWORD *)(a1 + 640));
  FIELD_U32(a1, 640) = &off_60C5DACC;
  sub_609472C0((_DWORD *)(a1 + 676));
  FIELD_U32(a1, 676) = &off_60C5DACC;
  sub_609472C0((_DWORD *)(a1 + 712));
  FIELD_U32(a1, 712) = &off_60C5DACC;
  agl_TextureSampler_ref(a1 + 880);
  sub_60919E88((_DWORD *)(a1 + 1224));
  sub_6091ABEC((_DWORD *)(a1 + 1288));
  sub_609ACB18(a1 + 1640);
  FIELD_U32(a1, 1692) = 0;
  FIELD_U8(a1, 1696) = 1;
  FIELD_U8(a1, 1697) = 0;
  FIELD_U8(a1, 1698) = 0;
  FIELD_U32(a1, 1700) = 0;
  sub_60947BCC((_DWORD *)(a1 + 1704));
  FIELD_U32(a1, 1704) = &off_60C5DAF8;
  v8[0] = (int)&sead__SafeStringBase__vtable;
  v7[0] = &sead__SafeStringBase__vtable;
  v8[1] = (int)"result_sampler_linear";
  v7[1] = &unk_60AF17E9;
  v5 = default_ref_9419C8((_DWORD *)(a1 + 1732));
  FIELD_U32(a1, 1732) = &off_60C5D848;
  v9 = &sead__SafeStringBase__vtable;
  v10 = &byte_60ABC94D;
  sub_60941A08((int)v5, v8, (int)v7, (int)&v9, a1 + 1704);
  FIELD_U8(a1, 1744) = 1;
  sub_609AA2F0(a1 + 1748, -1);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "Icon=LIGHT";
  sub_60969510(a1, &v9);
  FIELD_U32(a1, 868) = 0;
  FIELD_U32(a1, 1252) = a1 + 1288;
  FIELD_U32(a1, 1632) = 1;
  FIELD_U32(a1, 872) = 29;
  FIELD_U8(a1, 1636) = 0;
  FIELD_U32(a1, 864) = 0;
  FIELD_U32(a1, 1672) = 29;
  FIELD_U32(a1, 1676) = 0;
  FIELD_U32(a1, 1680) = 0;
  FIELD_U32(a1, 1684) = 0;
  FIELD_U32(a1, 1688) = 0;
  return a1;
}
