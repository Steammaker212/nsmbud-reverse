/* SE_BOSS_JR_BLOCK_APPEAR_ref
 * address: 0x606339A4   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_BLOCK_APPEAR_ref(int a1)
{
  int *v2; // r5
  int result; // r0
  int *v4; // r6
  ActiveCollider *v5; // r4
  ActiveColliderMgr *v6; // r5
  float *v7; // r4
  int v8; // t1
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r5
  float v13; // r0
  int v14; // r4
  int v15; // t1
  int v16; // r8
  int v17; // r5
  int v18; // r0
  Vec2 v19; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = (int *)(a1 + 6776);
  ++FIELD_U32(a1, 6776);
  v4 = (int *)(a1 + 6788);
  result = FIELD_U32(a1, 6788);
  switch ( result )
  {
    case 3:
      if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 4, 4.0) == 1 )
      {
        ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
        v5 = (ActiveCollider *)(a1 + 188);
        v6 = ActiveColliderMgr_instance;
        result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v5);
        if ( !result )
        {
          result = ActiveColliderMgr_isInCreateList(v6, v5);
          if ( !result )
            return (int)ActiveColliderMgr_addToCreateList(v6, v5);
        }
      }
      else
      {
        result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 28);
        if ( (result & 0x10) != 0 )
          return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB4404);
      }
      break;
    case 2:
      if ( sub_60634E38() == 1 )
      {
        *v2 = 300;
      }
      else
      {
        result = *v2;
        if ( *v2 < 300 )
          return result;
      }
      v8 = FIELD_U32(a1, 6104);
      v7 = (float *)(a1 + 6104);
      v9 = *((_DWORD *)v7 - 1);
      v10 = **(_DWORD **)(v8 + 12);
      LODWORD(position.x) = &sead__SafeStringBase__vtable;
      LODWORD(position.y) = "appear";
      SkeletalAnim_play(v10, v9, (const char **)&position);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v7 + 12) + 4), 0);
      v11 = **(_DWORD **)(*(_DWORD *)v7 + 12);
      FIELD_U32(v11, 20) = 0;
      FIELD_U32(v11, 28) |= 2u;
      *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v7 + 12) + 24) = 1065353216;
      v12 = Global_BasicSoundActor2;
      v13 = *(v7 - 1498);
      position.x = *(v7 - 1499);
      position.y = v13;
      mapPositionToScreen(&v19, &position);
      BasicSoundActor2_play(v12, "SE_BOSS_JR_BLOCK_APPEAR", &v19.x, 0);
      *((_DWORD *)v7 + 172) = 1;
      result = 3;
LABEL_17:
      *v4 = result;
      return result;
    case 1:
      if ( sub_60634E38() )
      {
        result = 300;
        *v2 = 300;
        *v4 = 2;
      }
      else
      {
        result = *v2;
      }
      if ( result >= FIELD_U32(a1, 6780) )
      {
        v15 = FIELD_U32(a1, 6112);
        v14 = a1 + 6112;
        v16 = *(_DWORD *)(v14 - 12);
        v17 = **(_DWORD **)(v15 + 12);
        (*(void (__fastcall **)(int *))(dword_60CB447C + 12))(&dword_60CB447C);
        LODWORD(position.x) = &sead__SafeStringBase__vtable;
        LODWORD(position.y) = dword_60CB4480;
        SkeletalAnim_play(v17, v16, (const char **)&position);
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v14 + 12) + 4), 0);
        v18 = **(_DWORD **)(*(_DWORD *)v14 + 12);
        FIELD_U32(v18, 20) = 0;
        FIELD_U32(v18, 28) |= 2u;
        *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v14 + 12) + 24) = 1065353216;
        result = 2;
        goto LABEL_17;
      }
      break;
  }
  return result;
}
