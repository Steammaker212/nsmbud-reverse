/* sub_607498A0
 * address: 0x607498A0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607498A0(int a1, char a2)
{
  StateMgr *v3; // r5
  bool v4; // zf
  StateMgr *v5; // r0
  StateBase *CurrentState; // r0
  int v7; // r6
  StateMethodExecuter *result; // r0
  StateBase *v9; // r0
  int v10; // r5

  v3 = (StateMgr *)(a1 + 712);
  v4 = FIELD_U8(a1, 728) == 0;
  v5 = (StateMgr *)(a1 + 712);
  if ( v4 )
    FIELD_U8(a1, 728) = a2;
  CurrentState = StateMgr__getCurrentState(v5);
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*(int (**)(void))(dword_60CBE718 + 8))() )
    return StateMgr__changeState(v3, (StateBase *)&dword_60CBE7A0);
  v9 = StateMgr__getCurrentState(v3);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  result = (StateMethodExecuter *)(*(int (**)(void))(dword_60CBE7A0 + 8))();
  if ( (StateMethodExecuter *)v10 == result )
    return (StateMethodExecuter *)(*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 712) + 24))(
                                    FIELD_U32(a1, 712),
                                    FIELD_U32(a1, 720));
  return result;
}
