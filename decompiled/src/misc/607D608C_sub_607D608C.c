/* sub_607D608C
 * address: 0x607D608C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t __fastcall sub_607D608C(int a1, float32x2_t a2, float32x2_t a3)
{
  float32x2_t v3; // d16
  float32x2_t result; // d0

  a3.n64_u32[0] = 1.0;
  v3.n64_u64[0] = vmin_f32(a2, a3).n64_u64[0];
  a2.n64_u32[0] = 0;
  result.n64_u64[0] = vmax_f32(v3, a2).n64_u64[0];
  FIELD_U32(a1, 312) = result.n64_u32[0];
  FIELD_U8(a1, 316) = 1;
  return result;
}
