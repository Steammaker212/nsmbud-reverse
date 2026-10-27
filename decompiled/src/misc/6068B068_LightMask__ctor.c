/* LightMask__ctor
 * address: 0x6068B068   size: 48   group: misc
 * sym: LightMask::LightMask() as C1
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

RevealMaskRelated *__fastcall LightMask__ctor(RevealMaskRelated *this)
{
  FIELD_U32(this, 0x0) = (int)&RevealMaskRelated_vtable;
  FIELD_U32(this, 0x4) = 0;
  FIELD_U32(this, 0x8) = 0;
  FIELD_F32(this, 0xC) = 0.0;
  FIELD_F32(this, 0x10) = 0.0;
  FIELD_F32(this, 0x14) = 0.0;
  FIELD_U32(this, 0x18) = 0;
  FIELD_U32(this, 0x1C) = 0;
  return this;
}
