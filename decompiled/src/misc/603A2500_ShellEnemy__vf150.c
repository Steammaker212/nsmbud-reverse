/* ShellEnemy__vf150
 * address: 0x603A2500   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7140
// 
// Overridden by: None
int __fastcall ShellEnemy__vf150(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v5; // r1
  bool v6; // zf
  StateBase *CurrentState; // r0
  int v8; // r5

  if ( !FIELD_U32(a1, 6352) )
    return 0;
  ActiveCollider_getCenterX(a3);
  ActiveCollider_getCenterX(a2);
  v5 = FIELD_U8(a1, 6386);
  v6 = v5 == 0;
  if ( FIELD_U8(a1, 6386) )
    LOBYTE(v5) = 1;
  FIELD_F32(a1, 120) = *(float *)&dword_60AFE3F8[FIELD_U32(a1, 80)] * 0.5;
  FIELD_U32(a1, 124) = 1069547520;
  FIELD_U32(a1, 128) = 0;
  if ( !v6 )
    FIELD_U8(a1, 6386) = v5;
  FIELD_U32(a1, 6376) = 96;
  FIELD_U32(a1, 6380) = 48;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*((int (**)(void))ShellEnemy_StateID_Sleep._._.vtable + 2))() )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6084) + 24))(
      FIELD_U32(a1, 6084),
      FIELD_U32(a1, 6092));
  else
    (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &ShellEnemy_StateID_Sleep);
  return 1;
}
