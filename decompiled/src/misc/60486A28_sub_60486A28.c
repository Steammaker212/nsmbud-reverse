/* sub_60486A28
 * address: 0x60486A28   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60486A28(int a1)
{
  char v1; // r12
  int v3; // r1
  int v4; // r1
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r1
  StateMethodExecuter *result; // r0

  if ( ((unsigned int)dword_60C9FD84 & ~(1615358536 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD84) )
  {
    dword_60C9FDB4 = 6;
    dword_60C9FDB8 = 5;
    _cxa_guard_release(dword_60C9FD84);
  }
  v3 = dword_60C9FDB4;
  if ( (unsigned int)dword_60C9FDB4 >= 7 )
    v3 = 0;
  v4 = *(_DWORD *)(a1 + 4 * v3 + 5848);
  v5 = FIELD_U32(a1, 47820);
  if ( v5 == 2 )
  {
    v7 = sub_6047F124(a1 + 3808, v4);
  }
  else
  {
    v6 = 1;
    if ( v5 != 1 )
      goto LABEL_11;
    v7 = sub_6047EF24(a1 + 3808, v4);
  }
  v6 = v7;
LABEL_11:
  v8 = dword_60C9FDB8;
  if ( (unsigned int)dword_60C9FDB8 >= 7 )
    v8 = 0;
  v9 = *(_DWORD *)(a1 + 4 * v8 + 5848);
  result = *(StateMethodExecuter **)(a1 + 47824);
  if ( result != (StateMethodExecuter *)1 )
  {
    if ( result == (StateMethodExecuter *)2 )
    {
      result = (StateMethodExecuter *)sub_6047F124(a1 + 3808, v9);
      if ( (v6 & (unsigned int)result) == 0 )
        return result;
    }
    else if ( !v6 )
    {
      return result;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 20), &stru_60C9F4C0);
  }
  result = (StateMethodExecuter *)sub_6047EF24(a1 + 3808, v9);
  if ( (v6 & (unsigned int)result) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 20), &stru_60C9F4C0);
  return result;
}
