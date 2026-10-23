/* sub_60035598
 * address: 0x60035598   size: 1992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60035598(int a1)
{
  int *v2; // r7
  _DWORD *v3; // r0
  int v4; // r5
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  int *v10; // r1
  unsigned int v11; // r0
  int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r6
  int *v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r0
  int v23; // r0
  int v24; // r1
  int *v25; // r1
  unsigned int v26; // r0
  int v27; // r0
  int v28; // r1
  unsigned int v29; // r0
  int v30; // r1
  unsigned int v31; // r0
  _DWORD *v32; // r0
  int v33; // r6
  _DWORD *v34; // r1
  unsigned int v35; // r2
  unsigned int v36; // r0
  int v37; // r1
  int v38; // r5
  int v39; // r1
  unsigned int v40; // r0
  __int16 v41; // r0
  _DWORD *v42; // r0
  int v43; // r1
  unsigned int v44; // r2
  unsigned int v45; // r0
  StateBase *v46; // r0
  int v47; // r5
  int v48; // r6
  _BOOL4 v49; // r0
  _DWORD *v50; // r6
  StateBase *v51; // r0
  int v52; // r5
  _BOOL4 v53; // r0
  StateBase *v54; // r0
  int v55; // r5
  int v56; // r6
  _BOOL4 v57; // r0
  StateBase *CurrentState; // r0
  int v59; // r5
  int result; // r0
  ActorBuildInfo position; // [sp+4h] [bp-4Ch] BYREF
  Vec2 out; // [sp+30h] [bp-20h] BYREF

  v2 = (int *)(a1 + 7772);
  switch ( FIELD_U32(a1, 7772) )
  {
    case 1:
      FIELD_U8(a1, 7785) = 0;
      position.settings1 = 0x2000000;
      if ( !moveValueTo((int *)(a1 + 7628), (int *)(a1 + 7632), &position.settings1) )
        goto LABEL_52;
      v4 = a1 + 7100;
      v3 = *(_DWORD **)(a1 + 7100);
      v5 = (int *)v3[3];
      v6 = v3[2];
      v7 = v3[17];
      if ( v6 > v7 )
        v5 += v7;
      v8 = *v5;
      v9 = FIELD_U32(a1, 7096);
      position.settings1 = (int)&sead__SafeStringBase__vtable;
      position.settings2 = (int)"jcb_throw_enemy_st";
      SkeletalAnim_play(v8, v9, (int)&position);
      v10 = *(int **)(*(_DWORD *)v4 + 12);
      v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
        v10 += v11;
      v12 = *v10;
      FIELD_U32(v12, 20) = 0;
      FIELD_U32(v12, 28) |= 2u;
      v13 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      v14 = *(_DWORD *)(*(_DWORD *)v4 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v14 )
        v13 += 4 * v14;
      *(_DWORD *)(*(_DWORD *)v13 + 24) = 1065353216;
      v15 = *(_DWORD *)(*(_DWORD *)v4 + 12);
      v16 = *(_DWORD *)(*(_DWORD *)v4 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v16 )
        v15 += 4 * v16;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), 0);
      sub_60813430(a1 + 6332, "SE_VOC_JR_PRE_ACTION", 0);
      v17 = 2;
      goto LABEL_22;
    case 2:
      v19 = a1 + 7100;
      v18 = *(_DWORD **)(a1 + 7100);
      v20 = (int *)v18[3];
      v21 = v18[2];
      v22 = v18[17];
      if ( v21 > v22 )
        v20 += v22;
      v23 = *v20;
      if ( (*(_BYTE *)(*v20 + 28) & 0x30) != 0 )
      {
        v24 = FIELD_U32(a1, 7096);
        position.settings1 = (int)&sead__SafeStringBase__vtable;
        position.settings2 = (int)"jcb_throw_enemy_ed";
        SkeletalAnim_play(v23, v24, (int)&position);
        v25 = *(int **)(*(_DWORD *)v19 + 12);
        v26 = *(_DWORD *)(*(_DWORD *)v19 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v19 + 8) > v26 )
          v25 += v26;
        v27 = *v25;
        FIELD_U32(v27, 20) = 0;
        FIELD_U32(v27, 28) |= 2u;
        v28 = *(_DWORD *)(*(_DWORD *)v19 + 12);
        v29 = *(_DWORD *)(*(_DWORD *)v19 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v19 + 8) > v29 )
          v28 += 4 * v29;
        *(_DWORD *)(*(_DWORD *)v28 + 24) = 1065353216;
        v30 = *(_DWORD *)(*(_DWORD *)v19 + 12);
        v31 = *(_DWORD *)(*(_DWORD *)v19 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v19 + 8) > v31 )
          v30 += 4 * v31;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v30 + 4), 0);
        memset(&position.settings2, 0, 40);
        position.settings1 = 0x40000000;
        position.profile = Profile__get(0x209u);
        position.parentId = FIELD_U32(a1, 8);
        position.position = *(Vec3 *)(a1 + 7748);
        position.field_1C = FIELD_U32(a1, 160);
        position.field_20 = 0;
        FIELD_U32(a1, 7796) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &position, 0) + 2);
        ++FIELD_U8(a1, 7781);
        v17 = 3;
LABEL_22:
        *v2 = v17;
      }
      goto LABEL_52;
    case 3:
      v33 = a1 + 7100;
      v32 = *(_DWORD **)(a1 + 7100);
      v34 = (_DWORD *)v32[3];
      v35 = v32[2];
      v36 = v32[17];
      if ( v35 > v36 )
        v34 += v36;
      if ( sub_60418548(*v34 + 4) )
      {
        FIELD_U8(a1, 7785) = 1;
        sub_60813430(a1 + 6332, "SE_VOC_JR_BOMB_THROW", 0);
        v37 = FIELD_U32(a1, 112);
        v38 = Global_BasicSoundActor1;
        position.settings1 = FIELD_U32(a1, 108);
        position.settings2 = v37;
        mapPositionToScreen(&out, (Vec3 *)&position);
        BasicSoundActor1_playSound(v38, "SE_BOSS_JR_BOMB_THROW", (int)&out, 0);
      }
      v39 = *(_DWORD *)(*(_DWORD *)v33 + 12);
      v40 = *(_DWORD *)(*(_DWORD *)v33 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v33 + 8) > v40 )
        v39 += 4 * v40;
      if ( (*(_BYTE *)(*(_DWORD *)v39 + 28) & 0x30) == 0 )
        goto LABEL_52;
      if ( FIELD_U8(a1, 7781) == FIELD_U8(a1, 7782) )
      {
        FIELD_U8(a1, 7781) = 0;
        *v2 = 5;
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) )
          v41 = 90;
        else
          v41 = 180;
        FIELD_U16(a1, 6278) = v41;
        goto LABEL_52;
      }
      CurrentState = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(a1, 7624) + 6084));
      v59 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v59 == (*(int (**)(void))(dword_60C80268 + 8))() )
      {
        sub_60037BB0(a1, 0, 1, 0.0, 1.0);
        *v2 = 4;
        FIELD_U16(a1, 6278) = FIELD_U32(a1, 7776);
LABEL_52:
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
LABEL_53:
        position.settings1 = FIELD_U32(a1, 7648) + FIELD_U32(a1, 7124);
        out.x = 2.351e-38;
        moveValueTo((int *)(a1 + 7644), &position.settings1, (int *)&out);
        FIELD_U32(a1, 7124) -= FIELD_U32(a1, 7644);
LABEL_54:
        result = a1 + 7792;
        FIELD_U32(a1, 7792) = FIELD_F32(a1, 7724) < 0.0;
        return result;
      }
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
      position.settings1 = 0;
      out.x = 2.351e-38;
      result = moveValueTo((int *)(a1 + 7644), &position.settings1, (int *)&out);
      FIELD_U32(a1, 7124) -= FIELD_U32(a1, 7644);
      if ( result == 1 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FE3C);
      return result;
    case 4:
      if ( !FIELD_U16(a1, 6278) )
      {
        v42 = *(_DWORD **)(a1 + 7100);
        v43 = v42[3];
        v44 = v42[2];
        v45 = v42[17];
        if ( v44 > v45 )
          v43 += 4 * v45;
        if ( (*(_BYTE *)(*(_DWORD *)v43 + 28) & 0xC) != 0 )
          *v2 = 1;
      }
      v46 = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(a1, 7624) + 6084));
      v47 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v46, 0x0) + 2))(v46);
      v48 = (*(int (**)(void))(dword_60C80268 + 8))();
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
      if ( v47 == v48 )
        goto LABEL_53;
      position.settings1 = 0;
      out.x = 2.351e-38;
      v49 = moveValueTo((int *)(a1 + 7644), &position.settings1, (int *)&out);
      FIELD_U32(a1, 7124) -= FIELD_U32(a1, 7644);
      if ( v49 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FE3C);
      goto LABEL_54;
    case 5:
      v50 = (_DWORD *)(a1 + 7624);
      if ( !FIELD_U16(a1, 6278) )
      {
        v51 = StateMgr__getCurrentState((StateMgr *)(*v50 + 6084));
        v52 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v51, 0x0) + 2))(v51);
        if ( v52 == (*(int (**)(void))(dword_60C80268 + 8))() )
          (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)*v50 + 192))(*v50, &dword_60C80288);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
        position.settings1 = 0;
        out.x = 2.351e-38;
        v53 = moveValueTo((int *)(a1 + 7644), &position.settings1, (int *)&out);
        FIELD_U32(a1, 7124) -= FIELD_U32(a1, 7644);
        if ( v53 )
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FE3C);
      }
      v54 = StateMgr__getCurrentState((StateMgr *)(*v50 + 6084));
      v55 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v54, 0x0) + 2))(v54);
      v56 = (*(int (**)(void))(dword_60C80268 + 8))();
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
      if ( v55 == v56 )
        goto LABEL_53;
      position.settings1 = 0;
      out.x = 2.351e-38;
      v57 = moveValueTo((int *)(a1 + 7644), &position.settings1, (int *)&out);
      FIELD_U32(a1, 7124) -= FIELD_U32(a1, 7644);
      if ( v57 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FE3C);
      goto LABEL_54;
    default:
      goto LABEL_54;
  }
}
