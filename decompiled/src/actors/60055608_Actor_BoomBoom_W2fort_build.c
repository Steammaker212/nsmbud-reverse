/* Actor_BoomBoom_W2fort_build
 * address: 0x60055608   size: 560   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_BoomBoom_W2fort_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1

  v2 = operator_new(0x2200u);
  sub_6004D884(v2, a1);
  *(_DWORD *)v2 = off_60BC4080;
  FIELD_U32(v2, 8392) = 150;
  FIELD_U32(v2, 8396) = 60;
  FIELD_U32(v2, 8400) = 10;
  FIELD_U32(v2, 8404) = 0;
  FIELD_U32(v2, 8408) = 0;
  FIELD_U32(v2, 8412) = 1028443341;
  FIELD_U32(v2, 8416) = 1031127695;
  FIELD_U32(v2, 8420) = 0;
  FIELD_U32(v2, 8424) = 1115684864;
  FIELD_U32(v2, 8428) = 1125122048;
  FIELD_U32(v2, 8432) = 1114636288;
  FIELD_U32(v2, 8436) = 1075419546;
  FIELD_U32(v2, 8440) = dword_60C80A20;
  FIELD_U32(v2, 8444) = dword_60C80A2C;
  FIELD_U32(v2, 8448) = 1110704128;
  v3 = dword_60C80A28;
  FIELD_U32(v2, 8452) = dword_60C80A24;
  FIELD_U32(v2, 8456) = v3;
  FIELD_U32(v2, 8460) = 1112276992;
  FIELD_U32(v2, 8464) = 1109917696;
  FIELD_U32(v2, 8468) = 1065353216;
  FIELD_U32(v2, 8472) = 51;
  FIELD_U32(v2, 8476) = 1065353216;
  FIELD_U32(v2, 8480) = 1103101952;
  FIELD_U32(v2, 8484) = 1065353216;
  FIELD_U32(v2, 8488) = 24;
  FIELD_U32(v2, 8492) = 1065353216;
  FIELD_U32(v2, 8520) = 0;
  FIELD_U32(v2, 8516) = 0;
  FIELD_U32(v2, 8512) = 0;
  FIELD_U32(v2, 8508) = 0;
  FIELD_U32(v2, 8504) = 0;
  FIELD_U32(v2, 8496) = 0;
  FIELD_U32(v2, 8500) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 8524));
  FIELD_U32(v2, 8524) = off_60BC1450;
  FIELD_U8(v2, 8628) = 0;
  FIELD_U32(v2, 8632) = 0;
  FIELD_U32(v2, 8688) = 0;
  FIELD_U32(v2, 8692) = -1;
  EffectData_ctor((EffectData *)(v2 + 8636));
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 1012))(v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 1284))(v2);
  return v2;
}
