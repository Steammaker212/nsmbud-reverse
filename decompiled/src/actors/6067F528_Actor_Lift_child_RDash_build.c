/* Actor_Lift_child_RDash_build
 * address: 0x6067F528   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_Lift_child_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x27D8u);
  result = (_DWORD *)sub_6067BDD0(v2, a1);
  *result = off_60C16900;
  return result;
}
