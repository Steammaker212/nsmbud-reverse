/* BossBase__ctor
 * address: 0x600249FC   size: 292   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall BossBase__ctor(BossBase *this, ActorBuildInfo *buildInfo)
{
  Enemy__ctor(&FIELD_U32(this, 0x0), buildInfo);
  FIELD_U32(this, 0x0) = (int)&BossBase_vtable;
  FIELD_U32(this, 0x189C) = 1;
  FIELD_U32(this, 0x18A0) = 1;
  FIELD_U32(this, 0x18A4) = 0;
  *(_WORD *)&FIELD_U8(this, 0x18A8) = 0;
  MovingSoundActor_ctor(&FIELD_U32(this, 0x18BC), 0, 1);
  *(_DWORD *)FIELD_U8(this, 0x18BC) = off_60BC19B4;
  FIELD_U32(this, 0x19F0) = 0;
  PlayerLookTarget_ctor(&FIELD_U32(this, 0x19F4), FIELD_U32(this, 0x8));
  FIELD_U32(this, 0x1A20) = (int)&ActorScaler_vtable;
  FIELD_F32(this, 0x1A24) = 1.0;
  FIELD_F32(this, 0x1A28) = 1.0;
  FIELD_F32(this, 0x1A2C) = 1.0;
  FIELD_F32(this, 0x1A30) = 1.0;
  FIELD_F32(this, 0x1A34) = 0.0;
  FIELD_U32(this, 0x1A38) = 0;
  FIELD_U32(this, 0x1A3C) = &FIELD_U32(this, 0x0);
  ActiveCollider_ctor(&FIELD_U32(this, 0x1A40));
  FIELD_U32(this, 0x1B70) = (int)off_60BC1984;
  FIELD_U32(this, 0x18B8) = 0;
  FIELD_U32(this, 0x18B4) = 0;
  FIELD_U32(this, 0x18B0) = 0;
  FIELD_U32(this, 0x18AC) = 0;
  memset(&FIELD_U32(this, 0x1B74), 0, 0x40);
  return this;
}
