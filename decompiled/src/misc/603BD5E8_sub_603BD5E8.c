/* sub_603BD5E8
 * address: 0x603BD5E8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BD5E8(int a1)
{
  int v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r7
  StateBase *v5; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6

  v2 = 0;
  if ( FIELD_U32(a1, 6568) == 1 && (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 576)) < FIELD_F32(a1, 6576) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 == (*(int (**)(void))(dword_60C98330 + 8))()
      || (v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
          v6 == (*(int (**)(void))(dword_60C98390 + 8))())
      || (v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
          v8 == (*(int (**)(void))(dword_60C982F0 + 8))()) )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9841C);
      return 1;
    }
  }
  return v2;
}
