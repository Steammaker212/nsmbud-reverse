/* SE_OBJ_TARU_HIT_ref_2_helper
 * address: 0x605CB2F4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_TARU_HIT_ref_2_helper(int a1, int a2)
{
  StateMgr *v4; // r4
  StateBase *CurrentState; // r0
  int v6; // r7
  int v7; // r1
  int result; // r0
  float v9; // s2

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v7 = (*((int (**)(void))stru_60CB0ECC._._.vtable + 2))();
  result = 0;
  if ( v6 == v7 )
  {
    FIELD_U8(a1, 84) = -1;
    v9 = (float)byte_60B057DC[a2];
    FIELD_U32(a1, 80) = a2;
    FIELD_F32(a1, 120) = 2.5 * v9;
    FIELD_U32(a1, 124) = -1077936128;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 6124) |= 0x10u;
    StateMgr__changeState(v4, &stru_60CB0D48);
    return 1;
  }
  return result;
}
