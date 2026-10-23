/* sub_60398C50
 * address: 0x60398C50   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60398C50(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BF40A0;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6312) = -1;
  FIELD_U16(a1, 6332) = 0;
  FIELD_U32(a1, 6328) = 0;
  FIELD_U32(a1, 6324) = 0;
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6320) = 0;
  FIELD_U16(a1, 6334) = 90;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U32(a1, 6340) = 0;
  FIELD_U32(a1, 6336) = 0;
  FIELD_U16(a1, 6348) = 3;
  FIELD_U16(a1, 6350) = 10000;
  FIELD_U16(a1, 6352) = 6;
  FIELD_U16(a1, 6354) = 0;
  FIELD_U16(a1, 6356) = 0;
  FIELD_U16(a1, 6400) = 0;
  memset(a1 + 6360, 0, 39);
  FIELD_U32(a1, 6404) = -1;
  FIELD_U32(a1, 6408) = 0;
  FIELD_U32(a1, 6436) = 0;
  FIELD_U32(a1, 6432) = 0;
  FIELD_U8(a1, 6440) = 0;
  sub_60378B30(a1 + 6444, a1);
  FIELD_U8(a1, 6524) = 0;
  FIELD_U32(a1, 6520) = 0;
  FIELD_U32(a1, 6516) = 0;
  FIELD_U32(a1, 6512) = 0;
  memset(a1 + 6528, 0, 50);
  FIELD_U32(a1, 6580) = 1065353216;
  FIELD_U32(a1, 6604) = 0;
  FIELD_U16(a1, 6600) = 0;
  FIELD_U32(a1, 6596) = 0;
  FIELD_U32(a1, 6592) = 0;
  FIELD_U32(a1, 6588) = 0;
  FIELD_U32(a1, 6584) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6608));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6912));
  sub_601531B4((CollisionMgr *)(a1 + 7216));
  EffectWrapper_ctor((EffectWrapper *)(a1 + 12568));
  FIELD_U32(a1, 12568) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 12672));
  FIELD_U32(a1, 12672) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 12776));
  FIELD_U32(a1, 12776) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 12880));
  FIELD_U32(a1, 12880) = off_60BC1450;
  FIELD_U32(a1, 12984) = 0;
  MovingSoundActor_ctor((MovingSoundActor *)(a1 + 12988), 0, 1);
  FIELD_U32(a1, 12988) = off_60BC19B4;
  FIELD_U32(a1, 13296) = off_60BF4318;
  FIELD_U8(a1, 13300) = 0;
  return a1;
}
