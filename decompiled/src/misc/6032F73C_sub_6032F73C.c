/* sub_6032F73C
 * address: 0x6032F73C   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032F73C(int a1)
{
  int v2; // s2
  signed int v3; // r0
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  int v6; // r6
  int v7; // r0
  _BYTE *v8; // r0
  ActorBuildInfo v10; // [sp+4h] [bp-44h] BYREF

  FIELD_F64(a1, 7072) = ((double (*)(void))**(_DWORD **)(a1 + 7068))();
  FIELD_U32(a1, 7080) = v2;
  sub_6032FA20(a1);
  FIELD_U32(a1, 144) = 1067869798;
  FIELD_U32(a1, 148) = 1067869798;
  FIELD_U32(a1, 152) = 1067869798;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  FIELD_U32(a1, 500) = 0;
  FIELD_U32(a1, 504) = 0;
  v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v3;
  FIELD_U32(a1, 160) = dword_60AF20A0[v3];
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 20) & 1;
  FIELD_U8(a1, 6316) = 0;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFF944, &stru_60AFF950, 0);
  FIELD_U32(a1, 3192) |= 0x800u;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEC544, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6760), (StageActor *)a1, &stru_60AFF918, a1 + 7064);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6760))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6760)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6760));
  }
  FIELD_U32(a1, 620) = a1 + 6688;
  FIELD_U32(a1, 6704) = 3;
  FIELD_U32(a1, 6752) = 1;
  FIELD_U32(a1, 624) = a1 + 6724;
  sub_6032FB2C(a1);
  v6 = FIELD_U32(a1, 6364);
  memset(&v10.settings2, 0, 40);
  v7 = 48;
  if ( !v6 )
    v7 = 16;
  v10.settings1 = v7;
  v10.parentId = 0;
  v10.profile = Profile__get(0x314u);
  v10.position = *(Vec3 *)(a1 + 108);
  v10.field_1C = FIELD_U32(a1, 160);
  v10.field_20 = 0;
  v8 = ActorMgr__create((void *)ActorMgr__instance, &v10, 0);
  *((_DWORD *)v8 + 4136) = FIELD_U32(a1, 8);
  FIELD_U32(a1, 7108) = *((_DWORD *)v8 + 2);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93E00);
  EffectData_setEffectId((EffectData *)(a1 + 6592), 693);
  EffectData_setEffectId((EffectData *)(a1 + 6384), 691);
  return 1;
}
