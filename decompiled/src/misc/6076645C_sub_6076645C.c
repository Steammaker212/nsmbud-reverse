/* sub_6076645C
 * address: 0x6076645C   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076645C(StateMgr *a1)
{
  StateMgr *v2; // r0
  StateExecuter *v3; // r1
  StateExecuter *executer; // t1
  StateBase *nextState; // r1
  StateBase *v6; // r7
  int v7; // r6
  char v8; // r12
  StateBase *CurrentState; // r0
  int v10; // r6
  int nextState_low; // r0
  int result; // r0
  StateBase *v13; // r0

  a1[77].nextState = (StateBase *)((int)a1[77].nextState & ~0x8000u);
  executer = a1[607].executer;
  v2 = a1 + 607;
  v3 = executer;
  if ( executer )
    FIELD_U32(v2, 0x0) = (StateExecuter *)((char *)v3 - 1);
  nextState = a1[607].nextState;
  if ( nextState )
    a1[607].nextState = (StateBase *)((char *)nextState - 1);
  v6 = a1[75].nextState;
  StateMgr__execute(a1 + 605);
  sub_60768AE8(a1);
  v7 = FIELD_U32(dword_60C995D0, 32);
  if ( ((unsigned int)&dword_60C99A44 & ~(1618371804 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C99A44) )
  {
    dword_60C99A40 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C99A44);
  }
  if ( v7 )
  {
    if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v7 + 8))(v7, &dword_60C99A40) == 1 )
    {
      CurrentState = StateMgr__getCurrentState(a1 + 605);
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v10 == (*(int (**)(void))(stru_60CBF37C + 8))() )
      {
        nextState_low = SLOBYTE(a1[5].nextState);
        if ( nextState_low >= 0 )
        {
          FIELD_U32(PlayerMgr_instance, 144) |= 1 << nextState_low;
          FIELD_U8(dword_60C99DE4, 29) |= 1 << LOBYTE(a1[5].nextState);
          a1[75].nextState = (StateBase *)((int)a1[75].nextState | 0x20);
          a1[76].lastState = (StateBase *)((int)a1[76].lastState | 0x400000);
        }
        a1[606].currentMethodExecuter = 0;
        a1[606].lastState = 0;
        a1[606].executer = 0;
        ((void (__fastcall *)(StateMgr *, int))FIELD_U32(a1, 0x0)[39].methodExecuter.vtable)(a1, 1);
        ((void (__fastcall *)(StateMgr *, int))FIELD_U32(a1, 0x0)[39].methodExecuter.vtable)(a1, 3);
        ((void (__fastcall *)(StateMgr *, int))FIELD_U32(a1, 0x0)[39].methodExecuter.vtable)(a1, 4);
        StateMgr__changeState(a1 + 605, &stru_60CBF3C4);
      }
    }
  }
  result = 0;
  if ( (((int)a1[75].nextState | (unsigned int)v6) & 0x20) != 0 )
  {
    v13 = a1[77].nextState;
    if ( ((unsigned __int16)v13 & 0x8000) != 0 )
      a1[77].nextState = (StateBase *)((unsigned int)v13 | 0x2000);
    sub_60761228(a1);
    return 1;
  }
  return result;
}
