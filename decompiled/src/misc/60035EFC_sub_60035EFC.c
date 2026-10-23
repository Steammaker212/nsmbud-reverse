/* sub_60035EFC
 * address: 0x60035EFC   size: 1172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60035EFC(int a1)
{
  _DWORD *v2; // r7
  int result; // r0
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r1
  _DWORD *v9; // r0
  int v10; // r5
  int *v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  unsigned int v17; // r0
  _DWORD *v18; // r0
  int v19; // r6
  _DWORD *v20; // r1
  unsigned int v21; // r2
  unsigned int v22; // r0
  int v23; // r1
  int v24; // r5
  int v25; // r1
  unsigned int v26; // r0
  Vec2 out; // [sp+4h] [bp-54h] BYREF
  ActorBuildInfo position; // [sp+Ch] [bp-4Ch] BYREF

  v2 = (_DWORD *)(a1 + 7772);
  result = FIELD_U32(a1, 7772) - 1;
  switch ( result )
  {
    case 0:
      v4 = *(_DWORD **)(a1 + 7100);
      v5 = v4[3];
      v6 = v4[2];
      v7 = v4[17];
      if ( v6 > v7 )
        v5 += 4 * v7;
      if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x30) != 0 )
      {
        FIELD_U16(a1, 6278) = 20;
        *v2 = 2;
        FIELD_U32(a1, 7644) = FIELD_U32(a1, 7648);
      }
      goto LABEL_27;
    case 1:
      if ( !FIELD_U16(a1, 6278) )
      {
        v8 = FIELD_U32(a1, 7096);
        v10 = a1 + 7100;
        v9 = *(_DWORD **)(a1 + 7100);
        position.settings1 = (int)&sead__SafeStringBase__vtable;
        position.settings2 = (int)"jcb_throw_enemy2_ed";
        sub_60421938(v9, v8, (int)&position);
        v11 = *(int **)(FIELD_U32(a1, 7100) + 12);
        v12 = *(_DWORD *)(FIELD_U32(a1, 7100) + 68);
        if ( *(_DWORD *)(FIELD_U32(a1, 7100) + 8) > v12 )
          v11 += v12;
        v13 = *v11;
        FIELD_U32(v13, 20) = 0;
        FIELD_U32(v13, 28) |= 2u;
        v14 = *(_DWORD *)(*(_DWORD *)v10 + 12);
        v15 = *(_DWORD *)(*(_DWORD *)v10 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v15 )
          v14 += 4 * v15;
        *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
        v16 = *(_DWORD *)(*(_DWORD *)v10 + 12);
        v17 = *(_DWORD *)(*(_DWORD *)v10 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v17 )
          v16 += 4 * v17;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v16 + 4), 0);
        FIELD_U16(a1, 6278) = 60;
        *v2 = 3;
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) )
        {
          memset(&position.settings2, 0, 40);
          position.settings1 = 1342177280;
          position.profile = Profile__get(0x209u);
          position.parentId = FIELD_U32(a1, 8);
          position.position = *(Vec3 *)(a1 + 108);
          position.field_1C = FIELD_U32(a1, 160);
          position.field_20 = 0;
          ActorMgr__create((void *)ActorMgr__instance, &position, 0);
          memset(&position.settings2, 0, 40);
          position.settings1 = 1343225856;
          position.profile = Profile__get(0x209u);
          position.parentId = FIELD_U32(a1, 8);
          position.position = *(Vec3 *)(a1 + 108);
          position.field_1C = FIELD_U32(a1, 160);
          position.field_20 = 0;
          ActorMgr__create((void *)ActorMgr__instance, &position, 0);
          memset(&position.settings2, 0, 40);
          position.settings1 = 1344274432;
        }
        else
        {
          memset(&position.settings2, 0, 40);
          position.settings1 = 1342177280;
          position.profile = Profile__get(0x209u);
          position.parentId = FIELD_U32(a1, 8);
          position.position = *(Vec3 *)(a1 + 108);
          position.field_1C = FIELD_U32(a1, 160);
          position.field_20 = 0;
          ActorMgr__create((void *)ActorMgr__instance, &position, 0);
          memset(&position.settings2, 0, 40);
          position.settings1 = 1343225856;
        }
        position.profile = Profile__get(0x209u);
        position.parentId = FIELD_U32(a1, 8);
        position.position = *(Vec3 *)(a1 + 108);
        position.field_1C = FIELD_U32(a1, 160);
        position.field_20 = 0;
        ActorMgr__create((void *)ActorMgr__instance, &position, 0);
      }
      goto LABEL_27;
    case 2:
      v19 = a1 + 7100;
      v18 = *(_DWORD **)(a1 + 7100);
      v20 = (_DWORD *)v18[3];
      v21 = v18[2];
      v22 = v18[17];
      if ( v21 > v22 )
        v20 += v22;
      if ( sub_60418548(*v20 + 4) )
      {
        FIELD_U8(a1, 7786) = 1;
        sub_60813430(a1 + 6332, "SE_VOC_JR_BOMB_THROW", 0);
        v23 = FIELD_U32(a1, 112);
        v24 = Global_BasicSoundActor1;
        position.settings1 = FIELD_U32(a1, 108);
        position.settings2 = v23;
        mapPositionToScreen(&out, (Vec3 *)&position);
        BasicSoundActor1_playSound(v24, "SE_BOSS_JR_BOMB_THROW", (int)&out, 0);
      }
      v25 = *(_DWORD *)(*(_DWORD *)v19 + 12);
      v26 = *(_DWORD *)(*(_DWORD *)v19 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v19 + 8) > v26 )
        v25 += 4 * v26;
      if ( (*(_BYTE *)(*(_DWORD *)v25 + 28) & 0x30) != 0 )
      {
        sub_60037BB0(a1, 0, 1, 0.0, 1.0);
        *v2 = 4;
      }
      goto LABEL_27;
    case 3:
      if ( !FIELD_U16(a1, 6278) )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7FE3C);
LABEL_27:
      FIELD_U32(a1, 7648) = *(_DWORD *)(FIELD_U32(a1, 7244) + 160);
      position.settings1 = 50331648;
      result = moveValueTo((int *)(a1 + 7644), (int *)(a1 + 7648), &position.settings1);
      break;
    default:
      return result;
  }
  return result;
}
