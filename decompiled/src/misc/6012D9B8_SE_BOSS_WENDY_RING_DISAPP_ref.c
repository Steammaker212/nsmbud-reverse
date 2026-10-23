/* SE_BOSS_WENDY_RING_DISAPP_ref
 * address: 0x6012D9B8   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_WENDY_RING_DISAPP_ref(int a1)
{
  unsigned int v2; // r0
  int v3; // s8
  float *v4; // r1
  int v5; // r0
  float v6; // s8
  float v7; // s2
  float v8; // s0
  int v9; // r1
  ActiveColliderMgr *v10; // r6
  ActiveColliderMgr *v11; // r6
  int result; // r0
  float v13; // r1
  float v14; // s0
  int v15; // r5
  Vec3 v16; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  FIELD_U32(a1, 144) = 1036831949;
  FIELD_U32(a1, 148) = 1036831949;
  FIELD_U32(a1, 152) = 1036831949;
  v2 = (int)(float)((float)(2147500000.0 * 45.0) / 180.0);
  v3 = v2 & 0xFFFFFF;
  v4 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v5 = 0;
  v6 = (float)(unsigned int)v3;
  v7 = *v4 + (float)((float)(v6 * v4[1]) * 0.000000059605);
  v8 = (float)(v4[2] + (float)((float)(v4[3] * v6) * 0.000000059605)) * 1.5;
  FIELD_F32(a1, 120) = v8;
  FIELD_F32(a1, 124) = v7 * 1.5;
  FIELD_U32(a1, 128) = 0;
  v9 = FIELD_U32(a1, 11472);
  if ( v9 )
  {
    if ( v9 != 1 )
    {
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 1069547520;
      FIELD_U32(a1, 128) = 0;
      goto LABEL_6;
    }
    v5 = 1;
    FIELD_F32(a1, 120) = -v8;
  }
  FIELD_U32(a1, 80) = v5;
LABEL_6:
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD1CDC, 0);
  v10 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 11476), (StageActor *)a1, &stru_60AF64E0, a1 + 11780);
  v11 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 11476))
    && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(a1 + 11476)) )
  {
    ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(a1 + 11476));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 6112), (StateActor *)a1, &stru_60AF650C, &stru_60AF6518, &stru_60AF6524);
  CollisionMgr_process((_BYTE *)(a1 + 6112));
  result = FIELD_U32(a1, 8336);
  if ( (result & 1) != 0
    || (result & 0x10400) == 0x400
    || (result & 0x440000) != 0 && (result & 0x10000000) == 0
    || (result & 0x880000) != 0 && (result &= 0x20000000u) == 0 )
  {
    v13 = FIELD_F32(a1, 112);
    v16.x = FIELD_F32(a1, 108);
    v16.y = v13;
    v16.z = 4500.0;
    EffectData_create(794, &v16, 0, 0);
    v14 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v15 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    position.y = v14;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v15, "SE_BOSS_WENDY_RING_DISAPP", &out.x, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
