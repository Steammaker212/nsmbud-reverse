/* LightSource__ctor
 * address: 0x60423BEC   size: 128   group: misc
 * sym: LightSource::LightSource() as C1
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

LightSource *__fastcall LightSource__ctor(LightSource *this)
{
  LightSource *this_1; // r0

  this_1 = (LightSource *)sead_IDisposer_ctor(&FIELD_U32(this, 0x0));
  FIELD_U32(this_1, 0x0) = (int)LightSource_vtable;
  FIELD_U8(this_1, 0x10) = 0;
  FIELD_U32(this_1, 0x14) = 0;
  FIELD_F32(this_1, 0x18) = 0.0;
  FIELD_F32(this_1, 0x1C) = 0.0;
  FIELD_F32(this_1, 0x20) = 0.0;
  FIELD_U32(this_1, 0x24) = 0;
  FIELD_F32(this_1, 0x28) = 1.0;
  FIELD_F32(this_1, 0x2C) = 1.0;
  FIELD_F32(this_1, 0x3C) = 1.0;
  FIELD_F32(this_1, 0x38) = 1.0;
  FIELD_F32(this_1, 0x34) = 1.0;
  FIELD_F32(this_1, 0x30) = 1.0;
  FIELD_U32(this_1, 0x40) = 0;
  FIELD_U32(this_1, 0x44) = 0;
  return this_1;
}
