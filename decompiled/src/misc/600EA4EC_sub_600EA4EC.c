/* sub_600EA4EC
 * address: 0x600EA4EC   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EA4EC(int a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int v5; // r5
  StateBase *v6; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r5
  int result; // r0

  v2 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v2 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    FIELD_U8(v2, 8120) = 1;
  }
  else if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1700))(v2) )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v2 + 192))(v2, &dword_60C8503C);
  }
  v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
  v6 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    FIELD_U8(v5, 8120) = 1;
  }
  else if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1700))(v5) )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C8503C);
  }
  v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
  if ( v9 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    FIELD_U8(a1, 8120) = 1;
    return 8120;
  }
  else
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1700))(a1);
    if ( !result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8503C);
  }
  return result;
}
