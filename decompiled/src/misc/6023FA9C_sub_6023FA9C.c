/* sub_6023FA9C
 * address: 0x6023FA9C   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023FA9C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int result; // r0
  StateBase *v6; // r0
  int v7; // r5
  ActiveColliderMgr *v8; // r6
  char v9; // r12
  int (__fastcall ***v10)(_DWORD, int *); // r5
  int (__fastcall ***v11)(_DWORD, int *); // r5
  int (__fastcall ***v12)(_DWORD, int *); // r5
  int (__fastcall ***v13)(_DWORD, int *); // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C8DAB8 + 8))();
  if ( v4 != result )
  {
    v6 = StateMgr__getCurrentState(v2);
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
    result = (*(int (**)(void))(dword_60C8DAD8 + 8))();
    if ( v7 != result )
    {
      v8 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6300));
      ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 6300));
      ActiveColldierMgr_removeFromList3(v8, a1 + 6300);
      if ( FIELD_U32(a1, 12732) )
      {
        v10 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 48);
        if ( ((unsigned int)&dword_60C7B374 & ~(1612970884 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v10 && (**v10)(v10, &dword_60C7B370) == 1 )
        {
          sub_607A8020(v10);
          FIELD_U32(a1, 12732) = 0;
          FIELD_U16(a1, 12720) = 0;
          FIELD_U8(a1, 12748) = 0;
        }
      }
      if ( FIELD_U32(a1, 12736) )
      {
        v11 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 52);
        if ( ((unsigned int)&dword_60C7B374 & ~(1612971068 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v11 && (**v11)(v11, &dword_60C7B370) == 1 )
        {
          sub_607A8020(v11);
          FIELD_U32(a1, 12736) = 0;
          FIELD_U16(a1, 12722) = 0;
          FIELD_U8(a1, 12749) = 0;
        }
      }
      if ( FIELD_U32(a1, 12740) )
      {
        v12 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 56);
        if ( ((unsigned int)&dword_60C7B374 & ~(1612971252 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v12 && (**v12)(v12, &dword_60C7B370) == 1 )
        {
          sub_607A8020(v12);
          FIELD_U32(a1, 12740) = 0;
          FIELD_U16(a1, 12724) = 0;
          FIELD_U8(a1, 12750) = 0;
        }
      }
      if ( FIELD_U32(a1, 12744) )
      {
        v13 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 60);
        if ( ((unsigned int)&dword_60C7B374 & ~(1612971436 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        if ( v13 )
        {
          if ( (**v13)(v13, &dword_60C7B370) == 1 )
          {
            sub_607A8020(v13);
            FIELD_U32(a1, 12744) = 0;
            FIELD_U16(a1, 12726) = 0;
            FIELD_U8(a1, 12751) = 0;
          }
        }
      }
      sub_602A3EFC(a1 + 12316, 24);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DAB8);
    }
  }
  return result;
}
