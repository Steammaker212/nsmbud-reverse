/* Actor_Flag_Switch_4Switch_AND_build
 * address: 0x60603820   size: 44   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_Flag_Switch_4Switch_AND_build(int a1)
{
  _DWORD *v2; // r0
  MultiStateActor *result; // r0

  v2 = (_DWORD *)operator_new(0x17F0u);
  result = FlagSwitchBase__ctor(v2, a1);
  FIELD_U32(result, 0x0)._._.vtable = (int)off_60C0ECFC;
  return result;
}
