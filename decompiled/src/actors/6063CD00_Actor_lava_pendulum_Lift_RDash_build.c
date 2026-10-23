/* Actor_lava_pendulum_Lift_RDash_build
 * address: 0x6063CD00   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_lava_pendulum_Lift_RDash_build(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1A80u);
  result = (_DWORD *)Actor_lava_pendulum_Lift_RDash_build_helper(v2, a1);
  *result = &off_60C12F1C;
  return result;
}
