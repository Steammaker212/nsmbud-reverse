/* Actor_ShortPlay_result_Demo_Tag_build
 * address: 0x6083074C   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall Actor_ShortPlay_result_Demo_Tag_build(ActorBuildInfo *a1)
{
  StateActor *v2; // r5

  v2 = (StateActor *)operator_new(0x1850u);
  StateActor_ctor(v2, a1);
  FIELD_U32(v2, 0x0)._._.vtable = (int)off_60C2AED0;
  Actor_ShortPlay_result_Demo_Tag_build_helper((int)&v2[1], (int)v2);
  return v2;
}
