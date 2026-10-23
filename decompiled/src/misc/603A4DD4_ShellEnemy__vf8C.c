/* ShellEnemy__vf8C
 * address: 0x603A4DD4   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60004018
// 
// Overridden by: None
int __fastcall ShellEnemy__vf8C(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  if ( !result )
  {
    result = sub_602A588C(a1);
    if ( !result )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
      if ( v4 != result )
      {
        v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
        result = (*((int (**)(void))stru_60C8EA70._.vtable + 2))();
        if ( v6 != result )
        {
          result = sub_600025B8(a1);
          if ( !result )
          {
            FIELD_U8(a1, 6608) = 1;
            result = FIELD_U32(a1, 6352);
            if ( !result )
            {
              FIELD_U32(a1, 120) = 0;
              FIELD_U32(a1, 124) = 0;
              FIELD_U32(a1, 128) = 0;
              FIELD_U32(a1, 6376) = 511;
              FIELD_U32(a1, 6380) = 96;
              v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
              v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
              if ( v8 == (*((int (**)(void))ShellEnemy_StateID_Sleep._._.vtable + 2))() )
                return (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6084) + 24))(
                         FIELD_U32(a1, 6084),
                         FIELD_U32(a1, 6092));
              else
                return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &ShellEnemy_StateID_Sleep);
            }
          }
        }
      }
    }
  }
  return result;
}
