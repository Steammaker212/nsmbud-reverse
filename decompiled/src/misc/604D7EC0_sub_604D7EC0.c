/* sub_604D7EC0
 * address: 0x604D7EC0   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604D7EC0(int a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r6
  _BOOL4 v5; // r0
  StateMethodExecuter *result; // r0
  _BOOL4 v7; // r0

  if ( ((unsigned int)&dword_60CA4D40[7] & ~(1615691488 << v1) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CA4D40[7]) )
    {
      *(_QWORD *)algn_60CA4DF0 = 0x300000004LL;
      _cxa_guard_release(&dword_60CA4D40[7]);
    }
  }
  v3 = FIELD_U32(a1, 20500);
  if ( v3 == 2 )
  {
    v5 = sub_6047F178(a1 + 3732, *(int *)algn_60CA4DF0);
  }
  else
  {
    v4 = 1;
    if ( v3 != 1 )
      goto LABEL_9;
    v5 = sub_6047EF78(a1 + 3732, *(int *)algn_60CA4DF0);
  }
  v4 = !v5;
LABEL_9:
  result = *(StateMethodExecuter **)(a1 + 20504);
  if ( result == (StateMethodExecuter *)1 )
  {
    v7 = sub_6047EF78(a1 + 3732, *(int *)&algn_60CA4DF0[4]);
  }
  else
  {
    if ( result != (StateMethodExecuter *)2 )
    {
      if ( !v4 )
        return result;
      return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA40D8);
    }
    v7 = sub_6047F178(a1 + 3732, *(int *)&algn_60CA4DF0[4]);
  }
  result = (StateMethodExecuter *)!v7;
  if ( (v4 & (unsigned int)result) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA40D8);
  return result;
}
