/* ShellEnemy__vf28C
 * address: 0x603A1F30   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : pure virtual
// 
// Overridden by: None
int __fastcall ShellEnemy__vf28C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6376) = 511;
  FIELD_U32(a1, 6380) = 96;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*((int (**)(void))ShellEnemy_StateID_Sleep._._.vtable + 2))() )
    return (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6084) + 24))(
             FIELD_U32(a1, 6084),
             FIELD_U32(a1, 6092));
  else
    return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &ShellEnemy_StateID_Sleep);
}
