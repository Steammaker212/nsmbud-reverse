/* sub_608B0318
 * address: 0x608B0318   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t __fastcall sub_608B0318(int a1, float32x2_t a2, float32x2_t a3)
{
  float32x2_t result; // d0

  a3.n64_u32[0] = 0;
  result.n64_u64[0] = vmax_f32(a2, a3).n64_u64[0];
  FIELD_U32(a1, 240) = result.n64_u32[0];
  return result;
}
