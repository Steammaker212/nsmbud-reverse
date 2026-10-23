/* ShellEnemy__vf2C0
 * address: 0x603A0558   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall ShellEnemy__vf2C0(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  int result; // r0
  unsigned int v8; // r0
  StateBase *v9; // r0
  int v10; // r5

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))()
    || FIELD_U32(a1, 6352) == 1
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        result = (*(int (**)(void))(dword_60C9778C + 8))(),
        v6 == result) )
  {
    v8 = FIELD_U8(a1, 6386);
    if ( FIELD_U8(a1, 6386) )
      v8 = 0x80000000;
    FIELD_U32(a1, 156) = v8;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 6376) = 511;
    FIELD_U32(a1, 6380) = 96;
    v9 = StateMgr__getCurrentState(v2);
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
    if ( v10 == (*((int (**)(void))ShellEnemy_StateID_Sleep._._.vtable + 2))() )
      return (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6084) + 24))(
               FIELD_U32(a1, 6084),
               FIELD_U32(a1, 6092));
    else
      return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &ShellEnemy_StateID_Sleep);
  }
  return result;
}
