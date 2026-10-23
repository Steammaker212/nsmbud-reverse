/* Actor_Flag_Switch_condition_Flag_R63for_2_build
 * address: 0x60605490   size: 100   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_Flag_Switch_condition_Flag_R63for_2_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r5

  v2 = (MultiStateActor *)operator_new(0x17F0u);
  FlagSwitchBase__ctor(v2, a1);
  FIELD_U32(v2, 0x0)._._.vtable = (int)off_60C0F220;
  sub_606B3858(
    dword_60CBA43C,
    FIELD_U32(v2, 0x0)._._.settings1,
    (unsigned __int8)FIELD_U32(v2, 0x0)._.eventId1,
    (unsigned __int8)FIELD_U32(v2, 0x0)._.eventId2,
    1);
  FIELD_U32(v2, 0x0)._._.isDeleted = 1;
  return v2;
}
