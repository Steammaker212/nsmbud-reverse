/* MultiStateActor__ctor
 * address: 0x60009358   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall MultiStateActor__ctor(MultiStateActor *this, ActorBuildInfo *buildInfo)
{
  CollisionActor__ctor(&FIELD_U32(this, 0x0), buildInfo);
  FIELD_U32(this, 0x0) = (int)&MultiStateActor__vtable;
  FIELD_U32(this, 0x17B0) = (int)&off_60BC0450;
  FIELD_U32(this, 0x17B4) = &off_60BC0460;
  FIELD_U32(this, 0x17B8) = &off_60BC0484;
  FIELD_U32(this, 0x17BC) = this;
  FIELD_U32(this, 0x17C0) = 0;
  StateMgr_ctor(&FIELD_U32(this, 0x17C4), &FIELD_U32(this, 0x17B4), &NullState);
  FIELD_U32(this, 0x17D4) = 0;
  FIELD_U32(this, 0x17B0) = (int)&off_60BC0440;
  return this;
}
