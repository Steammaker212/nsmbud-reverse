/* sub_60142720
 * address: 0x60142720   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60142720(StageActor *a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  int v7; // r6
  float v8; // s0
  StateBase *v9; // r0
  int v10; // r5
  int v11; // r0

  v2 = (StateMgr *)&a1[9].aCollider.field_64;
  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C87E34 + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60C87DEC + 8))() )
    {
      (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 256))(a1);
      LightSource_update1((LightSource *)&a1[9].field_230, 1, &FIELD_U32(a1, 0x6C), 0, 0, 0, 0, 0, 0);
      LightSource_unkUpdate3((LightSource *)&a1[9].field_230);
    }
    v7 = a1[9].aCollider.info.field_14;
    if ( v7 < 1 )
      v8 = 1.0;
    else
      v8 = (float)v7 / (float)(*(int (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 260))(a1);
    *(float *)&a1[9].aCollider.field_D8 = v8 * *(float *)&a1[9].aCollider.field_FC;
    a1[9].aCollider.field_E0 = LODWORD(FIELD_U32(a1, 0x6C).x);
    a1[9].aCollider.field_E4 = LODWORD(FIELD_U32(a1, 0x6C).y);
    a1[9].aCollider.field_E8 = LODWORD(FIELD_U32(a1, 0x6C).z);
    LightMask__update((LightMask *)&a1[9].aCollider.field_D4);
  }
  v9 = StateMgr__getCurrentState(v2);
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 != (*(int (**)(void))(dword_60C87DEC + 8))() )
  {
    StageActor__cullCheck(a1, 10);
    if ( v11 == 1 )
      SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)a1);
  }
  return 1;
}
