/* sub_606F4650
 * address: 0x606F4650   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606F4650(int a1, unsigned int a2)
{
  float *v4; // r6
  float v5; // s0
  int v6; // r0
  unsigned int v7; // r0
  int v8; // s0
  unsigned int v9; // r0
  float v10; // s0
  float *v11; // r5
  float v12; // s0
  float v13; // r0
  float v14; // s0
  int *v15; // r1
  int v16; // r0
  int v17; // s0
  StateBase *CurrentState; // r0
  int v19; // r6
  unsigned int v20; // r4
  StateBase *v21; // r0
  int v22; // r7
  unsigned int v23; // r1
  float result; // s0
  ShapedColliderInfo a5; // [sp+0h] [bp-68h] BYREF
  float v26[16]; // [sp+28h] [bp-40h] BYREF

  v4 = (float *)(a1 + 6492);
  v5 = FIELD_F32(a1, 6492) * 0.6;
  v6 = dword_60CC6484;
  FIELD_F32(a1, 6132) = FIELD_F32(dword_60CC6484, 112) - v5;
  FIELD_F32(a1, 6136) = (float)(FIELD_F32(v6, 112) + FIELD_F32(v6, 104)) + v5;
  FIELD_U32(a1, 116) = 1163247616;
  v7 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a1 + 196))(a1, a2);
  if ( v7 == 1 )
  {
    v8 = 1119879168;
  }
  else
  {
    if ( v7 )
    {
      FIELD_F32(a1, 6484) = (float)((float)((float)(v7 - 1) * 0.5) + 6.0) * 16.0;
      if ( v7 > 0xF )
        goto LABEL_8;
      goto LABEL_7;
    }
    v8 = 1117782016;
  }
  FIELD_U32(a1, 6484) = v8;
LABEL_7:
  FIELD_U32(a1, 6144) = dword_60AF5AAC[v7];
LABEL_8:
  v9 = (a2 >> 20) & 0xF;
  if ( v9 )
    v10 = (float)((float)v9 + 1.0) * 16.0;
  else
    v10 = 64.0;
  *v4 = v10;
  v11 = (float *)(a1 + 6496);
  FIELD_F32(a1, 6496) = (float)(v10 * 5.5) * 0.25;
  if ( (FIELD_U8(a1, 25) & 1) != 0 )
  {
    *v11 = 32.0;
    *v4 = 23.273;
  }
  sub_606F60C0(a1);
  FIELD_F32(a1, 144) = (float)(*v4 * 0.25) * 0.0625;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 1065353216;
  ef_waterpillar_ref(a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60C205A0, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 6180), (StageActor *)a1, &stru_60C205CC, 0);
  v12 = *v11;
  v13 = FIELD_F32(a1, 6116);
  memset(&a5, 0, 16);
  v26[0] = v12 * -0.5;
  v26[1] = v13;
  v26[2] = v12 * 0.5;
  v26[3] = v13;
  LODWORD(a5.topLeft.x) = v26;
  a5.topLeft.y = 0.0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6888), (StageActor *)a1, (SolidOnTopColliderInfo *)&a5);
  FIELD_U32(a1, 7060) = 0;
  FIELD_U32(a1, 7064) = 0;
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6888), 11);
  FIELD_U32(a1, 7112) = 0;
  memset(&a5, 0, 16);
  v14 = *v4 * 0.5;
  a5.topLeft.x = *v4 * -0.5;
  a5.topLeft.y = 16.0;
  a5.bottomRight.x = v14;
  a5.bottomRight.y = 0.0;
  a5.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 7336), (StageActor *)a1, &a5);
  ColliderBase_setType((ColliderBase *)(a1 + 7336), 37);
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 7336), 11);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1124073472;
  v15 = dword_606F4A74;
  LOWORD(v16) = 0;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v15 = &dword_606F4A74[1];
  HIWORD(v16) = 17280;
  v17 = *v15;
  FIELD_U32(a1, 500) = *v15;
  FIELD_U32(a1, 504) = v16;
  FIELD_U32(a1, 508) = v17;
  FIELD_U32(a1, 512) = v16;
  FIELD_U32(a1, 7992) = 1140850688;
  FIELD_U32(a1, 7996) = 1140850688;
  FIELD_U8(a1, 6140) = 1;
  StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBC3E0);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v20 = 0;
  if ( v19 != (*(int (**)(void))(dword_60CBC428 + 8))() )
  {
    v20 = 0;
    do
    {
      StateMgr__execute((StateMgr *)(a1 + 6084));
      ef_waterpillar_ref(a1);
      v21 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
      ++v20;
    }
    while ( v22 != (*(int (__fastcall **)(int *))(dword_60CBC428 + 8))(&dword_60CBC428) );
  }
  v23 = 100;
  if ( (FIELD_U32(a1, 24) & 0xF) != 0 )
    v23 = 50;
  result = (float)(101 - v20 % v23);
  FIELD_F32(a1, 6488) = result;
  FIELD_U8(a1, 6140) = 0;
  return result;
}
