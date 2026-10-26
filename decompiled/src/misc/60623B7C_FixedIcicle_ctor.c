/* FixedIcicle_ctor
 * address: 0x60623B7C   size: 100   group: misc
 * sym: # FixedIcicle_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

FixedIcicle *__fastcall FixedIcicle_ctor(ActorBuildInfo *buildInfo)
{
  FixedIcicle *this; // r5

  this = (FixedIcicle *)operator_new(0x19D8u);
  Enemy__ctor(&FIELD_U32(this, 0x0), buildInfo);
  FIELD_U32(this, 0x0) = (int)FixedIcicle_vtable;
  FIELD_U32(this, 0x189C) = 0;
  ActiveCollider_ctor(&FIELD_U32(this, 0x18A4));
  FIELD_U32(this, 0x19D4) = (int)off_60C11CA4;
  return this;
}
