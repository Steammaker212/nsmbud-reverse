/* sub_602C1470
 * address: 0x602C1470   size: 1392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C1470(int a1)
{
  ActiveColliderMgr *v2; // r7
  ActiveColliderMgr *v3; // r6
  unsigned int v4; // r0
  unsigned int v5; // r3
  int v6; // r0
  int v7; // r3
  float v8; // s2
  int v9; // r5
  int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  float v14; // s0
  float v15; // s2
  int v16; // r4
  double (__fastcall **v17)(int); // t1
  int v18; // s2
  _DWORD v20[11]; // [sp+4h] [bp-2Ch] BYREF

  FIELD_U8(a1, 6477) = (FIELD_U32(a1, 20) & 0x1000) != 0;
  sub_602C1A20(a1);
  FIELD_U8(a1, 6472) = 1;
  FIELD_U32(a1, 6316) = 1090519040;
  FIELD_U32(a1, 6312) = 1082130432;
  FIELD_U32(a1, 6308) = -1065353216;
  FIELD_U32(a1, 6328) = -1056964608;
  FIELD_U32(a1, 6324) = 1082130432;
  FIELD_U32(a1, 6320) = -1065353216;
  FIELD_U32(a1, 6340) = 1090519040;
  FIELD_U32(a1, 6336) = 1086324736;
  FIELD_U32(a1, 6332) = -1061158912;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 648),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)(a1 + 6320),
    (CollisionMgr_Sensor *)(a1 + 6308),
    (CollisionMgr_Sensor *)(a1 + 6332));
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 6680),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)(a1 + 6320),
    (CollisionMgr_Sensor *)(a1 + 6308),
    (CollisionMgr_Sensor *)(a1 + 6332));
  FIELD_U32(a1, 9236) |= 4u;
  FIELD_U32(a1, 9228) |= 4u;
  FIELD_U32(a1, 9212) |= 4u;
  FIELD_U32(a1, 9220) |= 4u;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE4C34, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 12036), (StageActor *)a1, &stru_60AFE814, 0);
  FIELD_U32(a1, 12148) = a1 + 12340;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 104) = dword_60C911DC;
  FIELD_U32(a1, 100) = dword_60C911E0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 6420) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6424) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6428) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  if ( FIELD_U8(a1, 6472) )
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    v2 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
    }
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 12036))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 12036)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 12036));
    }
    v4 = FIELD_U32(a1, 20);
    FIELD_U8(a1, 6479) = v4 >> 28;
    if ( (v4 >> 28) - 1 > 2 )
    {
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 1056964608;
      FIELD_U32(a1, 128) = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9123C);
    }
    else
    {
      FIELD_U8(a1, 6473) = sub_607162B8(
                                TileMgr_instance,
                                (unsigned __int16)(int)(float)(FIELD_F32(a1, 108) + 8.0),
                                (unsigned __int16)(int)(float)-(float)(FIELD_F32(a1, 112) + -8.0),
                                FIELD_U8(a1, 86),
                                COERCE_FLOAT((int)(float)(FIELD_F32(a1, 108) + 8.0))) == 16;
      v5 = FIELD_U32(a1, 20);
      v6 = (v5 >> 8) & 0xF;
      if ( v6 )
      {
        FIELD_F32(a1, 6352) = (float)(unsigned int)v6 * 16.0;
        FIELD_U8(a1, 6475) = 1;
      }
      v7 = (unsigned __int8)v5 >> 4;
      if ( v7 )
      {
        FIELD_F32(a1, 6356) = (float)(unsigned int)v7 * 16.0;
        FIELD_U8(a1, 6476) = 1;
      }
      v8 = FIELD_F32(a1, 108);
      FIELD_F32(a1, 108) = v8 + 0.8;
      FIELD_F32(a1, 6420) = v8 + 0.8;
      FIELD_U32(a1, 6424) = FIELD_U32(a1, 112);
      FIELD_U32(a1, 6428) = FIELD_U32(a1, 116);
      FIELD_U8(a1, 6483) = 7;
      v20[0] = &sead__SafeStringBase__vtable;
      v20[1] = dword_60C91230;
      v9 = a1 + 6304;
      sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)v20);
      v10 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
      v11 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v11 )
        v10 += 4 * v11;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 1);
      v12 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v13 = *(_DWORD *)(*(_DWORD *)v9 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v13 )
        v12 += 4 * v13;
      *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9133C);
    }
  }
  else
  {
    FIELD_U32(a1, 144) = 0;
    FIELD_U32(a1, 148) = 0;
    FIELD_U32(a1, 152) = 0;
    FIELD_U8(a1, 6479) = 0;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9131C);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  sub_602C1BE0(a1, 0);
  v14 = FIELD_F32(a1, 6408) - FIELD_F32(a1, 108);
  v15 = (float)(FIELD_F32(a1, 6412) + -2.0) - FIELD_F32(a1, 112);
  FIELD_F32(a1, 304) = v14;
  FIELD_F32(a1, 308) = v15;
  FIELD_F32(a1, 12152) = v14;
  FIELD_F32(a1, 12156) = v15;
  FIELD_U8(a1, 6474) = 1;
  FIELD_U8(a1, 6056) = 1;
  v17 = *(double (__fastcall ***)(int))(a1 + 6612);
  v16 = a1 + 6612;
  FIELD_F64(v16, 4) = (*v17)(v16);
  FIELD_U32(v16, 12) = v18;
  *(_DWORD *)(v16 - 5988) = v16 + 32;
  FIELD_U32(v16, 60) = 1;
  return 1;
}
