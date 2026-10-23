/* sub_60651A94
 * address: 0x60651A94   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60651A94(int a1, int a2)
{
  Actor *v3; // r0
  int ProfileId; // r0
  char v5; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r4
  StateMgr *v7; // r4
  StateBase *CurrentState; // r0
  int v9; // r5

  v3 = (Actor *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  ProfileId = Actor__getProfileId(v3);
  if ( ProfileId == 636 || ProfileId == 637 )
  {
    v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
    if ( ((unsigned int)&dword_60CB6290 & ~(1617238772 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6290) )
    {
      dword_60CB628C = (int)&off_60BCFCD8;
      _cxa_guard_release(&dword_60CB6290);
    }
    if ( v6 && (**v6)(v6, &dword_60CB628C) == 1 )
    {
      v7 = (StateMgr *)(v6 + 1521);
      CurrentState = StateMgr__getCurrentState(v7);
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v9 != (*((int (**)(void))stru_60CB622C.vtable + 2))() )
        StateMgr__changeState(v7, &stru_60CB622C);
    }
  }
}
