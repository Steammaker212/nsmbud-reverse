/* sub_602ED390
 * address: 0x602ED390   size: 1484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602ED390(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  float v4; // r1
  int v5; // r2
  int v6; // r6
  float v7; // s0
  float v8; // s4
  float v9; // s2
  int v10; // r0
  float v11; // s2
  int v12; // r0
  int v13; // r1
  float v14; // r1
  float v15; // s0
  float v16; // s2
  float v17; // s6
  float v18; // s6
  int v19; // r0
  int v20; // r2
  StateBase *v21; // r0
  int v22; // r6
  char v23; // r12
  int v24; // r6
  float v25; // s4
  float v26; // s10
  float v27; // s2
  StateBase *v28; // r0
  int v29; // r6
  StateBase *v30; // r0
  int v31; // r6
  StateBase *v32; // r0
  int v33; // r6
  StateBase *v34; // r0
  int v35; // r6
  StateBase *v36; // r0
  int v37; // r5
  char v38; // r12
  int v39; // r5
  float v40; // s2
  float v41; // s4
  int v42; // r4
  char v43; // r12
  float v44; // [sp+0h] [bp-28h] BYREF
  float v45; // [sp+4h] [bp-24h]
  float v46; // [sp+8h] [bp-20h] BYREF
  float v47; // [sp+Ch] [bp-1Ch]
  int v48; // [sp+10h] [bp-18h]
  int v49; // [sp+14h] [bp-14h] BYREF

  if ( !FIELD_U8(a1, 7525) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v3 != (*(int (**)(void))(stru_60C92664 + 8))() )
      goto LABEL_12;
    v4 = FIELD_F32(a1, 112);
    v5 = FIELD_U32(a1, 116);
    v46 = FIELD_F32(a1, 108);
    v47 = v4;
    v48 = v5;
    sub_602ED9C4(a1, &v46);
    if ( (FIELD_U8(a1, 569) & 4) != 0 )
    {
      FIELD_F32(a1, 108) = v46;
      FIELD_F32(a1, 112) = v47;
      v10 = v48;
    }
    else
    {
      v6 = AreaTask_intance;
      AreaTask_getWrappedXPos(AreaTask_intance);
      v8 = FIELD_F32(v6, 1820) - FIELD_F32(v6, 1812);
      v9 = v7 - FIELD_F32(a1, 108);
      if ( v9 >= (float)(v8 * -0.5) )
      {
        if ( v9 > (float)(v8 * 0.5) )
          v9 = v9 - v8;
      }
      else
      {
        v9 = v9 + v8;
      }
      v11 = v7 - v9;
      v12 = FIELD_U32(a1, 112);
      v13 = FIELD_U32(a1, 116);
      FIELD_F32(a1, 584) = v11;
      FIELD_U32(a1, 588) = v12;
      FIELD_U32(a1, 592) = v13;
      FIELD_F32(a1, 608) = v11;
      FIELD_U32(a1, 612) = v12;
      FIELD_U32(a1, 616) = v13;
      v10 = v48;
      v14 = v47;
      FIELD_F32(a1, 108) = v7;
      FIELD_F32(a1, 112) = v14;
    }
    FIELD_U32(a1, 116) = v10;
    if ( !sub_602EDA9C(a1) )
    {
LABEL_12:
      v15 = FIELD_F32(a1, 108);
      v16 = FIELD_F32(a1, 112);
      v17 = v16 + FIELD_F32(a1, 576);
      v44 = v15 + FIELD_F32(a1, 572);
      v45 = v17;
      v18 = FIELD_F32(a1, 7404);
      v19 = FIELD_U32(a1, 116);
      v46 = v15;
      v47 = v16 + (float)(v18 * 0.7);
      v48 = v19;
      ((void (__fastcall *)(int *, _DWORD, float *, _DWORD, _DWORD, _DWORD))checkLiquidCollisions)(
        &v49,
        0,
        &v46,
        FIELD_U8(a1, 86),
        LODWORD(v44),
        LODWORD(v45));
      v20 = v49;
      if ( v49 != 1 )
        v20 = 0;
      sub_602F2FD0(a1 + 6784, &v44, v20);
      FIELD_U8(a1, 7526) = 0;
      v21 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
      if ( v22 == (*(int (**)(void))(dword_60C923E4 + 8))() )
      {
        v24 = FIELD_U32(a1, 56);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613682088 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v24 && (**(int (__fastcall ***)(int, int *))v24)(v24, &StageActor_RTTI) == 1 )
        {
          v25 = FIELD_F32(v24, 116);
          v26 = FIELD_F32(a1, 7380);
          v27 = FIELD_F32(v24, 112) - FIELD_F32(a1, 7376);
          FIELD_F32(a1, 7384) = FIELD_F32(v24, 108) - FIELD_F32(a1, 7372);
          FIELD_F32(a1, 7388) = v27;
          FIELD_F32(a1, 7392) = v25 - v26;
        }
      }
      else
      {
        v28 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v29 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v28, 0x0) + 2))(v28);
        if ( v29 == (*(int (**)(void))(dword_60C92404 + 8))() )
        {
          sub_602EDD20(a1, a1 + 7384, a1 + 7396);
        }
        else
        {
          FIELD_U32(a1, 7384) = FIELD_U32(a1, 108);
          FIELD_U32(a1, 7388) = FIELD_U32(a1, 112);
          FIELD_U32(a1, 7392) = FIELD_U32(a1, 116);
          FIELD_U32(a1, 7396) = FIELD_U32(a1, 164);
        }
      }
      if ( FIELD_U8(a1, 7524) )
      {
        v30 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v31 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v30, 0x0) + 2))(v30);
        if ( v31 != (*(int (**)(void))(dword_60C926C4 + 8))() )
        {
          v32 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
          v33 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v32, 0x0) + 2))(v32);
          if ( v33 != (*(int (**)(void))(dword_60C926E4 + 8))() )
            (***(void (__fastcall ****)(_DWORD, int))(a1 + 7496))(FIELD_U32(a1, 7496), a1);
        }
      }
      v34 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v35 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v34, 0x0) + 2))(v34);
      if ( v35 != (*(int (**)(void))(dword_60C923E4 + 8))() )
      {
        v36 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v37 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v36, 0x0) + 2))(v36);
        if ( v37 != (*(int (**)(void))(dword_60C92404 + 8))() )
        {
          v39 = FIELD_U32(a1, 56);
          if ( ((unsigned int)&dword_60C7B364 & ~(1613682688 << v38) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
          {
            StageActor_RTTI = (int)&off_60BC0098;
            _cxa_guard_release(&dword_60C7B364);
          }
          if ( v39 && (**(int (__fastcall ***)(int, int *))v39)(v39, &StageActor_RTTI) == 1 )
          {
            v40 = FIELD_F32(a1, 7388) + FIELD_F32(a1, 7376);
            v41 = FIELD_F32(a1, 7392) + FIELD_F32(a1, 7380);
            FIELD_F32(v39, 108) = FIELD_F32(a1, 7384) + FIELD_F32(a1, 7372);
            FIELD_F32(v39, 112) = v40;
            FIELD_F32(v39, 116) = v41;
          }
        }
      }
      sub_602EDE70(a1);
      v42 = FIELD_U32(a1, 56);
      if ( ((unsigned int)dword_60C7B430 & ~(1613682912 << v43) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
      {
        Enemy_RTTI = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C7B430);
      }
      if ( v42 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v42)(v42, &Enemy_RTTI) == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 224))(v42);
      }
    }
  }
}
