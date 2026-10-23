/* sub_6039D720
 * address: 0x6039D720   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039D720(int a1, int a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6
  int result; // r0
  unsigned int v10; // r0
  int v11[8]; // [sp+0h] [bp-20h] BYREF

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C971A0 + 8))()
    || (v7 = StateMgr__getCurrentState(v4),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        result = (*(int (**)(void))(dword_60C97600 + 8))(),
        v8 == result) )
  {
    v10 = FIELD_U32(a2, 20);
    v11[0] = HIWORD(v10) & 0xF;
    v11[1] = BYTE1(v10);
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      FIELD_U32(a1, 6436) = 0;
      FIELD_U32(a1, 6432) = 0;
      FIELD_U8(a1, 6440) = 0;
    }
    sub_60378FD4(a1 + 6444, v11, 1);
    FIELD_U32(a1, 80) = *(float *)(sub_60378E30(a1 + 6444) + 16) < FIELD_F32(a1, 108);
    FIELD_U8(a1, 6396) = 1;
    FIELD_U8(a1, 6401) = 1;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C971C0);
  }
  return result;
}
