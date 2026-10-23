/* Actor_W8course_BowserJr_manage_Tag_build
 * address: 0x6010387C   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_W8course_BowserJr_manage_Tag_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r0
  StateActor *result; // r0

  v2 = (StateActor *)operator_new(0x17F0u);
  result = sub_600271A0(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BCFAD4;
  return result;
}
