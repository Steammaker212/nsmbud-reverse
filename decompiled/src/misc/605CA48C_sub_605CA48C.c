/* sub_605CA48C
 * address: 0x605CA48C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CA48C(int a1, int a2)
{
  int v3; // r5
  StateBase *CurrentState; // r0
  int v5; // r7
  int v6; // r6

  v3 = FIELD_U32(a2, 64);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v6 = 0;
  if ( v5 != (*(int (**)(void))(dword_60CB0CEC + 8))() )
  {
    v6 = 1;
    SE_OBJ_TARU_BREAK_ref(v3, 1);
    FIELD_U8(a2, 110) |= 2u;
  }
  return v6;
}
