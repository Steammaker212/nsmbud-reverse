/* sub_6008BE60
 * address: 0x6008BE60   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6008BE60(int a1)
{
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  StateBase *CurrentState; // r0
  int v6; // r6
  unsigned int v7; // r1
  int v8; // r4
  char v9; // r12
  StateBase *v10; // r0
  int v11; // r5

  v2 = FIELD_U32(a1, 7672);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60C810FC & ~(1611185828 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C810FC) )
    {
      dword_60C810F8 = (int)&off_60BC66C8;
      _cxa_guard_release(&dword_60C810FC);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C810F8) == 1 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v6 == (*(int (**)(void))(dword_60C810B8 + 8))() )
          FIELD_U8(v3, 19) = 1;
      }
    }
    v7 = FIELD_U32(a1, 7676);
    if ( v7 )
    {
      v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
      if ( ((unsigned int)&dword_60C810FC & ~(1611186048 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C810FC) )
      {
        dword_60C810F8 = (int)&off_60BC66C8;
        _cxa_guard_release(&dword_60C810FC);
      }
      if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C810F8) == 1 )
      {
        v10 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        if ( v11 == (*(int (**)(void))(dword_60C810B8 + 8))() )
          FIELD_U8(v8, 19) = 1;
      }
    }
  }
}
