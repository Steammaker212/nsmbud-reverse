/* EffectWrapper_ctor
 * address: 0x6023750C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

EffectWrapper *__fastcall EffectWrapper_ctor(EffectWrapper *this)
{
  sead_IDisposer_ctor(&FIELD_U32(this, 0x0));
  FIELD_U32(this, 0x44) = 0;
  FIELD_U32(this, 0x48) = -1;
  EffectData_ctor(&FIELD_U32(this, 0x10));
  FIELD_U32(this, 0x0) = (int)EffectWrapper_vtable;
  FIELD_U32(this, 0x50) = 0;
  FIELD_U32(this, 0x54) = 0;
  FIELD_U32(this, 0x58) = (int)this;
  FIELD_U32(this, 0x5C) = 0;
  FIELD_U32(this, 0x60) = -1;
  FIELD_U8(this, 0x64) = 0;
  return this;
}
