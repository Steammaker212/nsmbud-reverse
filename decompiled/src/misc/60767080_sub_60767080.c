/* sub_60767080
 * address: 0x60767080   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60767080(StateMgr *a1)
{
  int nextState_low; // r0

  sub_607612CC((int)a1, 0);
  ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[68].methodExecuter.vtable)(a1);
  Player_changeState((int)a1, &stru_60CBF81C, 1);
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
  return StateMgr__changeState(a1 + 605, &stru_60CBF37C);
}
