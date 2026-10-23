/* sub_6027B330
 * address: 0x6027B330   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027B330(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BDD2DC;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6324) = 0;
  FIELD_U32(a1, 6336) = 0;
  FIELD_U32(a1, 6348) = 0;
  FIELD_U32(a1, 6360) = 0;
  FIELD_U32(a1, 6372) = 0;
  FIELD_U32(a1, 6384) = 0;
  FIELD_U32(a1, 6396) = 0;
  FIELD_U32(a1, 6408) = 0;
  FIELD_U32(a1, 6420) = 0;
  FIELD_U32(a1, 6432) = 0;
  FIELD_U32(a1, 6444) = 0;
  FIELD_U32(a1, 6456) = 0;
  FIELD_U32(a1, 6468) = 0;
  FIELD_U32(a1, 6480) = 0;
  FIELD_U32(a1, 8544) = 1;
  FIELD_U32(a1, 8548) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8588));
  FIELD_U32(a1, 8588) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8692));
  FIELD_U32(a1, 8692) = off_60BC1450;
  sub_602A8564(a1 + 8872, FIELD_U32(a1, 8));
  sub_602A40A0(a1 + 8908, FIELD_U32(a1, 8));
  FIELD_U32(a1, 8944) = 2139095039;
  FIELD_U32(a1, 8948) = 2139095039;
  FIELD_U32(a1, 8952) = -8388609;
  FIELD_U32(a1, 8956) = -8388609;
  FIELD_U8(a1, 8960) = 0;
  FIELD_U32(a1, 8968) = 0;
  FIELD_U32(a1, 8972) = 0;
  FIELD_U8(a1, 8976) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8980));
  FIELD_U32(a1, 9284) = off_60BDD58C;
  FIELD_U32(a1, 9288) = &ActorScaler_vtable;
  FIELD_U32(a1, 9292) = 1065353216;
  FIELD_U32(a1, 9296) = 1065353216;
  FIELD_U32(a1, 9300) = 1065353216;
  FIELD_U32(a1, 9304) = 1065353216;
  FIELD_U32(a1, 9308) = 0;
  FIELD_U32(a1, 9312) = 0;
  FIELD_U32(a1, 9316) = a1;
  FIELD_U8(a1, 9320) = 0;
  FIELD_U8(a1, 9321) = 0;
  FIELD_U8(a1, 9322) = 0;
  FIELD_U8(a1, 9325) = 0;
  FIELD_U8(a1, 6298) = 7;
  return a1;
}
