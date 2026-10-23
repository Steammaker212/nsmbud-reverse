/* RiverPiranha__onExecute
 * address: 0x603DEB84   size: 1632   group: misc
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
int __fastcall RiverPiranha__onExecute(_BYTE *a1)
{
  _BYTE *v2; // r7
  StateMgr *v3; // r8
  StateBase *CurrentState; // r0
  int v5; // r6
  int (__fastcall ***v6)(_DWORD, int *); // r6
  char v7; // r12
  int v8; // r1
  StateBase *v9; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  int (__fastcall ***v13)(_DWORD, int *); // r6
  char v14; // r12
  float v15; // s0
  int v16; // t1
  float v17; // s0
  int v18; // r1
  StateBase *v19; // r0
  int v20; // r6
  StateBase *v21; // r0
  int v22; // r6
  float v23; // s0
  unsigned int v24; // r0
  unsigned int v25; // r0
  StateBase *v26; // r0
  int v27; // r6
  StateBase *v28; // r0
  int v29; // r6
  unsigned int v30; // r0
  unsigned int v31; // r0
  StateBase *v32; // r0
  int v33; // r5
  int v35; // [sp+4h] [bp-2Ch] BYREF
  int v36; // [sp+8h] [bp-28h] BYREF
  _DWORD v37[9]; // [sp+Ch] [bp-24h] BYREF

  v2 = a1 + 6332;
  v3 = (StateMgr *)(a1 + 6084);
  if ( !a1[6332] )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                  ActorMgr__instance + 27168,
                                                  *((_DWORD *)a1 + 1585));
      if ( ((unsigned int)&dword_60C90E54 & ~(1614670864 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
      {
        dword_60C90E50 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C90E54);
      }
      if ( v6 && (**v6)(v6, &dword_60C90E50) == 1 && sub_602B46E4((int)v6) && sub_602B4874((int)v6) == 1 )
      {
        (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 624))(a1);
        *((_DWORD *)a1 + 1666) = 20;
        *((_DWORD *)a1 + 1579) = 10;
      }
    }
  }
  ActorScaler_execute((ActorScaler *)(a1 + 6980));
  StateMgr__execute((StateMgr *)(v2 - 248));
  v8 = *((_DWORD *)a1 + 1666);
  if ( v8 )
    *((_DWORD *)a1 + 1666) = v8 - 1;
  if ( *((_DWORD *)a1 + 1650) == 1 && !a1[6660] )
    a1[6660] = 1;
  if ( !a1[536] )
  {
    v9 = StateMgr__getCurrentState((StateMgr *)(v2 - 248));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
    if ( v10 != (*(int (**)(void))(dword_60C993DC + 8))() )
    {
      v11 = StateMgr__getCurrentState((StateMgr *)(v2 - 248));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
      if ( v12 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      {
        v13 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                     ActorMgr__instance + 27168,
                                                     *((_DWORD *)a1 + 1585));
        if ( ((unsigned int)&dword_60C90E54 & ~(1614671292 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
        {
          dword_60C90E50 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C90E54);
        }
        if ( !v13 || (**v13)(v13, &dword_60C90E50) != 1 || sub_602A588C((int)v13) == 1 )
          (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C993DC);
      }
    }
  }
  if ( !*v2 )
    StageActor__cullCheck((StageActor *)a1, 0);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( Actor__getProfileId((Actor *)a1) == 501 )
  {
    if ( a1[6672] )
    {
      CollisionMgr_process(a1 + 648, v15);
      if ( (a1[2872] & 1) != 0 )
        *((_DWORD *)a1 + 31) = 0;
      v16 = *((_DWORD *)a1 + 27);
      v17 = *((float *)a1 + 28);
      v18 = *((_DWORD *)a1 + 29);
      v36 = 0;
      v37[0] = v16;
      *(float *)&v37[1] = v17 + -8.0;
      v37[2] = v18;
      ((void (__fastcall *)(int *, int *, _DWORD *, _DWORD))checkLiquidCollisions)(
        &v35,
        &v36,
        v37,
        (unsigned __int8)a1[86]);
      if ( v35 )
      {
        a1[6672] = 0;
        StageActor__createWaterSplash((StageActor *)a1, (Vec2 *)(a1 + 108), 941, 6, "SE_OBJ_CMN_SPLASH");
      }
    }
    else
    {
      v26 = StateMgr__getCurrentState((StateMgr *)(v2 - 248));
      v27 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v26, 0x0) + 2))(v26);
      if ( v27 != (*(int (**)(void))(dword_60C993FC + 8))() )
      {
        v28 = StateMgr__getCurrentState((StateMgr *)(v2 - 248));
        v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28);
        if ( v29 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        {
          v30 = *((_DWORD *)a1 + 1575) + 50331648;
          *((_DWORD *)a1 + 1575) = v30;
          *((float *)a1 + 28) = (float)(*((float *)a1 + 1577) + -3.0)
                              + (float)(*(float *)((char *)sinLutTable + ((v30 >> 20) & 0xFF0))
                                      + (float)((float)((float)(v30 & 0xFFFFFF)
                                                      * *(float *)((char *)&sinLutTable[1] + ((v30 >> 20) & 0xFF0)))
                                              * 0.000000059605));
          v31 = *((_DWORD *)a1 + 1576) + 0x2000000;
          *((_DWORD *)a1 + 1576) = v31;
          *((_DWORD *)a1 + 40) = (int)(float)((float)((float)(*(float *)((char *)sinLutTable + ((v31 >> 20) & 0xFF0))
                                                            + (float)((float)((float)(v31 & 0xFFFFFF)
                                                                            * *(float *)((char *)&sinLutTable[1]
                                                                                       + ((v31 >> 20) & 0xFF0)))
                                                                    * 0.000000059605))
                                                    * 268440000.0)
                                            + 1073700000.0);
        }
      }
    }
  }
  else
  {
    v19 = StateMgr__getCurrentState((StateMgr *)(v2 - 248));
    v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
    if ( v20 != (*(int (**)(void))(dword_60C993FC + 8))() )
    {
      v21 = StateMgr__getCurrentState((StateMgr *)(v2 - 248));
      v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
      if ( v22 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      {
        v24 = *((_DWORD *)a1 + 1575) + 50331648;
        *((_DWORD *)a1 + 1575) = v24;
        *((float *)a1 + 28) = (float)(*((float *)a1 + 1577) + -3.0)
                            + (float)(*(float *)((char *)sinLutTable + ((v24 >> 20) & 0xFF0))
                                    + (float)((float)((float)(v24 & 0xFFFFFF)
                                                    * *(float *)((char *)&sinLutTable[1] + ((v24 >> 20) & 0xFF0)))
                                            * 0.000000059605));
        v25 = *((_DWORD *)a1 + 1576) + 0x2000000;
        *((_DWORD *)a1 + 1576) = v25;
        LODWORD(v23) = (int)(float)((float)((float)(*(float *)((char *)sinLutTable + ((v25 >> 20) & 0xFF0))
                                                  + (float)((float)((float)(v25 & 0xFFFFFF)
                                                                  * *(float *)((char *)&sinLutTable[1]
                                                                             + ((v25 >> 20) & 0xFF0)))
                                                          * 0.000000059605))
                                          * 268440000.0)
                                  + 1073700000.0);
        *((float *)a1 + 40) = v23;
      }
      CollisionMgr_process(a1 + 648, v23);
      if ( (a1[2872] & 1) != 0 )
        *((_DWORD *)a1 + 31) = 0;
    }
  }
  v32 = StateMgr__getCurrentState(v3);
  v33 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v32, 0x0) + 2))(v32);
  if ( v33 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    j_ModelWrapper_updateAnims(*((_DWORD *)a1 + 1589));
  sub_602A33AC(a1);
  return 1;
}
