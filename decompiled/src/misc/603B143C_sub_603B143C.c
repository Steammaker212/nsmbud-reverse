/* sub_603B143C
 * address: 0x603B143C   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603B143C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int *v5; // r2
  float v6; // s0
  bool v7; // r0
  float v8; // s2
  float v9; // s2
  float v10; // s2
  float v11; // s4
  float v12; // s6
  float v13; // s0
  float v14; // s2
  LightSource *v15; // r4
  Vec3 a3; // [sp+14h] [bp-24h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*((int (**)(void))stru_60C90710._._.vtable + 2))() )
    StageActor__cullCheck((StageActor *)a1, 0);
  v5 = dword_603B1628;
  if ( FIELD_U8(a1, 6609) )
    v5 = &dword_603B1628[1];
  v6 = *(float *)v5;
  v7 = 1;
  v8 = FIELD_F32(a1, 108);
  if ( v8 >= (float)(FIELD_F32(dword_60CC6484, 112) - *(float *)v5)
    && (float)(v6 + FIELD_F32(dword_60CC6484, 120)) >= v8 )
  {
    v9 = FIELD_F32(a1, 112);
    if ( (float)(v6 + FIELD_F32(dword_60CC6484, 124)) >= v9 )
      v7 = v9 < (float)(FIELD_F32(dword_60CC6484, 132) - v6);
  }
  FIELD_U8(a1, 6608) = v7;
  StateMgr__execute(v2);
  if ( FIELD_U8(a1, 6608) )
  {
    if ( FIELD_U8(a1, 6609) && StageActor__isOffScreen((StageActor *)a1) == 1 )
      sub_603B1028((_DWORD **)a1);
  }
  else
  {
    ActorScaler_execute((ActorScaler *)(a1 + 6616));
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6308));
    sub_603B1028((_DWORD **)a1);
    v10 = FIELD_F32(a1, 108);
    v11 = FIELD_F32(a1, 112);
    v12 = FIELD_F32(a1, 6436) - v11;
    FIELD_F32(a1, 304) = FIELD_F32(a1, 6432) - v10;
    FIELD_F32(a1, 308) = v12;
    a3.x = v10 + FIELD_F32(a1, 572);
    a3.y = v11 + FIELD_F32(a1, 576);
    v13 = FIELD_F32(a1, 116);
    v14 = FIELD_F32(a1, 580);
    v15 = (LightSource *)(a1 + 6536);
    a3.z = v13 + v14;
    LightSource_update1(v15, 18, &a3, 0, 0, 0, 0, 0, 0);
    LightSource_unkUpdate3(v15);
  }
  return 1;
}
