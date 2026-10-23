/* sub_602BA73C
 * address: 0x602BA73C   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BA73C(int a1)
{
  int v2; // r0
  _BOOL4 v3; // r0
  char v4; // r0
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r6
  int v7; // s2
  int v9; // [sp+4h] [bp-1Ch] BYREF
  Vec2 out; // [sp+8h] [bp-18h] BYREF

  FIELD_F32(a1, 116) = (float)((float)(FIELD_U32(a1, 20) & 0xF) * 100.0) + 1500.0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 632))(a1);
  v2 = (FIELD_U32(a1, 20) >> 8) & 3;
  FIELD_U32(a1, 6304) = v2;
  if ( v2 == 2 )
  {
    v3 = 1;
  }
  else if ( v2 == 1 )
  {
    v3 = 0;
  }
  else
  {
    FIELD_U8(a1, 84) = StageActor__distanceToPlayer((StateActor *)a1, &out);
    v3 = out.x < 0.0;
  }
  FIELD_U32(a1, 80) = v3;
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1094713344;
  FIELD_U32(a1, 580) = 0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFE6D4, &stru_60AFE6E0, &stru_60AFE6EC);
  FIELD_U8(a1, 6360) = FIELD_U32(a1, 2872) & 1;
  ((void (__fastcall *)(int *, _DWORD, int, _DWORD))checkLiquidCollisions)(
    &v9,
    0,
    a1 + 108,
    FIELD_U8(a1, 86));
  v4 = v9;
  if ( v9 )
    v4 = 1;
  FIELD_U8(a1, 6361) = v4;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE4684, 0);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6660), (StageActor *)a1, &stru_60AFE6F8, a1 + 6964);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6660))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 6660)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 6660));
  }
  FIELD_F64(a1, 6632) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6628))(a1 + 6628);
  FIELD_U32(a1, 6640) = v7;
  FIELD_U32(a1, 6380) = 3;
  FIELD_U32(a1, 620) = a1 + 6364;
  FIELD_U32(a1, 6428) = 1;
  FIELD_U32(a1, 624) = a1 + 6400;
  FIELD_U32(a1, 6244) = 1;
  FIELD_U32(a1, 6260) = -1065353216;
  FIELD_U8(a1, 6308) = (FIELD_U32(a1, 20) & 0x10) == 0;
  sub_60003C60(a1, (int)&stru_60AFE6D4, 48.0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
  return 1;
}
