/* sub_6013084C
 * address: 0x6013084C   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6013084C(int a1)
{
  int v2; // s2
  int v3; // r1
  int v4; // r0
  ActiveColliderMgr *v5; // r7
  ActiveColliderMgr *v6; // r7
  int v8; // [sp+18h] [bp-20h] BYREF
  char v9; // [sp+1Ch] [bp-1Ch] BYREF

  woogan_ref(a1);
  FIELD_U32(a1, 144) = 1070386381;
  FIELD_U32(a1, 148) = 1070386381;
  FIELD_U32(a1, 152) = 1070386381;
  FIELD_U32(a1, 6280) = 1070386381;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1111490560;
  FIELD_U32(a1, 580) = 0;
  FIELD_F64(a1, 6252) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6248))(a1 + 6248);
  FIELD_U32(a1, 6260) = v2;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -72.0;
  ((void (__fastcall *)(char *, int, int, _DWORD))checkLiquidCollisions)(
    &v9,
    a1 + 6224,
    a1 + 108,
    FIELD_U8(a1, 86));
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, &stru_60AF6530, &stru_60AF653C);
  v3 = FIELD_U32(a1, 3184);
  v4 = FIELD_U32(a1, 3176) | 0x50000800;
  FIELD_U32(a1, 3192) |= 0x50000800u;
  FIELD_U32(a1, 3176) = v4;
  FIELD_U32(a1, 3184) = v3 | 0x50000800;
  ActiveCollider__init((ActiveCollider *)(a1 + 6284), (StageActor *)a1, &stru_60AF6548, a1 + 6588);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6284))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6284)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6284));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD1E24, 0);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 508) = 1123811328;
  FIELD_U32(a1, 512) = 1123811328;
  v8 = 1065353216;
  LightSource_update1((LightSource *)(a1 + 6596), 36, (Vec3 *)(a1 + 108), 0, (float *)&v8, 0, 0, 0, 0);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C87490);
  sub_60130BE0(a1);
  return 1;
}
