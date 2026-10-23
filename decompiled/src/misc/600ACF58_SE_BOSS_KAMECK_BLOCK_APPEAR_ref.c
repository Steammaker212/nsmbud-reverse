/* SE_BOSS_KAMECK_BLOCK_APPEAR_ref
 * address: 0x600ACF58   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_KAMECK_BLOCK_APPEAR_ref(int a1)
{
  int v2; // r0
  unsigned int v3; // r0
  ActiveColliderMgr *v4; // r5
  ActiveColliderMgr *v5; // r6
  float v6; // r1
  Actor **v7; // r6
  Actor **v8; // r7
  Actor *v9; // r5
  float v10; // r1
  int v11; // r5
  const char *v12; // r1
  float v14; // r1
  Vec3 v15; // [sp+4h] [bp-3Ch] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF
  Vec3 position; // [sp+18h] [bp-28h] BYREF

  FIELD_U8(a1, 6108) = 1;
  v2 = FIELD_U32(a1, 7076);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 7072);
  FIELD_U32(a1, 112) = v2;
  v3 = (int)(float)((float)(2147500000.0
                          * (float)((float)((float)(COERCE_FLOAT(
                                                      (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9)
                                                    | 0x3F800000)
                                                  + -1.0)
                                          * 360.0)
                                  + 0.0))
                  / 180.0);
  FIELD_U32(a1, 7100) = v3;
  FIELD_U32(a1, 7104) = 1069547520;
  FIELD_F32(a1, 7108) = (float)((float)(*(float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0))
                                        + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v3 >> 20) & 0xFF0))
                                                        * (float)(v3 & 0xFFFFFF))
                                                * 0.000000059605))
                                + 1.0)
                        * 1.5;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6768))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6768)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6768));
  }
  FIELD_U32(a1, 7236) = 1098907648;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  sub_600AEF50(a1);
  FIELD_U8(a1, 7112) = 1;
  v6 = FIELD_F32(a1, 112);
  v15.x = FIELD_F32(a1, 108);
  v15.y = v6;
  v15.z = 4500.0;
  sub_602375C4((EffectData *)(a1 + 7424), 1054, &v15, 0, 0);
  v7 = *(Actor ***)(ActorMgr__instance + 27172);
  v8 = *(Actor ***)(ActorMgr__instance + 27180);
  if ( v7 == v8 )
  {
LABEL_13:
    v10 = FIELD_F32(a1, 112);
    v11 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v10;
    mapPositionToScreen(&out, &position);
    v12 = "SE_BOSS_KAMECK_BLOCK_APPEAR_LAST";
  }
  else
  {
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        if ( Actor__getProfileId(*v7) == 368 && FIELD_U32(v9, 0x8) != FIELD_U32(a1, 8) && !v9[76].movementId )
          break;
      }
      if ( v8 == ++v7 )
        goto LABEL_13;
    }
    v14 = FIELD_F32(a1, 112);
    v11 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v14;
    mapPositionToScreen(&out, &position);
    v12 = "SE_BOSS_KAMECK_BLOCK_APPEAR";
  }
  return BasicSoundActor1_playSound(v11, v12, (int)&out, 0);
}
