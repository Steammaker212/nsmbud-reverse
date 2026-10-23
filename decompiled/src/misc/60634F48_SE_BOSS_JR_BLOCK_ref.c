/* SE_BOSS_JR_BLOCK_ref
 * address: 0x60634F48   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_BLOCK_ref(int a1)
{
  int v2; // r0
  int *v3; // r7
  int v4; // r5
  int v5; // r4
  float v6; // t1
  float v7; // r1
  ActiveColliderMgr *v8; // r5
  int v9; // r5
  float v10; // t1
  float v11; // r1
  float v12; // r1
  int v13; // r0
  Vec3 v15; // [sp+0h] [bp-30h] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  v3 = (int *)(a1 + 6784);
  v2 = FIELD_U32(a1, 6784);
  *v3 = v2 + 1;
  if ( v2 < 1 )
  {
    FIELD_U8(a1, 6797) = 1;
    v9 = Global_BasicSoundActor2;
    v10 = FIELD_F32(a1, 108);
    v5 = a1 + 108;
    v11 = FIELD_F32(v5, 4);
    v15.x = v10;
    v15.y = v11;
    mapPositionToScreen(&out, &v15);
    BasicSoundActor2_play(v9, "SE_BOSS_JR_BLOCK_HIBI", &out.x, 0);
  }
  else
  {
    v4 = Global_BasicSoundActor2;
    v6 = FIELD_F32(a1, 108);
    v5 = a1 + 108;
    v7 = FIELD_F32(v5, 4);
    v15.x = v6;
    v15.y = v7;
    mapPositionToScreen(&out, &v15);
    BasicSoundActor2_play(v4, "SE_BOSS_JR_BLOCK_BREAK", &out.x, 0);
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v5 + 6012));
    v8 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v5 + 80));
    ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(v5 + 80));
    ActiveColldierMgr_removeFromList3(v8, v5 + 80);
    StateMgr__changeState((StateMgr *)(v5 + 5976), (StateBase *)&dword_60CB43C4);
  }
  v12 = FIELD_F32(v5, 4);
  v15.x = *(float *)v5;
  v15.y = v12;
  v15.z = 4500.0;
  if ( *v3 >= 2 )
    v13 = 1079;
  else
    v13 = 1078;
  return EffectData_create(v13, &v15, 0, 0);
}
