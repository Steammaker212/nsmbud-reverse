/* SE_OBJ_BOSS_KK_THUNDER_ref_33F90
 * address: 0x60033F90   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_BOSS_KK_THUNDER_ref_33F90(int a1)
{
  _BOOL4 v2; // r0
  float v3; // t1
  ActiveColliderMgr *v4; // r7
  ActiveColliderMgr *v5; // r7
  int *v6; // r1
  Vec3 v8; // [sp+18h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 20) != 0;
  FIELD_U32(a1, 6900) = v2;
  FIELD_U8(a1, 6905) = v2;
  v3 = FIELD_F32(a1, 0x6C);
  v8.y = FIELD_F32(a1, 112);
  v8.x = v3;
  v8.z = 4500.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 6488), 35, &v8, 0, 0);
  FIELD_U32(a1, 116) = 1153138688;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC272C, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6592), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC2758, a1 + 6104);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6592))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6592)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6592));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF51F8, 0, &stru_60AF5204);
  FIELD_U8(a1, 6904) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 3196) |= 4u;
  FIELD_U32(a1, 3180) |= 4u;
  FIELD_U32(a1, 3188) |= 4u;
  FIELD_U32(a1, 3204) |= 4u;
  FIELD_U32(a1, 136) = -1054867456;
  LightSource_update1((LightSource *)(a1 + 6416), 35, (Vec3 *)(a1 + 0x6C), 0, 0, 0, 0, 0, 0);
  if ( FIELD_U32(a1, 6900) )
    v6 = (int *)&unk_60C7FD58;
  else
    v6 = &dword_60C7FD18;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v6);
  sub_60813430(a1 + 6108, "SE_OBJ_BOSS_KK_THUNDER", 0);
  return 1;
}
