/* sub_60063AA0
 * address: 0x60063AA0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60063AA0(int a1, _DWORD *a2)
{
  signed int result; // r0
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6

  FIELD_F32(a1, 116) = (float)((float)(FIELD_U8(a1, 23) & 0xF) * 16.0) + 1500.0;
  result = sub_602A588C(a1);
  if ( !result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*((int (**)(void))stru_60C8E1CC._.vtable + 2))();
    if ( v6 != result )
    {
      v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      result = (*(int (**)(void))(dword_60C8E274 + 8))();
      if ( v8 != result )
      {
        FIELD_U32(a1, 120) = *a2;
        FIELD_U32(a1, 124) = a2[1];
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C810D8);
      }
    }
  }
  return result;
}
