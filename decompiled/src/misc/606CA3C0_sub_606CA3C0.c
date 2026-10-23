/* sub_606CA3C0
 * address: 0x606CA3C0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_606CA3C0(int a1)
{
  __n128 result; // q0
  float v3[4]; // [sp+0h] [bp-10h] BYREF

  sub_606D45B8(a1 + 6140, v3);
  result.n128_f32[0] = FIELD_F32(a1, 108) - v3[0];
  result.n128_f32[2] = FIELD_F32(a1, 112) - v3[1];
  FIELD_U32(a1, 6124) = result.n128_u32[0];
  FIELD_U32(a1, 6128) = result.n128_u32[2];
  return result;
}
