/* sub_606D6268
 * address: 0x606D6268   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606D6268(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  StateMgr *v6; // r6
  StateBase *CurrentState; // r0
  int v8; // r7
  StateBase *v9; // r0
  int v10; // r7
  StateBase *v11; // r0
  int v12; // r7

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  if ( ((unsigned int)&dword_60CBB780 & ~(1617781384 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB780) )
  {
    dword_60CBB77C = (int)&off_60BDE360;
    _cxa_guard_release(&dword_60CBB780);
  }
  if ( v5 && (**v5)(v5, &dword_60CBB77C) == 1 )
  {
    v6 = (StateMgr *)(v5 + 1521);
    CurrentState = StateMgr__getCurrentState(v6);
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 == (*(int (**)(void))(dword_60CBB75C + 8))() )
    {
LABEL_14:
      FIELD_U8(a1, 220) = 1;
      return;
    }
    if ( (FIELD_U32(a2, 2556) & 0x18000) != 0 )
    {
      v9 = StateMgr__getCurrentState(v6);
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
      if ( v10 == (*(int (**)(void))(dword_60CBB75C + 8))() )
      {
LABEL_13:
        FIELD_U32(a2, 2224) |= 0x20u;
        goto LABEL_14;
      }
    }
    else
    {
      if ( (FIELD_U8(a2, 2553) & 4) == 0 )
        return;
      v11 = StateMgr__getCurrentState(v6);
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
      if ( v12 == (*(int (**)(void))(dword_60CBB75C + 8))() )
        goto LABEL_13;
    }
    StateMgr__changeState(v6, (StateBase *)&dword_60CBB75C);
    goto LABEL_13;
  }
}
