/* sub_607A8098
 * address: 0x607A8098   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A8098(StateMgr *a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r1
  int result; // r0

  CurrentState = StateMgr__getCurrentState(a1 + 605);
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = (*(int (**)(void))(dword_60CC4B0C + 8))();
  result = 0;
  if ( v3 == v4 && !a1[606].currentMethodExecuter )
  {
    ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[76].vtable)(a1);
    FIELD_U32(a1 + (76) * 16, 0x8) = (StateMethodExecuter *)((int)FIELD_U32(a1 + (76) * 16, 0x8) | 0x100000);
    FIELD_U32(a1 + (75) * 16, 0x4) = (StateBase *)((int)FIELD_U32(a1 + (75) * 16, 0x4) | 0x100000);
    a1[606].currentMethodExecuter = (StateMethodExecuter *)1;
    return 1;
  }
  return result;
}
