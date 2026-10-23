/* sub_604BAF00
 * address: 0x604BAF00   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BAF00(int a1, int a2)
{
  StateMgr *v4; // r4
  StateBase *CurrentState; // r0
  int v6; // r7
  int v7; // r1
  int result; // r0

  v4 = (StateMgr *)(a1 + 24);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 24));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v7 = (*(int (**)(void))(dword_60CA2580 + 8))();
  result = 0;
  if ( v6 == v7 )
  {
    FIELD_U32(a1, 3664) = a2;
    FIELD_U32(a1, 3692) = 0;
    StateMgr__changeState(v4, (StateBase *)&dword_60CA25A0);
    return 1;
  }
  return result;
}
