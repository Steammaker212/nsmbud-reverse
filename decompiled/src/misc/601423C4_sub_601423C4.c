/* sub_601423C4
 * address: 0x601423C4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601423C4(unsigned int *a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r4
  char v4; // r12
  int v5; // r0
  StateMgr *v6; // r4

  sub_6000B690(a1, a2);
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1]);
  if ( ((unsigned int)&dword_60C823D4 & ~(1611932672 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
  {
    dword_60C823D0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823D4);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C823D0);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  v6 = (StateMgr *)(v5 + 6084);
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 72))(v5);
  return StateMgr__changeState(v6, (StateBase *)&dword_60C87DEC);
}
