/* sub_60749A78
 * address: 0x60749A78   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60749A78(int a1, float *a2)
{
  int v3; // r6
  StateBase *CurrentState; // r0
  int v5; // r7
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v9; // r0
  int v10; // r5

  v3 = 0;
  if ( sub_6074908C(a1, a2) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 712));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 == (*(int (**)(void))(dword_60CBE718 + 8))() )
    {
      if ( !FIELD_U8(a1, 728) )
        FIELD_U8(a1, 728) = 0;
      v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 712));
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
      if ( v7 == (*(int (**)(void))(dword_60CBE718 + 8))() )
      {
        StateMgr__changeState((StateMgr *)(a1 + 712), (StateBase *)&dword_60CBE7A0);
        return 1;
      }
      v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 712));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
      v3 = 1;
      if ( v10 == (*(int (**)(void))(dword_60CBE7A0 + 8))() )
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 712) + 24))(
          FIELD_U32(a1, 712),
          FIELD_U32(a1, 720));
    }
  }
  return v3;
}
