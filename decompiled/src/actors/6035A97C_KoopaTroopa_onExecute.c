/* KoopaTroopa_onExecute
 * address: 0x6035A97C   size: 516   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall KoopaTroopa_onExecute(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v8; // r0
  int v9; // r6
  int v10; // r1
  int v11; // r1
  StateBase *v12; // r0
  int v13; // r6
  float v14; // s0
  StateBase *v15; // r0
  int v16; // r5
  float v17; // s2

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))KoopaTroopa_StateID_BgmDance._.vtable + 2))() || FIELD_U32(a1, 7476) == 1 )
  {
    FIELD_U32(a1, 6864) = 0;
  }
  else
  {
    v8 = StateMgr__getCurrentState(v2);
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    if ( v9 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 840))(a1);
  }
  if ( sub_602A588C(a1)
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))()) )
  {
    sub_602A33AC((_BYTE *)a1);
    goto LABEL_7;
  }
  v10 = FIELD_U32(a1, 7492);
  if ( !v10 || (v11 = v10 - 1, (FIELD_U32(a1, 7492) = v11) == 0) )
  {
    v12 = StateMgr__getCurrentState(v2);
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
    if ( v13 == (*((int (**)(void))KoopaTroopa_StateID_BlockAppear._.vtable + 2))() )
    {
      v14 = -2500.0;
    }
    else
    {
      v15 = StateMgr__getCurrentState(v2);
      v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
      if ( v16 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
        goto LABEL_20;
      if ( FIELD_U8(a1, 86) )
        v17 = -2500.0;
      else
        v17 = 1500.0;
      v14 = FIELD_F32(a1, 6844) + v17;
    }
    FIELD_F32(a1, 116) = v14;
  }
LABEL_20:
  sub_602A33AC((_BYTE *)a1);
  if ( FIELD_U32(a1, 7476) == 1 )
    KoopaTroopa_onExecute_helper(a1);
LABEL_7:
  ((void (__fastcall *)(int))loc_6035ADF0)(a1);
  sub_603A2194(a1);
  KoopaTroopa_onExecute_helper_4094BC(dword_60C9A1F0);
  return 1;
}
