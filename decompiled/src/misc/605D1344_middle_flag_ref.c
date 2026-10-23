/* middle_flag_ref
 * address: 0x605D1344   size: 1824   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall middle_flag_ref(int a1)
{
  int result; // r0
  int v3; // r1
  _BYTE *v4; // r9
  float v5; // s2
  ActiveColliderMgr *v6; // r6
  void *ResArchiveById; // r6
  void *Model2; // r7
  ModelWrapper *v9; // r5
  ModelWrapper *v10; // r0
  float v11; // s16
  int v12; // r0
  int v13; // r0
  float **v14; // r8
  int v15; // r1
  int v16; // r2
  _BYTE *v17; // r11
  int v18; // r0
  ActiveColliderMgr *v19; // r5
  unsigned int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r0
  char v24; // r1
  int v25; // r0
  unsigned int v26; // r0
  unsigned int v27; // r1
  unsigned int v28; // r2
  int v29; // s2
  float *v30; // r7
  float *v31; // r5
  float *v32; // r1
  float v33; // s14
  float v34; // s0
  float v35; // s2
  float v36; // s10
  float v37; // s5
  float v38; // s6
  float v39; // s1
  float v40; // s13
  float v41; // s9
  ActiveCollider *v42; // [sp+14h] [bp-74h]
  TileCheck_Result a2; // [sp+18h] [bp-70h] BYREF
  float v44; // [sp+3Ch] [bp-4Ch]
  float v45; // [sp+40h] [bp-48h]
  int v46; // [sp+44h] [bp-44h]
  Vec2 positionOffset; // [sp+48h] [bp-40h] BYREF
  Vec2 a3; // [sp+50h] [bp-38h] BYREF

  if ( FIELD_S32(dword_60C96478, 96) < 1 || (result = 2, !FIELD_U32(dword_60C96478, 104)) )
  {
    result = 2;
    if ( (unsigned __int8)(FIELD_U8(dword_60C9A1F0, 6559) - 1) >= 3u )
    {
      v3 = FIELD_U32(a1, 20);
      if ( FIELD_U8(dword_60C99DD4, 194) )
      {
        if ( (v3 & 0x100) != 0 )
          return result;
      }
      else if ( (v3 & 0x200) != 0 )
      {
        return result;
      }
      FIELD_U8(a1, 6518) = (FIELD_U32(a1, 20) & 0x1000) != 0;
      v4 = (_BYTE *)(a1 + 6518);
      FIELD_U32(a1, 500) = 1115684864;
      FIELD_U32(a1, 504) = 1142947840;
      FIELD_U32(a1, 116) = 1137180672;
      FIELD_U32(a1, 160) = -1073741824;
      FIELD_U8(a1, 6517) = (v3 & 0x20) != 0;
      if ( (v3 & 0x20) != 0 )
      {
        CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, (CollisionMgr_Sensor *)&unk_60B058D8, 0, 0);
        if ( *v4 )
        {
          FIELD_U32(a1, 3200) |= 0x20000u;
          FIELD_U32(a1, 3204) |= 0x200u;
        }
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 100) = -1103940813;
        FIELD_U32(a1, 136) = -1065353216;
        if ( (FIELD_U8(a1, 24) & 1) != 0 )
        {
          a2.field_C = 0;
          a2.field_10 = 0;
          v5 = FIELD_F32(a1, 112);
          a3.x = FIELD_F32(a1, 108);
          positionOffset.x = a3.x;
          a3.y = v5;
          positionOffset.y = v5 + -160.0;
          if ( TileCheck_check((TileCheck *)(a1 + 652), &a2, &a3, &positionOffset, 15) == 1 )
            FIELD_F32(a1, 112) = a2.field_8;
        }
      }
      ActiveCollider__init((ActiveCollider *)(a1 + 6104), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C0B040, 0);
      v6 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6104))
        && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 6104)) )
      {
        ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 6104));
      }
      v42 = (ActiveCollider *)(a1 + 6104);
      ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      *(_DWORD *)&a2.field_0 = &sead__SafeStringBase__vtable;
      LODWORD(a2.field_4) = "middle_flag";
      Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&a2, 2, 1, 1, 0, 0, 0, 0);
      v9 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
      v10 = sub_60421830(v9, Model2, 2, 1, 1, 0, 0);
      j_ModelWrapper_setupModel(v10, ResArchiveById, 0, 0);
      v11 = 0.0;
      FIELD_U32(a1, 6100) = v9;
      *(_DWORD *)&a2.field_0 = &sead__SafeStringBase__vtable;
      LODWORD(a2.field_4) = "wait";
      sub_60421938(v9, (int)ResArchiveById, (int)&a2);
      v12 = **(_DWORD **)(FIELD_U32(a1, 6100) + 20);
      *(_DWORD *)&a2.field_0 = &sead__SafeStringBase__vtable;
      LODWORD(a2.field_4) = "middle_flag";
      TexAnim_play(v12, (int)ResArchiveById, &a2);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 20) + 4), 0);
      v13 = **(_DWORD **)(FIELD_U32(a1, 6100) + 28);
      *(_DWORD *)&a2.field_0 = &sead__SafeStringBase__vtable;
      LODWORD(a2.field_4) = "wait";
      sub_60446088(v13, (int)ResArchiveById, &a2);
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB11C0);
      v14 = (float **)(a1 + 6100);
      v15 = FIELD_U8(LevelInfo_instance, 16);
      v16 = FIELD_U8(LevelInfo_instance, 17);
      FIELD_U8(a1, 6516) = 0;
      v17 = (_BYTE *)(a1 + 6516);
      if ( sub_603F6960((unsigned __int8 *)(dword_60C99DD4 + 272), v15, v16) == -1
        || (v18 = *(unsigned __int8 *)(dword_60C99DD4 + (FIELD_U32(a1, 20) & 1) + 284), v18 == 255) )
      {
        v11 = 0.0;
        if ( !*v17 && !*v4 )
          EffectWrapper_update((EffectWrapper *)(a1 + 6412), 102, (Vec3 *)(a1 + 108), 0, 0);
      }
      else
      {
        FIELD_U8(a1, 6976) = v18;
        v19 = ActiveColliderMgr_instance;
        ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v42);
        ActiveColldierMgr_removeFromCreateList(v19, v42);
        ActiveColldierMgr_removeFromList3(v19, (int)v42);
        v20 = FIELD_U8(a1, 6976);
        v21 = 0;
        if ( v20 < 6 )
          v21 = (char)v20;
        v22 = *(_DWORD *)(dword_60C99DD4 + 272 + 72 * v21 + 32);
        v23 = *(char *)(dword_60C99DD4 + 272 + (FIELD_U32(a1, 20) & 1) + 14);
        v24 = *(_BYTE *)(dword_60C99DD4 + 272 + (FIELD_U32(a1, 20) & 1) + 14);
        if ( v22 == 6 )
        {
          FIELD_U8(a1, 6519) = 1;
          v11 = (float)v24 + 5.0;
        }
        else if ( (unsigned __int8)v23 <= 5u )
        {
          v11 = flt_60B058F0[v23];
        }
        *v17 = 1;
      }
      *(_DWORD *)(**((_DWORD **)*v14 + 5) + 24) = 0;
      v25 = **((_DWORD **)*v14 + 5);
      FIELD_F32(v25, 20) = v11;
      FIELD_U32(v25, 28) |= 2u;
      v26 = FIELD_U32(a1, 156);
      v27 = FIELD_U32(a1, 160);
      v28 = FIELD_U32(a1, 164);
      v29 = v27 & 0xFFFFFF;
      v30 = (float *)((char *)sinLutTable + ((v27 >> 20) & 0xFF0));
      v31 = (float *)((char *)sinLutTable + ((v28 >> 20) & 0xFF0));
      v32 = (float *)((char *)sinLutTable + ((v26 >> 20) & 0xFF0));
      v33 = (float)(v26 & 0xFFFFFF);
      v34 = (float)(v28 & 0xFFFFFF) * 0.000000059605;
      v35 = (float)(unsigned int)v29 * 0.000000059605;
      v36 = v31[2] + (float)(v34 * v31[3]);
      v37 = v30[2] + (float)(v35 * v30[3]);
      v38 = *v31 + (float)(v34 * v31[1]);
      v39 = *v30 + (float)(v35 * v30[1]);
      v40 = v32[2] + (float)((float)(v33 * 0.000000059605) * v32[3]);
      v41 = *v32 + (float)((float)(v33 * 0.000000059605) * v32[1]);
      *(float *)&a2.field_0 = v37 * v36;
      *(float *)&a2.field_10 = v37 * v38;
      *(float *)&a2.field_20 = -v39;
      a2.field_4 = (float)((float)(v41 * v39) * v36) - (float)(v40 * v38);
      *(float *)&a2.field_14 = (float)(v40 * v36) + (float)((float)(v41 * v39) * v38);
      v44 = v41 * v37;
      a2.field_8 = (float)(v39 * (float)(v40 * v36)) + (float)(v41 * v38);
      *(float *)&a2.field_18 = (float)(v39 * (float)(v40 * v38)) - (float)(v41 * v36);
      v45 = v40 * v37;
      a2.field_C = FIELD_U32(a1, 108);
      a2.field_1C = FIELD_U32(a1, 112);
      v46 = FIELD_U32(a1, 116);
      (*(void (__fastcall **)(_DWORD, TileCheck_Result *))(**(_DWORD **)*v14 + 60))(*(_DWORD *)*v14, &a2);
      (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)*v14 + 68))(*(_DWORD *)*v14, &dword_60B3B98C);
      sub_604218E0(*v14);
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v14 + 52))(*(_DWORD *)*v14);
      if ( (unsigned int)FIELD_S8(a1, 6976) <= 3 )
      {
        if ( FIELD_U8(a1, 6519) )
        {
          sub_60959C28(a1 + 6520, 1784 * FIELD_S8(a1, 6976) + dword_60CC6D78 + 102208, 0);
          sub_6091872C(*(_DWORD *)(*(_DWORD *)*v14 + 76), 1, a1 + 6528);
        }
      }
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v14 + 56))(*(_DWORD *)*v14);
      return 1;
    }
  }
  return result;
}
