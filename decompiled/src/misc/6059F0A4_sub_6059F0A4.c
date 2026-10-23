/* sub_6059F0A4
 * address: 0x6059F0A4   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059F0A4(int a1)
{
  int v2; // r4
  unsigned int v3; // r1
  int (__fastcall ***v4)(_DWORD, int *); // r6
  char v5; // r12
  int v6; // r0
  StateMgr *v7; // r5
  StateBase *v8; // r0
  int v9; // r6
  int *v10; // r1
  StateBase *CurrentState; // r0
  int v12; // r6

  v2 = 0;
  if ( sub_605C69F0() == 1 )
  {
    v2 = 1;
    v3 = FIELD_U32(a1, 7172);
    if ( v3 )
    {
      v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
      if ( ((unsigned int)&dword_60CAFCF4 & ~(1616507132 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFCF4) )
      {
        dword_60CAFCF0 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60CAFCF4);
      }
      if ( v4 && (**v4)(v4, &dword_60CAFCF0) == 1 )
      {
        v6 = sub_6059FA44(v4, a1 + 7164, a1 + 7168, FIELD_U8(a1, 7144));
        if ( v6 == 1 )
        {
          v7 = (StateMgr *)(a1 + 6084);
          CurrentState = StateMgr__getCurrentState(v7);
          v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v12 != (*(int (**)(void))(dword_60CAFCA0 + 8))() )
          {
            v10 = &dword_60CAFCA0;
            goto LABEL_14;
          }
        }
        else if ( !v6 )
        {
          v7 = (StateMgr *)(a1 + 6084);
          v8 = StateMgr__getCurrentState(v7);
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
          if ( v9 != (*(int (**)(void))(dword_60CAFCC4 + 8))() )
          {
            v10 = &dword_60CAFCC4;
LABEL_14:
            StateMgr__changeState(v7, (StateBase *)v10);
          }
        }
      }
    }
  }
  return v2;
}
