/* sub_60277540
 * address: 0x60277540   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60277540(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r5
  int result; // r0
  _DWORD **v10; // r4
  int *v11; // t1
  int v12; // r0
  int (__fastcall *v13)(int, __int64 *); // r2
  unsigned __int8 v14; // r0
  __int64 v15[8]; // [sp+0h] [bp-40h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C8ECA0 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60C8ECC0 + 8))())
    || (v7 = StateMgr__getCurrentState(v2),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        result = (*(int (**)(void))(dword_60C8ED70 + 8))(),
        v8 == result) )
  {
    v11 = *(int **)(a1 + 6300);
    v10 = (_DWORD **)(a1 + 6300);
    v12 = *v11;
    v13 = *(int (__fastcall **)(int, __int64 *))(*(_DWORD *)*v11 + 84);
    LODWORD(v15[0]) = &sead__SafeStringBase__vtable;
    HIDWORD(v15[0]) = "skl_root";
    v14 = v13(v12, v15);
    (*(void (__fastcall **)(_DWORD, _DWORD, __int64 *))(*(_DWORD *)**v10 + 108))(**v10, v14, v15);
    return sub_602372C0((int)(v10 + 1429), 593, v15, 0);
  }
  return result;
}
