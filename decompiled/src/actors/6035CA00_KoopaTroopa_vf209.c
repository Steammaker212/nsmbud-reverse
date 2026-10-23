/* KoopaTroopa_vf209
 * address: 0x6035CA00   size: 236   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf209(int a1, int a2)
{
  float v3; // s0
  float v4; // s2
  int v5; // r1
  int result; // r0
  int v7; // r0
  StateBase *CurrentState; // r0
  int v9; // r5

  v3 = FIELD_F32(a2, 108);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_U32(a1, 80);
  result = v4 >= v3;
  if ( v5 != result && FIELD_U32(a1, 6352) )
  {
    FIELD_U32(a1, 80) = result;
    v7 = dword_60AF20E0[FIELD_U32(a1, 7476)];
    if ( v4 >= v3 )
      v7 = -v7;
    FIELD_U32(a1, 160) = v7;
    FIELD_U32(a1, 6864) = -FIELD_U32(a1, 6864);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*((int (**)(void))KoopaTroopa_StateID_Turn._.vtable + 2))() )
      (*(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &KoopaTroopa_StateID_Walk);
    else
      FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 844))(a1);
  }
  return result;
}
