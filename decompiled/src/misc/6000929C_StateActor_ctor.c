/* StateActor_ctor
 * address: 0x6000929C   size: 164   group: misc
 * sym: # StateActor_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall StateActor_ctor(StateActor *this, ActorBuildInfo *buildInfo)
{
  CollisionActor__ctor(&FIELD_U32(this, 0x0), buildInfo);
  FIELD_U32(this, 0x0) = (int)off_60BC0250;
  FIELD_U32(this, 0x17B0) = (int)&off_60BC03F4;
  FIELD_U32(this, 0x17B4) = &off_60BC0404;
  FIELD_U32(this, 0x17B8) = &off_60BC0428;
  FIELD_U32(this, 0x17BC) = this;
  FIELD_U32(this, 0x17C0) = 0;
  StateMgr_ctor(&FIELD_U32(this, 0x17C4), &FIELD_U32(this, 0x17B4), &NullState);
  FIELD_U32(this, 0x17B0) = (int)&off_60BC03E4;
  return this;
}
