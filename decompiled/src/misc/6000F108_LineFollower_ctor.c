/* LineFollower_ctor
 * address: 0x6000F108   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

LineFollower *__fastcall LineFollower_ctor(LineFollower *this)
{
  FIELD_U32(this, 0x0) = (int)&off_60BC0570;
  FIELD_U32(this, 0x4) = &off_60BC0580;
  FIELD_U32(this, 0x8) = &off_60BC05A4;
  FIELD_U32(this, 0xC) = this;
  FIELD_U32(this, 0x10) = 0;
  StateMgr_ctor(&FIELD_U32(this, 0x14), &FIELD_U32(this, 0x4), &NullState);
  FIELD_U32(this, 0x0) = (int)&off_60BC0560;
  memset(FIELD_U32(this, 0x24), 0, 0x6C);
  return this;
}
