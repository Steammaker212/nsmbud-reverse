/* Actor_first_Bowser_Demo_for_BowserJr_build
 * address: 0x60060EA8   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

BossBase *__fastcall Actor_first_Bowser_Demo_for_BowserJr_build(ActorBuildInfo *a1)
{
  BossBase *v2; // r0
  BossBase *result; // r0

  v2 = (BossBase *)operator_new(0x1DB8u);
  result = BowserJrBase__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)&off_60BC5BB4;
  return result;
}
