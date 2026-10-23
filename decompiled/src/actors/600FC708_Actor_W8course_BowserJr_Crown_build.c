/* Actor_W8course_BowserJr_Crown_build
 * address: 0x600FC708   size: 404   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_W8course_BowserJr_Crown_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x26A0u);
  sub_600D0154(v2, a1);
  *(_DWORD *)v2 = off_60BCF6CC;
  FIELD_U32(v2, 7656) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7660));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7964));
  RectCollider_ctor((RectCollider *)(v2 + 8272));
  FIELD_U32(v2, 8272) = off_60BC30D8;
  CircularCollider_ctor((ColliderBase *)(v2 + 8928));
  FIELD_U8(v2, 9408) = 0;
  FIELD_U32(v2, 9412) = 0;
  FIELD_U8(v2, 9416) = 0;
  FIELD_U32(v2, 9356) = 0;
  FIELD_U32(v2, 9352) = 0;
  FIELD_U32(v2, 9348) = 0;
  FIELD_U32(v2, 9344) = 0;
  FIELD_U32(v2, 9340) = 0;
  FIELD_U32(v2, 9336) = 0;
  FIELD_U32(v2, 9328) = 0;
  FIELD_U32(v2, 9332) = 0;
  FIELD_U32(v2, 9432) = 0;
  FIELD_U32(v2, 9428) = 0;
  FIELD_U32(v2, 9424) = 0;
  FIELD_U32(v2, 9420) = 0;
  FIELD_U32(v2, 9436) = -1;
  FIELD_U32(v2, 9440) = 0;
  FIELD_U32(v2, 9444) = 0;
  FIELD_U32(v2, 9448) = 0;
  FIELD_U32(v2, 9452) = 15;
  FIELD_U32(v2, 9456) = 0;
  MovingSoundActor_ctor((MovingSoundActor *)(v2 + 9476), 0, 1);
  FIELD_U32(v2, 9476) = off_60BC19B4;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 9784));
  FIELD_U32(v2, 9784) = off_60BC1450;
  FIELD_U32(v2, 9472) = 0;
  FIELD_U32(v2, 9468) = 0;
  FIELD_U32(v2, 9464) = 0;
  FIELD_U32(v2, 9460) = 0;
  return v2;
}
