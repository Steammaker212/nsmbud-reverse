/* ParaGoomba__vfDC
 * address: 0x60363D00   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93B4
// 
// Overridden by: None
int __fastcall ParaGoomba__vfDC(int a1)
{
  StateBase *CurrentState; // r0
  StateBase **v3; // r6
  int v4; // r5
  StateBase *v5; // r0
  int v6; // r5
  StateBase *v7; // r0
  int v8; // r5
  int result; // r0
  StateBase *v10; // r1

  v3 = (StateBase **)(a1 + 6100);
  CurrentState = *(StateBase **)(a1 + 6100);
  if ( !CurrentState )
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C958F0 + 8))() )
    goto LABEL_10;
  v5 = *v3;
  if ( !*v3 )
    v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C95910 + 8))() )
    goto LABEL_10;
  v7 = *v3;
  if ( !*v3 )
    v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*(int (**)(void))(dword_60C944B8 + 8))() )
  {
LABEL_10:
    FIELD_U32(a1, 124) = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94470);
  }
  else
  {
    FIELD_U32(a1, 6096) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6092) + 8))(FIELD_U32(a1, 6092));
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 12))(FIELD_U32(a1, 6084), a1 + 6092);
    v10 = *v3;
    *v3 = 0;
    result = (*(int (__fastcall **)(_DWORD, StateBase *))(**(_DWORD **)(a1 + 6084) + 16))(FIELD_U32(a1, 6084), v10);
    FIELD_U32(a1, 6092) = result;
  }
  return result;
}
