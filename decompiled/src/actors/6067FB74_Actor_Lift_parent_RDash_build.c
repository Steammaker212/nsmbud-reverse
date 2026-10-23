/* Actor_Lift_parent_RDash_build
 * address: 0x6067FB74   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Lift_parent_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x27D8u);
  result = sub_6067BDD0(v2, a1);
  *(_DWORD *)result = off_60C16A10;
  FIELD_U16(result, 10196) = 0;
  return result;
}
