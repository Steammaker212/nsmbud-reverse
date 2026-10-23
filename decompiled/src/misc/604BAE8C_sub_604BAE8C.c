/* sub_604BAE8C
 * address: 0x604BAE8C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BAE8C(int a1)
{
  StateMgr *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r7
  int v5; // r6

  v2 = (StateMgr *)(a1 + 24);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 24));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v5 = 0;
  if ( v4 == (*(int (**)(void))(dword_60CA2580 + 8))() )
  {
    v5 = 1;
    FIELD_U32(a1, 3660) = 1;
    FIELD_U32(a1, 3692) = 0;
    StateMgr__changeState(v2, (StateBase *)&dword_60CA25E0);
  }
  return v5;
}
