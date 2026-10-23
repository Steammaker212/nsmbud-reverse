/* Actor_minigemuManager_RDash_build
 * address: 0x60733B50   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_minigemuManager_RDash_build(ActorBuildInfo *a1)
{
  Actor *v2; // r0
  Actor *result; // r0

  v2 = (Actor *)operator_new(0x7Cu);
  result = Actor_minigemuManager_RDash_build_helper(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C227BC;
  return result;
}
