/* sub_600ED0BC
 * address: 0x600ED0BC   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600ED0BC(_BYTE *a1)
{
  _DWORD *v2; // r5
  _BYTE *v3; // r6
  StateMgr *v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r5
  int v9; // r1
  int result; // r0
  int v11; // r1

  v2 = a1 + 6300;
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1696))(a1);
  a1[8344] = 1;
  *v2 = 6;
  v3 = a1 + 8336;
  if ( a1[8336] )
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1692))(a1);
  if ( a1[6220] )
  {
    sub_602F428C((int)(a1 + 6152));
    v4 = (StateMgr *)(a1 + 6084);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v6 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      sub_602F3750(a1 + 6152);
  }
  else
  {
    v4 = (StateMgr *)(a1 + 6084);
  }
  v7 = StateMgr__getCurrentState(v4);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
  if ( v8 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    *((_DWORD *)a1 + 1524) = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)a1 + 1523) + 8))(*((_DWORD *)a1 + 1523));
    (*(void (__fastcall **)(_DWORD, _BYTE *))(**((_DWORD **)a1 + 1521) + 12))(*((_DWORD *)a1 + 1521), a1 + 6092);
    v9 = *((_DWORD *)a1 + 1525);
    *((_DWORD *)a1 + 1525) = 0;
    *((_DWORD *)a1 + 1523) = (*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)a1 + 1521) + 16))(
                               *((_DWORD *)a1 + 1521),
                               v9);
  }
  result = (unsigned __int8)*v3;
  if ( *v3 )
  {
    *v3 = 0;
    *(_DWORD *)(**(_DWORD **)(*((_DWORD *)a1 + 1774) + 28) + 24) = 0;
    v11 = **(_DWORD **)(*((_DWORD *)a1 + 1774) + 28);
    FIELD_U32(v11, 20) = 0;
    FIELD_U32(v11, 28) |= 2u;
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 72))(a1);
    return (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85234);
  }
  return result;
}
