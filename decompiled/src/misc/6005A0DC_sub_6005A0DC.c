/* sub_6005A0DC
 * address: 0x6005A0DC   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005A0DC(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  float v7; // s0

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C80AC0 + 8))() )
  {
    ((void (__fastcall *)(int))loc_60057EFC)(a1);
LABEL_8:
    v7 = 36.0;
    goto LABEL_9;
  }
  v5 = StateMgr__getCurrentState(v2);
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
  if ( v6 == (*(int (**)(void))(dword_60C80C5C + 8))() )
  {
LABEL_7:
    BoomBoomBase__vf4B8((BoomBoomBase *)a1);
    goto LABEL_8;
  }
  if ( !FIELD_U32(a1, 320) )
  {
    FIELD_U32(a1, 312) = 1104674816;
    FIELD_U32(a1, 316) = 1104674816;
    goto LABEL_7;
  }
  v7 = 18.0;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1099956224;
  FIELD_U32(a1, 312) = 1099956224;
  FIELD_U32(a1, 316) = 1099956224;
LABEL_9:
  FIELD_U32(a1, 6844) = 1108344832;
  FIELD_F32(a1, 6848) = v7;
  FIELD_U32(a1, 6836) = 0;
  FIELD_F32(a1, 6840) = v7;
  return a1 + 6840;
}
