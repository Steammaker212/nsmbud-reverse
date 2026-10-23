/* CollisionActor__ctor
 * address: 0x6000306C   size: 208   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CollisionActor *__fastcall CollisionActor__ctor(CollisionActor *this, ActorBuildInfo *buildInfo)
{
  StageActor__ctor(&FIELD_U32(this, 0x0), buildInfo);
  FIELD_U32(this, 0x0) = (int)&CollisionActor__vtable;
  ActorCollisionMgr_ctor(FIELD_U8(this, 0x288));
  FIELD_U32(this, 0x1770) = 0;
  FIELD_U32(this, 0x1774) = 0;
  FIELD_U32(this, 0x1778) = &FIELD_U32(this, 0x6C);
  FIELD_U8(this, 0x177C) = 0;
  FIELD_U32(this, 0x1780) = 0;
  FIELD_F32(this, 0x1784) = 1.0;
  FIELD_U32(this, 0x1794) = 0;
  FIELD_U32(this, 0x1790) = 0;
  FIELD_U32(this, 0x1788) = 0;
  FIELD_U32(this, 0x178C) = 0;
  FIELD_F32(this, 0x1798) = 1.5;
  FIELD_F32(this, 0x179C) = -1.5;
  FIELD_F32(this, 0x17A0) = -0.0625;
  FIELD_U32(this, 0x17AC) = 0;
  FIELD_U32(this, 0x17A8) = 0;
  *(_DWORD *)&FIELD_U8(this, 0x17A4) = 0;
  return this;
}
