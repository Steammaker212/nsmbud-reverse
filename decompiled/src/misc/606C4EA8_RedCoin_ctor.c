/* RedCoin_ctor
 * address: 0x606C4EA8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall RedCoin_ctor(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0
  MultiStateActor *result; // r0

  v2 = (MultiStateActor *)operator_new(0x1C10u);
  result = sub_606C70B4(v2, a1);
  FIELD_U32(result, 0x0) = (int)RedCoin_vtable;
  return result;
}
