/* FlagSwitchRandom__build
 * address: 0x60605F18   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall FlagSwitchRandom__build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r0
  MultiStateActor *result; // r0

  v2 = (MultiStateActor *)operator_new(0x17F8u);
  result = FlagSwitchBase__ctor(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60C0F498;
  LOBYTE(result[1]._._._.settigns2) = 0;
  HIBYTE(result[1]._._._.settings1) = 0;
  BYTE2(result[1]._._._.settigns2) = 0;
  BYTE1(result[1]._._._.settigns2) = 0;
  return result;
}
