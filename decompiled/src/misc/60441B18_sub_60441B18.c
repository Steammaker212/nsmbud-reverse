/* sub_60441B18
 * address: 0x60441B18   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60441B18(int a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  sub_604435D8();
  *(_DWORD *)a1 = off_60BFACF0;
  FIELD_U32(a1, 16) = &off_60BFAD4C;
  FIELD_U32(a1, 432) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 436));
  FIELD_U32(a1, 452) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 456) = &byte_60ABC94D;
  FIELD_U32(a1, 436) = off_60C5E9A4;
  FIELD_U32(a1, 460) = 0;
  FIELD_U32(a1, 464) = 0;
  FIELD_U32(a1, 468) = 1;
  FIELD_U32(a1, 476) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 472) = off_60BD8394;
  FIELD_U32(a1, 504) = 960;
  FIELD_U32(a1, 508) = 540;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 516) = 0;
  sub_6091ABEC(a1 + 520);
  sub_6091AC40(a1 + 864);
  v3[0] = 1151336448;
  v3[1] = 1144258560;
  ((void (__fastcall *)(int, _DWORD *, float, float, float, float))loc_60919ED8)(
    a1 + 1208,
    v3,
    0.0,
    0.0,
    (float)FIELD_S32(a1, 504),
    (float)FIELD_S32(a1, 508));
  agl_TextureSampler_ref(a1 + 1272);
  sub_604111E4((_DWORD *)(a1 + 1616));
  FIELD_U32(a1, 1692) = 0;
  FIELD_U32(a1, 1696) = 0;
  FIELD_U32(a1, 1700) = 0;
  FIELD_U32(a1, 1704) = 1065353216;
  FIELD_U8(a1, 1708) = 1;
  sub_609394E8(a1 + 1712);
  FIELD_U32(a1, 1684) = -1032847360;
  FIELD_U32(a1, 1688) = 1132593152;
  FIELD_U32(a1, 1692) = 0;
  FIELD_U32(a1, 1696) = 0;
  FIELD_U32(a1, 1700) = 1065353216;
  FIELD_U32(a1, 1704) = 0;
  return a1;
}
