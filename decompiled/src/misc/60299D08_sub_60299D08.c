/* sub_60299D08
 * address: 0x60299D08   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x2_t __fastcall sub_60299D08(int a1)
{
  int v2; // r1
  int ProfileId; // r0
  float32x2_t v4; // d2
  float32x2_t v5; // d0
  float32x2_t result; // d0
  int v7; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  if ( Actor__getProfileId((Actor *)a1) == 481 )
  {
    v2 = 0x40000000;
  }
  else
  {
    ProfileId = Actor__getProfileId((Actor *)a1);
    v2 = -1073741824;
    if ( ProfileId == 485 )
      v2 = 0x40000000;
  }
  target[0] = v2;
  v7 = 0x10000000;
  moveValueTo((int *)(a1 + 160), target, &v7);
  target[0] = 0x10000000;
  v7 = 0x2000000;
  moveValueTo((int *)(a1 + 6676), target, &v7);
  target[0] = 1476395008;
  v7 = 201326592;
  moveValueTo((int *)(a1 + 6696), target, &v7);
  v4.n64_u32[0] = 1060320051;
  v5.n64_f32[0] = FIELD_F32(a1, 144) + -0.025;
  result.n64_u64[0] = vmax_f32(v5, v4).n64_u64[0];
  FIELD_U32(a1, 144) = result.n64_u32[0];
  FIELD_U32(a1, 148) = result.n64_u32[0];
  FIELD_U32(a1, 152) = result.n64_u32[0];
  return result;
}
