/* sub_6000C3A4
 * address: 0x6000C3A4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000C3A4(LineFollower *this, double a2, float a3, float a4, float32x2_t a5)
{
  float v6; // s0
  int result; // r0

  a5.n64_u32[0] = -4.0;
  FIELD_U32(this, 0x64).x = FIELD_U32(this, 0x5C).x + FIELD_U32(this, 0x64).x;
  *(float *)&a2 = FIELD_U32(this, 0x5C).y + -0.0625;
  v6 = vmax_f32(*(float32x2_t *)&a2, a5).n64_f32[0];
  FIELD_U32(this, 0x5C).y = v6;
  FIELD_U32(this, 0x64).y = FIELD_U32(this, 0x64).y + v6;
  ((void (*)(void))loc_6000FD08)();
  FIELD_U32(this, 0x6C).x = FIELD_U32(this, 0x64).x;
  result = LODWORD(FIELD_U32(this, 0x64).y);
  LODWORD(FIELD_U32(this, 0x6C).y) = result;
  return result;
}
