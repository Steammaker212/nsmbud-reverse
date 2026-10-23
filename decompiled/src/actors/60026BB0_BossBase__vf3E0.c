/* BossBase__vf3E0
 * address: 0x60026BB0   size: 52   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x600794B4 : FinalBowser
//   - 0x600C6EB0 : Bowser
//   - 0x60039AB8 : BowserJrBase
float __fastcall BossBase__vf3E0(float *a1)
{
  float result; // s0

  result = a1[28] + a1[144];
  a1[1666] = a1[27] + a1[143];
  a1[1667] = result;
  return result;
}
