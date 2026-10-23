/* FireballBase_ctor
 * address: 0x60135A90   size: 308   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

FireballBase *__fastcall FireballBase_ctor(FireballBase *this, ActorBuildInfo *buildInfo)
{
  StateActor_ctor(&FIELD_U32(this, 0x0), buildInfo);
  FIELD_U32(this, 0x0) = (int)FireballBase_vtable;
  LightMask__ctor(&FIELD_U32(this, 0x17D4));
  FIELD_U32(this, 0x17FC) = 0;
  sub_6000BAC8(&FIELD_U32(this, 0x1800), FIELD_U32(this, 0x8));
  FIELD_U32(this, 0x1800) = (int)off_60BD23D8;
  sub_6000B63C(&FIELD_U32(this, 0x1824), FIELD_U32(this, 0x8));
  FIELD_U32(this, 0x1824) = (int)off_60BD240C;
  FIELD_U32(this, 0x1848) = 0;
  FIELD_U32(this, 0x184C) = 0;
  FIELD_U8(this, 0x1860) = 0;
  FIELD_U32(this, 0x185C) = 0;
  FIELD_U32(this, 0x1858) = 0;
  FIELD_U32(this, 0x1854) = 0;
  FIELD_U32(this, 0x1870) = 0;
  FIELD_U32(this, 0x186C) = 0;
  FIELD_U32(this, 0x1868) = 0;
  FIELD_U32(this, 0x1864) = 0;
  EffectWrapper_ctor(&FIELD_U32(this, 0x1874));
  FIELD_U32(this, 0x1874) = (int)off_60BC1450;
  LightSource__ctor(&FIELD_U32(this, 0x18DC));
  ActiveCollider_ctor(&FIELD_U32(this, 0x1924));
  FIELD_U32(this, 0x1A54) = (int)off_60BD2430;
  FIELD_U32(this, 0x1A64) = 0;
  FIELD_U32(this, 0x1A60) = 0;
  FIELD_U32(this, 0x1A5C) = 0;
  FIELD_U32(this, 0x1A58) = 0;
  return this;
}
