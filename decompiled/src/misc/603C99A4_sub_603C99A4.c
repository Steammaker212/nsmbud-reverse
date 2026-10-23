/* sub_603C99A4
 * address: 0x603C99A4   size: 2192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603C99A4(int a1)
{
  int v2; // r9
  void *v3; // r5
  int *v4; // r6
  void *Model2; // r10
  int v6; // r7
  ModelWrapper *v7; // r0
  _DWORD *v8; // r0
  int v10; // r1
  int v11; // r0
  ActiveColliderInfo *v12; // r2
  ActiveColliderMgr *v13; // r6
  int v14; // r2
  _DWORD *v15; // r5
  float v16; // s4
  unsigned int v17; // r0
  int *v18; // r6
  float *v19; // r2
  int v20; // r1
  float v21; // s0
  int v22; // s2
  int v23; // r0
  int v24; // r0
  int *v25; // r0
  int v26; // r1
  int v27; // s0
  int v28; // r0
  int v29; // r1
  void (__fastcall *v30)(int, int *); // r2
  int *v31; // r1
  StateBase *CurrentState; // r0
  int v33; // r7
  StateBase *v34; // r0
  int v35; // r6
  float v36; // s0
  int v37; // r2
  float v38; // s2
  int v39; // r1
  float v40; // s4
  float v41; // s0
  float v42; // s18
  int v43; // r6
  TileCheck *v44; // r0
  int v45; // r5
  float v46; // s16
  char v47; // r12
  int v48; // r1
  float v49; // s0
  int v50; // r0
  float v51; // s0
  bool v52; // cc
  StateBase *v53; // r0
  int v54; // r5
  int v55; // s2
  int *v56; // [sp+14h] [bp-CCh]
  int v57; // [sp+18h] [bp-C8h] BYREF
  _DWORD v58[2]; // [sp+1Ch] [bp-C4h] BYREF
  _DWORD v59[2]; // [sp+24h] [bp-BCh] BYREF
  int (**v60)(); // [sp+2Ch] [bp-B4h] BYREF
  _BYTE v61[8]; // [sp+30h] [bp-B0h] BYREF
  float v62; // [sp+38h] [bp-A8h]
  int v63; // [sp+3Ch] [bp-A4h]
  int v64; // [sp+40h] [bp-A0h]
  int v65; // [sp+50h] [bp-90h]
  TileCheck v66; // [sp+58h] [bp-88h] BYREF

  v2 = FIELD_U32(a1, 6300);
  v4 = (int *)(a1 + 6304);
  v3 = *(void **)(a1 + 6304);
  if ( !v3 )
    return 2;
  v56 = (int *)(a1 + 6300);
  Model2 = (void *)Resource_getModel2(v3, (sead__SafeString *)&byte_60C98AA0[8 * v2 + 64], 1, 1, 0, 0, 0, 0, 0);
  v6 = operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor((ModelWrapper *)v6, Model2, 1, 1, 0, 0, 0);
  ModelWrapper_setup(v7, (int)v3, 0, 0);
  FIELD_U32(a1, 6308) = v6;
  SkeletalAnim_play(**(_DWORD **)(v6 + 12), *v4, (int)&dword_60C98AA4);
  v8 = (_DWORD *)(a1 + 11864);
  if ( v2 )
  {
    *v8 = -1;
    FIELD_U32(a1, 11884) = 3;
  }
  else
  {
    *v8 = 0;
    FIELD_U32(a1, 11884) = 0;
    v10 = *v4;
    v11 = **(_DWORD **)(FIELD_U32(a1, 6308) + 20);
    *(_DWORD *)&v66.field_0 = &sead__SafeStringBase__vtable;
    v66.field_4 = (int)"wait";
    TexAnim_play(v11, v10, &v66);
  }
  v12 = (ActiveColliderInfo *)((char *)&unk_60BF75D4 + 44 * *v56);
  if ( v12 )
  {
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, v12, a1 + 11900);
    v13 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v13, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v13, (ActiveCollider *)(a1 + 188));
    }
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, 0);
  CollisionMgr_init((CollisionMgr *)(a1 + 6368), (StateActor *)a1, 0, 0, 0);
  CollisionMgr_init((CollisionMgr *)(a1 + 11968), (StateActor *)a1, 0, 0, 0);
  FIELD_U32(a1, 620) = a1 + 11776;
  FIELD_U32(a1, 11792) = 0;
  FIELD_U32(a1, 624) = a1 + 11812;
  FIELD_U32(a1, 11840) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 640) = a1 + 6232;
  v15 = (_DWORD *)(a1 + 11724);
  v14 = FIELD_U32(a1, 11724);
  if ( v14 == 1 )
  {
    v16 = 16.0;
    FIELD_U32(a1, 11732) ^= 1u;
    v18 = (int *)(a1 + 20);
    v17 = FIELD_U32(a1, 20);
    v19 = (float *)(a1 + 11752);
    v20 = (unsigned __int8)v17 >> 4;
    v21 = FIELD_F32(a1, 11740);
    v22 = v20;
  }
  else
  {
    v18 = (int *)(a1 + 20);
    v17 = FIELD_U32(a1, 20);
    v20 = (unsigned __int8)v17 >> 4;
    v21 = FIELD_F32(a1, 11744);
    if ( v14 )
    {
      FIELD_F32(a1, 11752) = v21 + (float)((float)(HIWORD(v17) & 0xF) * 16.0);
      v20 = (v17 >> 20) & 0xF;
      goto LABEL_16;
    }
    v22 = (unsigned __int8)v17 >> 4;
    v16 = 16.0;
    v19 = (float *)(a1 + 11752);
  }
  *v19 = v21 + (float)((float)(unsigned int)v22 * v16);
LABEL_16:
  FIELD_F32(a1, 11756) = v21 + (float)((float)(unsigned int)v20 * -16.0);
  if ( v2 )
  {
    FIELD_U32(a1, 508) = 1124073472;
    FIELD_U32(a1, 512) = 1124073472;
    if ( (v17 & 0x1000000) != 0 && FIELD_U8(dword_60CC6D8C, 17) )
      v23 = 1126170624;
    else
      v23 = 1120927744;
    FIELD_U32(a1, 500) = v23;
    FIELD_U32(a1, 504) = v23;
  }
  else
  {
    if ( FIELD_U8(a1, 18000) )
      v24 = 1115684864;
    else
      v24 = 1124073472;
    FIELD_U32(a1, 516) = v24;
    FIELD_U32(a1, 520) = v24;
    FIELD_U32(a1, 524) = 1129316352;
    FIELD_U32(a1, 528) = 1129316352;
  }
  v25 = dword_603C9E28;
  v26 = 0x1000000;
  if ( !v2 )
  {
    v25 = &dword_603C9E28[1];
    v26 = 0x2000000;
  }
  v27 = *v25;
  FIELD_U32(a1, 6328) = v26;
  FIELD_U32(a1, 11852) = v27;
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)byte_60C98AA0);
  v28 = *v18;
  if ( *v15 == 2 )
  {
    v29 = (unsigned __int16)v28 >> 12;
    if ( v29 == 2 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98A74);
      goto LABEL_42;
    }
    if ( v29 == 1 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9892C);
      goto LABEL_42;
    }
    v30 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    if ( (v28 & 0xFF0000) != 0 )
      v31 = &dword_60C9898C;
    else
      v31 = &dword_60C9890C;
  }
  else
  {
    if ( (v28 & 0xF0) == 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9890C);
      goto LABEL_42;
    }
    v30 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    if ( *v15 )
      v31 = &dword_60C9896C;
    else
      v31 = &dword_60C9894C;
  }
  v30(a1, v31);
LABEL_42:
  ((void (__fastcall *)(int *, int, int, _DWORD))checkLiquidCollisions)(
    &v57,
    a1 + 11888,
    a1 + 108,
    FIELD_U8(a1, 86));
  if ( v57 == 1 )
  {
    sub_600038DC((Enemy *)a1);
    if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v33 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v33 == (*(int (**)(void))(dword_60C9890C + 8))()
        || (v34 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
            v35 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v34, 0x0) + 2))(v34),
            v35 == (*(int (**)(void))(dword_60C9896C + 8))()) )
      {
        v36 = FIELD_F32(a1, 11888);
        v37 = FIELD_U32(a1, 116);
        v38 = FIELD_F32(EnemyCounterMaybe_instance, 944);
        v39 = FIELD_U32(a1, 108);
        v40 = FIELD_F32(a1, 11744);
        FIELD_U32(a1, 108) = v39;
        v41 = (float)(v36 - v38) + v40;
        FIELD_F32(a1, 112) = v41;
        FIELD_U32(a1, 584) = v39;
        FIELD_F32(a1, 588) = v41;
        FIELD_U32(a1, 592) = v37;
        FIELD_U32(a1, 608) = v39;
        FIELD_F32(a1, 612) = v41;
        FIELD_U32(a1, 616) = v37;
      }
    }
  }
  if ( FIELD_U8(a1, 11728) )
  {
    v42 = FIELD_F32(a1, 112);
    v43 = *v56;
    v44 = sub_6015D0AC(&v66);
    v45 = 0;
    v63 = 0;
    v64 = 0;
    v60 = off_60BF7664;
    v66.field_C = (int)&v60;
    v46 = flt_60B00F4C[3 * v43 + 2];
    v59[0] = FIELD_U32(a1, 108);
    *(float *)&v59[1] = v42 + 320.0;
    v58[0] = v59[0];
    *(float *)&v58[1] = v46 + v42;
    if ( ((int (__fastcall *)(TileCheck *, _BYTE *, _DWORD *, _DWORD *, int))loc_6015D6F0)(v44, v61, v59, v58, 8) == 1 )
    {
      v48 = FIELD_U32(a1, 116);
      v49 = v62 - v46;
      if ( v65 )
        v45 = FIELD_U32(v65, 144);
      v50 = FIELD_U32(a1, 108);
      FIELD_U32(a1, 108) = v50;
      FIELD_F32(a1, 112) = v49;
      FIELD_U32(a1, 584) = v50;
      FIELD_F32(a1, 588) = v49;
      FIELD_U32(a1, 592) = v48;
      FIELD_U32(a1, 608) = v50;
      FIELD_F32(a1, 612) = v49;
      FIELD_U32(a1, 616) = v48;
      FIELD_U32(a1, 17320) |= 1u;
      FIELD_U32(a1, 17324) |= 1u;
      if ( v45 )
      {
        if ( ((unsigned int)dword_60C98A98 & ~(1614585936 << v47) & 1) == 0 && _cxa_guard_acquire(dword_60C98A98) )
        {
          dword_60C98A94 = (int)&off_60BC00E0;
          _cxa_guard_release(dword_60C98A98);
        }
        if ( (**(int (__fastcall ***)(int, int *))v45)(v45, &dword_60C98A94) == 1 )
        {
          v51 = FIELD_F32(v45, 6116) / FIELD_F32(v45, 6484);
          if ( v51 >= 0.0 )
          {
            v52 = v51 < 1.0;
            if ( v51 <= 1.0 )
              v52 = v51 < 0.95;
            if ( !v52 )
              FIELD_U32(a1, 11720) = FIELD_U32(a1, 11720) & 0xFFFFFFF8 | 3;
          }
        }
      }
      v53 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v54 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v53, 0x0) + 2))(v53);
      if ( v54 == (*(int (**)(void))(dword_60C9892C + 8))() )
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6084) + 24))(
          FIELD_U32(a1, 6084),
          FIELD_U32(a1, 6092));
      else
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9892C);
    }
  }
  if ( !v2 )
  {
    memset(&v66, 0, 16);
    v66.field_10 = -1048576000;
    v66.field_14 = 1098907648;
    v66.field_18 = 1098907648;
    v66.field_1C = -1048576000;
    v66.field_20 = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 17344), (StageActor *)a1, (ShapedColliderInfo *)&v66);
    ColliderBase_setType((ColliderBase *)(a1 + 17344), 40);
  }
  FIELD_F64(a1, 6336) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6332))(a1 + 6332);
  FIELD_U32(a1, 6344) = v55;
  sub_603CA2AC(a1);
  return 1;
}
