/* SE_EMY_CHOROPU_APP_ref
 * address: 0x60279884   size: 1044   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_CHOROPU_APP_ref(int a1, float a2)
{
  int result; // r0
  float v4; // s0
  int v5; // r0
  bool v6; // cc
  float v7; // s0
  float v8; // s2
  int v9; // r1
  int v10; // r5
  int *v11; // r6
  char v12; // r12
  int v13; // r7
  float v14; // s0
  float v15; // s2
  ActiveColliderMgr *v16; // r5
  int v17; // r0
  ActiveColliderMgr *v18; // r5
  _BYTE position[44]; // [sp+20h] [bp-70h] BYREF
  Vec3 v20; // [sp+4Ch] [bp-44h] BYREF
  Vec3 v21; // [sp+58h] [bp-38h] BYREF
  Vec2 out; // [sp+64h] [bp-2Ch] BYREF

  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  result = FIELD_U32(a1, 8552);
  if ( result == 2 )
  {
    v17 = FIELD_U32(a1, 8548);
    v6 = v17 <= 1;
    result = v17 - 1;
    FIELD_U32(a1, 8548) = result;
    if ( v6 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EE78);
  }
  else if ( result == 1 )
  {
    if ( (FIELD_U8(a1, 20) & 1) != 0 )
    {
      v18 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v18, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v18, (ActiveCollider *)(a1 + 188));
      }
      FIELD_U32(a1, 8544) = 0;
      FIELD_U32(a1, 8548) = 0;
    }
    else
    {
      v4 = FIELD_F32(a1, 112);
      v21.x = FIELD_F32(a1, 108);
      v21.y = v4 + 8.0;
      v21.z = 2200.0;
      EffectWrapper_update((EffectWrapper *)(a1 + 8588), 108, &v21, 0, 0);
      v5 = FIELD_U32(a1, 8548);
      v6 = v5 <= 1;
      result = v5 - 1;
      FIELD_U32(a1, 8548) = result;
      if ( !v6 )
        return result;
      v7 = FIELD_F32(a1, 576);
      v8 = FIELD_F32(a1, 112);
      v20.x = FIELD_F32(a1, 108);
      v20.y = v8 + v7;
      v20.z = 2200.0;
      EffectData_create(33, &v20, 0, 0);
      v9 = FIELD_U32(a1, 112);
      v10 = Global_BasicSoundActor1;
      *(_DWORD *)position = FIELD_U32(a1, 108);
      *(_DWORD *)&position[4] = v9;
      mapPositionToScreen(&out, (Vec3 *)position);
      BasicSoundActor1_playSound(v10, "SE_EMY_CHOROPU_APP", (int)&out, 0);
      v11 = (int *)sub_60008598(ActorMgr__instance, 612, *(_DWORD *)(ActorMgr__instance + 27172));
      if ( v11 == *(int **)(ActorMgr__instance + 27180) )
      {
LABEL_16:
        v14 = FIELD_F32(a1, 576);
        v15 = FIELD_F32(a1, 112);
        FIELD_U32(a1, 8832) = FIELD_U32(a1, 108);
        FIELD_F32(a1, 8836) = v15 + v14;
        FIELD_U32(a1, 8840) = 981668463;
        memset(position, 0, sizeof(position));
        *(_DWORD *)&position[12] = Profile__get(0x264u);
        *(_DWORD *)&position[16] = FIELD_U32(a1, 8832);
        *(_DWORD *)&position[20] = FIELD_U32(a1, 8836);
        *(_DWORD *)&position[24] = FIELD_U32(a1, 8840);
        *(_DWORD *)&position[28] = FIELD_U32(a1, 160);
        position[32] = 0;
        sub_600080BC((_DWORD *)ActorMgr__instance, position);
      }
      else
      {
        while ( 1 )
        {
          v13 = *v11;
          if ( *v11 && !FIELD_U8(v13, 19) )
          {
            if ( ((unsigned int)&dword_60C7B364 & ~(1613208152 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
            {
              StageActor_RTTI = (int)&off_60BC0098;
              _cxa_guard_release(&dword_60C7B364);
            }
            if ( (**(int (__fastcall ***)(int, int *))v13)(v13, &StageActor_RTTI) == 1
              && FIELD_F32(v13, 108) == FIELD_F32(a1, 108)
              && FIELD_F32(v13, 112) == (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 576)) )
            {
              break;
            }
          }
          v11 = (int *)sub_60008598(ActorMgr__instance, 612, (int)(v11 + 1));
          if ( v11 == *(int **)(ActorMgr__instance + 27180) )
            goto LABEL_16;
        }
      }
      v16 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
        && !ActiveColliderMgr_isInCreateList(v16, (ActiveCollider *)(a1 + 188)) )
      {
        ActiveColliderMgr_addToCreateList(v16, (ActiveCollider *)(a1 + 188));
      }
      FIELD_U32(a1, 8544) = 0;
      FIELD_U32(a1, 8548) = 0;
    }
    FIELD_U32(a1, 8552) = 2;
    return 2;
  }
  return result;
}
