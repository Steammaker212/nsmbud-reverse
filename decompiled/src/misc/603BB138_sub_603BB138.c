/* sub_603BB138
 * address: 0x603BB138   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BB138(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BF5A28;
  FIELD_U32(a1, 6340) = 0;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6300) = 0;
  sub_6000BAC8((_DWORD *)(a1 + 6356), FIELD_U32(a1, 8));
  sub_602A40A0((_DWORD *)(a1 + 6392), FIELD_U32(a1, 8));
  FIELD_U8(a1, 6428) = 0;
  FIELD_U32(a1, 6432) = 0;
  FIELD_U8(a1, 6436) = 0;
  FIELD_U32(a1, 6464) = 0;
  FIELD_U32(a1, 6468) = 0;
  FIELD_U32(a1, 6472) = 0;
  FIELD_U8(a1, 6460) = 0;
  FIELD_U32(a1, 6456) = 0;
  FIELD_U32(a1, 6452) = 0;
  FIELD_U32(a1, 6448) = 0;
  ActorCollisionMgr_ctor((CollisionMgr *)(a1 + 6488));
  ActorCollisionMgr_ctor((CollisionMgr *)(a1 + 11840));
  ActorCollisionMgr_ctor((CollisionMgr *)(a1 + 17192));
  FIELD_U32(a1, 22544) = 0;
  FIELD_U32(a1, 22560) = 0;
  FIELD_U8(a1, 22564) = 0;
  FIELD_U8(a1, 22565) = 0;
  FIELD_U32(a1, 22568) = 0;
  FIELD_U32(a1, 22572) = 0;
  FIELD_U8(a1, 22576) = 0;
  FIELD_U32(a1, 22652) = 0;
  FIELD_U8(a1, 22614) = 0;
  FIELD_U16(a1, 22612) = 0;
  FIELD_U32(a1, 22608) = 0;
  FIELD_U32(a1, 22604) = 0;
  FIELD_U32(a1, 22600) = 0;
  FIELD_U16(a1, 22648) = 0;
  FIELD_U32(a1, 22644) = 0;
  FIELD_U32(a1, 22640) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 22656));
  FIELD_U32(a1, 22656) = off_60BC1450;
  FIELD_U8(a1, 22760) = 0;
  FIELD_U32(a1, 22776) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 22780));
  FIELD_U32(a1, 23084) = off_60BF59F8;
  FIELD_U32(a1, 23088) = &ActorScaler_vtable;
  FIELD_U32(a1, 23092) = 1065353216;
  FIELD_U32(a1, 23096) = 1065353216;
  FIELD_U32(a1, 23100) = 1065353216;
  FIELD_U32(a1, 23104) = 1065353216;
  FIELD_U32(a1, 23108) = 0;
  FIELD_U32(a1, 23112) = 0;
  FIELD_U32(a1, 23116) = a1;
  FIELD_U32(a1, 23120) = 0;
  return a1;
}
