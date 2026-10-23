/* Kanibo__onExecute
 * address: 0x6030F798   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
int __fastcall Kanibo__onExecute(int a1)
{
  StateMgr *v2; // r5
  float v3; // r1
  int v4; // r2
  float v5; // s0
  float v6; // s2
  StateBase *CurrentState; // r0
  int v8; // r6
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r6
  int v15; // r6
  int v16; // r0
  StateBase *v17; // r0
  int v18; // r5

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ActorScaler_execute((ActorScaler *)(a1 + 6436));
  sub_602A33AC((_BYTE *)a1);
  sub_6030F9FC((Enemy *)a1);
  v3 = 0.0;
  v4 = 1090519040;
  if ( FIELD_U32(a1, 6344) != 1 )
  {
    v4 = 1094713344;
    v3 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 4.0;
  }
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 6312);
  FIELD_U32(a1, 312) = v4;
  FIELD_U32(a1, 316) = 1090519040;
  FIELD_F32(a1, 304) = v3;
  FIELD_F32(a1, 308) = v6 - v5;
  CurrentState = StateMgr__getCurrentState(v2);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*((int (**)(void))Kanibo__StateID_Wait._.vtable + 2))()
    || (v9 = StateMgr__getCurrentState(v2),
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9),
        v10 == (*((int (**)(void))Kanibo__StateID_RockUp._.vtable + 2))())
    || (v11 = StateMgr__getCurrentState(v2),
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11),
        v12 == (*((int (**)(void))Kanibo__StateID_Jump._.vtable + 2))())
    || (v13 = StateMgr__getCurrentState(v2),
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13),
        v14 == (*((int (**)(void))Kanibo__StateID_BackMove._.vtable + 2))()) )
  {
    if ( !sub_60001B14((StageActor *)a1, a1 + 648) && sub_60001814((StageActor *)a1, a1 + 648) != 1 )
    {
      v15 = 1;
      goto LABEL_12;
    }
    SE_EMY_DOWN_ref_2A7624(a1);
  }
  v15 = 0;
LABEL_12:
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v16 == 1 )
  {
    if ( v15
      || (v17 = StateMgr__getCurrentState(v2),
          v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17),
          v18 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))()) )
    {
      if ( FIELD_F32(a1, 108) <= FIELD_F32(dword_60CC6484, 112) )
        sub_60409994(dword_60C9A1F0, FIELD_S8(a1, 6298));
    }
  }
  return 1;
}
