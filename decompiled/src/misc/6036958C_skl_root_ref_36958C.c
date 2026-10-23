/* skl_root_ref_36958C
 * address: 0x6036958C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_36958C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  int result; // r0
  int v8; // r5
  int (__fastcall *v9)(int, _DWORD *); // r2
  void (__fastcall *v10)(int, int, __int64 *); // r7
  int v11; // r0
  _DWORD v12[2]; // [sp+0h] [bp-50h] BYREF
  __int64 v13[9]; // [sp+8h] [bp-48h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C95D78 + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        result = (*(int (**)(void))(dword_60C95D58 + 8))(),
        v6 == result) )
  {
    v8 = **(_DWORD **)(a1 + 6300);
    v9 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v8 + 84);
    v10 = *(void (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v8 + 108);
    v12[0] = &sead__SafeStringBase__vtable;
    v12[1] = "skl_root";
    v11 = v9(v8, v12);
    v10(v8, v11, v13);
    return sub_602372C0(a1 + 6320, 865, v13, 1);
  }
  return result;
}
