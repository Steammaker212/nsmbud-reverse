/* BowserShutter__ctor
 * address: 0x600D6158   size: 232   group: misc
 * sym: BowserShutter::BowserShutter(ActorBuildInfo const*) as C3
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BowserShutter__ctor(ActorBuildInfo *buildInfo)
{
  int this; // r4
  float y; // r1
  float z; // r2

  this = operator_new(0x1A38u);
  StageActor__ctor((StageActor *)this, buildInfo);
  *(_DWORD *)this = off_60BCBB48;
  FIELD_U32(this, 644) = 0;
  y = FIELD_F32(buildInfo, 0x14);
  z = FIELD_F32(buildInfo, 0x18);
  FIELD_F32(this, 648) = FIELD_F32(buildInfo, 0x10);
  FIELD_F32(this, 652) = y;
  FIELD_F32(this, 656) = z;
  RectCollider_ctor((RectCollider *)(this + 664));
  FIELD_U32(this, 664) = off_60BC30D8;
  ActorCollisionMgr_ctor((_DWORD *)(this + 1320));
  FIELD_U32(this, 6672) = &off_60BCBBF8;
  FIELD_U32(this, 6676) = &off_60BCBC08;
  FIELD_U32(this, 6680) = &off_60BCBC2C;
  FIELD_U32(this, 6684) = this;
  FIELD_U32(this, 6688) = 0;
  StateMgr_ctor((StateMgr *)(this + 6692), (StateExecuter *)(this + 6676), &NullState);
  FIELD_U32(this, 6672) = &off_60BCBBE8;
  return this;
}
