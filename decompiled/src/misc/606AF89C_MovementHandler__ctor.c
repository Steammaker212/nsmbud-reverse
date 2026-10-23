/* MovementHandler__ctor
 * address: 0x606AF89C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MovementHandler *__fastcall MovementHandler__ctor(MovementHandler *this)
{
  FIELD_U32(this, 0x38) = 0;
  FIELD_U32(this, 0x50) = 0;
  FIELD_U32(this, 0xA0) = 0;
  FIELD_U32(this, 0xA4) = 0;
  FIELD_U32(this, 0xA8) = 0;
  FIELD_U32(this, 0x80) = 0;
  FIELD_U32(this, 0x7C) = 0;
  FIELD_U32(this, 0x78) = 0;
  FIELD_U32(this, 0x74) = 0;
  FIELD_U32(this, 0xD4) = (int)&off_60C1AD6C;
  FIELD_U32(this, 0xD8) = &off_60C1AD7C;
  FIELD_U32(this, 0xDC) = &off_60C1ADA0;
  FIELD_U32(this, 0xE0) = this;
  FIELD_U32(this, 0xE4) = 0;
  StateMgr_ctor(&FIELD_U32(this, 0xE8), &FIELD_U32(this, 0xD8), &NullState);
  FIELD_U32(this, 0xD4) = (int)&off_60C1AD5C;
  return this;
}
