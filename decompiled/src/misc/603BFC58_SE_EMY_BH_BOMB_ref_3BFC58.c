/* SE_EMY_BH_BOMB_ref_3BFC58
 * address: 0x603BFC58   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_EMY_BH_BOMB_ref_3BFC58(int a1)
{
  float v2; // r1
  int v3; // r5
  float v4; // r1
  ActiveColliderMgr *v5; // r6
  Vec2 out; // [sp+14h] [bp-2Ch] BYREF
  Vec3 position; // [sp+1Ch] [bp-24h] BYREF

  FIELD_U8(a1, 535) = 0;
  FIELD_U8(a1, 536) = 1;
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v3, "SE_EMY_BH_BOMB", (int)&out, 0);
  v4 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  position.z = 4500.0;
  EffectData_create(15, &position, 0, 0);
  position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  position.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  position.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  LightSource_update1((LightSource *)(a1 + 6836), 30, &position, 0, 0, 0, 0, 0, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 6364), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF6448, 0);
  FIELD_U32(a1, 6488) = 1101004800;
  FIELD_U32(a1, 6492) = 1101004800;
  if ( FIELD_U8(dword_60CC6D8C, 17) && Actor__getProfileId((Actor *)a1) == 818 )
    FIELD_U32(a1, 6516) = 4096;
  FIELD_U32(a1, 6496) = 1;
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6364))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6364)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6364));
  }
  FIELD_U16(a1, 6278) = 16;
  return 6278;
}
