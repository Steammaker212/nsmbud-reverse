/* sub_60055844
 * address: 0x60055844   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60055844(int a1, ActorBuildInfo *a2)
{
  sub_6004D884(a1, a2);
  *(_DWORD *)a1 = off_60BC4080;
  FIELD_U32(a1, 8392) = 150;
  FIELD_U32(a1, 8396) = 60;
  FIELD_U32(a1, 8400) = 10;
  FIELD_U32(a1, 8404) = 0;
  FIELD_U32(a1, 8408) = 0;
  FIELD_U32(a1, 8412) = 1028443341;
  FIELD_U32(a1, 8416) = 1031127695;
  FIELD_U32(a1, 8420) = 0;
  FIELD_U32(a1, 8424) = 1115684864;
  FIELD_U32(a1, 8428) = 1125122048;
  FIELD_U32(a1, 8432) = 1114636288;
  FIELD_U32(a1, 8436) = 1075419546;
  FIELD_U32(a1, 8440) = dword_60C80A20;
  FIELD_U32(a1, 8444) = dword_60C80A2C;
  FIELD_U32(a1, 8448) = 1110704128;
  FIELD_U32(a1, 8452) = dword_60C80A24;
  FIELD_U32(a1, 8456) = dword_60C80A28;
  FIELD_U32(a1, 8460) = 1112276992;
  FIELD_U32(a1, 8464) = 1109917696;
  FIELD_U32(a1, 8468) = 1065353216;
  FIELD_U32(a1, 8472) = 51;
  FIELD_U32(a1, 8476) = 1065353216;
  FIELD_U32(a1, 8480) = 1103101952;
  FIELD_U32(a1, 8484) = 1065353216;
  FIELD_U32(a1, 8488) = 24;
  FIELD_U32(a1, 8492) = 1065353216;
  FIELD_U32(a1, 8520) = 0;
  FIELD_U32(a1, 8516) = 0;
  FIELD_U32(a1, 8512) = 0;
  FIELD_U32(a1, 8508) = 0;
  FIELD_U32(a1, 8504) = 0;
  FIELD_U32(a1, 8496) = 0;
  FIELD_U32(a1, 8500) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8524));
  FIELD_U32(a1, 8524) = off_60BC1450;
  FIELD_U8(a1, 8628) = 0;
  FIELD_U32(a1, 8632) = 0;
  FIELD_U32(a1, 8688) = 0;
  FIELD_U32(a1, 8692) = -1;
  EffectData_ctor((EffectData *)(a1 + 8636));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1012))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1284))(a1);
  return a1;
}
