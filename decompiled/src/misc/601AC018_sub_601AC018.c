/* sub_601AC018
 * address: 0x601AC018   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_601AC018(int a1)
{
  __n128 result; // q0
  float v2; // s4

  result.n128_f32[0] = FIELD_F32(a1, 348) + *(float *)&dword_60C8A5FC;
  result.n128_f32[2] = FIELD_F32(a1, 352) + *(float *)&dword_60C8A600;
  v2 = FIELD_F32(a1, 356) + *(float *)&dword_60C8A604;
  FIELD_U32(a1, 80) = result.n128_u32[0];
  FIELD_U32(a1, 84) = result.n128_u32[2];
  FIELD_F32(a1, 88) = v2;
  return result;
}
