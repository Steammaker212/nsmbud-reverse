/* SE_EMY_BH_BOMB_ref
 * address: 0x6025AD84   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BH_BOMB_ref(int a1)
{
  float v2; // r5
  float v3; // r1
  int v4; // r5
  ActiveColliderMgr *v5; // r6
  float v6; // s0
  float v7; // s2
  float v8; // s0
  float v9; // s0
  float v10; // s2
  Vec3 v12; // [sp+4h] [bp-44h] BYREF
  Vec2 out; // [sp+10h] [bp-38h] BYREF
  Vec3 position; // [sp+18h] [bp-30h] BYREF

  FIELD_U16(a1, 6364) = FIELD_U16(a1, 6364) & 0xFFF2 | 9;
  v2 = FIELD_F32(a1, 6476);
  v12.x = FIELD_F32(a1, 6472);
  v12.y = v2;
  v12.z = sub_600024C4(a1);
  EffectData_create(13, &v12, 0, 0);
  v3 = FIELD_F32(a1, 112);
  v4 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&out, &position);
  BasicSoundActor1_playSound(v4, "SE_EMY_BH_BOMB", (int)&out, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDB1E4, 0);
  if ( FIELD_U8(a1, 7060) )
  {
    v5 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6756))
      && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6756)) )
    {
      ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6756));
    }
  }
  FIELD_U32(a1, 6456) = -1;
  FIELD_U32(a1, 6460) = 0;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[FIELD_U32(a1, 80)];
  v6 = FIELD_F32(a1, 576) + FIELD_F32(a1, 112);
  FIELD_F32(a1, 112) = v6;
  v7 = FIELD_F32(a1, 108);
  v12.x = v7 + -16.0;
  position.x = v7 + 16.0;
  v12.y = v6 + 16.0;
  position.y = v6 + -16.0;
  ((void (__fastcall *)(int, Vec3 *, Vec3 *))loc_60151A7C)(a1 + 648, &v12, &position);
  v8 = FIELD_F32(a1, 112);
  v12.x = FIELD_F32(a1, 108);
  position.x = v12.x + 0.0;
  v12.y = (float)(v8 + 16.0) + 11.0;
  position.y = (float)(v8 + -16.0) + -11.0;
  ((void (__fastcall *)(int, Vec3 *, Vec3 *))loc_60151A7C)(a1 + 648, &v12, &position);
  v9 = FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 112);
  v12.x = (float)(v9 + -16.0) + -8.0;
  position.x = (float)(v9 + 16.0) + 8.0;
  v12.y = v10 + 8.0;
  position.y = v10 + -8.0;
  ((void (__fastcall *)(int, Vec3 *, Vec3 *))loc_60151A7C)(a1 + 648, &v12, &position);
  FIELD_U32(a1, 6488) = 1133903872;
  return 6488;
}
