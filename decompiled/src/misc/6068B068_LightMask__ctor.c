/* LightMask__ctor
 * address: 0x6068B068   size: 48   group: misc
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
  FIELD_U32(this, 0xC).x = 0.0;
  FIELD_U32(this, 0xC).y = 0.0;
  FIELD_U32(this, 0xC).z = 0.0;
  FIELD_U32(this, 0x18) = 0;
  FIELD_U32(this, 0x1C) = 0;
  return this;
}
