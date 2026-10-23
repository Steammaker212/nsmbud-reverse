/* sub_6024C354
 * address: 0x6024C354   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6024C354(int a1, int a2, int a3)
{
  int v6; // r7
  _BOOL4 v7; // r8
  char v8; // r12
  StateBase *CurrentState; // r0
  int v10; // r9
  char v11; // zf

  v6 = FIELD_U32(a2, 64);
  v7 = sub_6000ADDC(a1, FIELD_U32(a3, 64));
  if ( ((unsigned int)&dword_60C8DD44 & ~(1613022084 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DD44) )
  {
    dword_60C8DD40 = (int)&off_60BDA210;
    _cxa_guard_release(&dword_60C8DD44);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8DD40) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v11 = v10 == (*(int (**)(void))(dword_60C8DD1C + 8))();
    sub_6024BC38((_DWORD *)v6, v7, v11, 0);
  }
  return sub_602C2A98(a1, a2, a3);
}
