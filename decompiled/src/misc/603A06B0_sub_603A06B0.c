/* sub_603A06B0
 * address: 0x603A06B0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A06B0(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  int v8; // r1
  StateBase *CurrentState; // r0
  int v10; // r5

  v7 = *a2;
  v8 = a2[1];
  FIELD_U32(a1, 120) = v7;
  FIELD_U32(a1, 124) = v8;
  FIELD_U32(a1, 128) = 0;
  if ( a3 == 1 )
  {
    if ( !FIELD_U8(a1, 6386) )
      FIELD_U32(a1, 6388) = a4;
    FIELD_U8(a1, 6386) = 1;
  }
  FIELD_U32(a1, 6376) = a5;
  FIELD_U32(a1, 6380) = a6;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v10 == (*((int (**)(void))ShellEnemy_StateID_Sleep._._.vtable + 2))() )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6084) + 24))(
      FIELD_U32(a1, 6084),
      FIELD_U32(a1, 6092));
  else
    (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &ShellEnemy_StateID_Sleep);
  return 1;
}
