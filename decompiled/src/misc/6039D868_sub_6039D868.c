/* sub_6039D868
 * address: 0x6039D868   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039D868(int a1, int a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r7
  StateBase *v9; // r0
  int v10; // r6
  int result; // r0
  unsigned int v12; // r0
  int v13[8]; // [sp+0h] [bp-20h] BYREF

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C971A0 + 8))()
    || (v7 = StateMgr__getCurrentState(v4),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v8 == (*(int (**)(void))(dword_60C97600 + 8))())
    || (v9 = StateMgr__getCurrentState(v4),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        result = (*(int (**)(void))(dword_60C971C0 + 8))(),
        v10 == result) )
  {
    v12 = FIELD_U32(a2, 20);
    v13[0] = HIWORD(v12) & 0xF;
    v13[1] = BYTE1(v12);
    sub_60378FD4(a1 + 6444, v13, 1);
    FIELD_U32(a1, 80) = *(float *)(sub_60378E30(a1 + 6444) + 16) < FIELD_F32(a1, 108);
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C97440);
  }
  return result;
}
