/* sub_600FF7F0
 * address: 0x600FF7F0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FF7F0(int a1, ActorBuildInfo *a2)
{
  sub_600D0154(a1, a2);
  *(_DWORD *)a1 = off_60BCF6CC;
  FIELD_U32(a1, 7656) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7660));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7964));
  RectCollider_ctor((RectCollider *)(a1 + 8272));
  FIELD_U32(a1, 8272) = off_60BC30D8;
  CircularCollider_ctor((ColliderBase *)(a1 + 8928));
  FIELD_U8(a1, 9408) = 0;
  FIELD_U32(a1, 9412) = 0;
  FIELD_U8(a1, 9416) = 0;
  FIELD_U32(a1, 9356) = 0;
  FIELD_U32(a1, 9352) = 0;
  FIELD_U32(a1, 9348) = 0;
  FIELD_U32(a1, 9344) = 0;
  FIELD_U32(a1, 9340) = 0;
  FIELD_U32(a1, 9336) = 0;
  FIELD_U32(a1, 9328) = 0;
  FIELD_U32(a1, 9332) = 0;
  FIELD_U32(a1, 9432) = 0;
  FIELD_U32(a1, 9428) = 0;
  FIELD_U32(a1, 9424) = 0;
  FIELD_U32(a1, 9420) = 0;
  FIELD_U32(a1, 9436) = -1;
  FIELD_U32(a1, 9440) = 0;
  FIELD_U32(a1, 9444) = 0;
  FIELD_U32(a1, 9448) = 0;
  FIELD_U32(a1, 9452) = 15;
  FIELD_U32(a1, 9456) = 0;
  MovingSoundActor_ctor((MovingSoundActor *)(a1 + 9476), 0, 1);
  FIELD_U32(a1, 9476) = off_60BC19B4;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 9784));
  FIELD_U32(a1, 9784) = off_60BC1450;
  FIELD_U32(a1, 9472) = 0;
  FIELD_U32(a1, 9468) = 0;
  FIELD_U32(a1, 9464) = 0;
  FIELD_U32(a1, 9460) = 0;
  return a1;
}
