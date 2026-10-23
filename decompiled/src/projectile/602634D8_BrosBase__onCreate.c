/* BrosBase__onCreate
 * address: 0x602634D8   size: 848   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
signed int __fastcall BrosBase__onCreate(int a1)
{
  signed int v2; // r0
  ActiveColliderMgr *v3; // r7
  ActiveColliderMgr *v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // s2
  int (**v9)(); // [sp+8h] [bp-28h] BYREF
  const char *v10; // [sp+Ch] [bp-24h]

  sub_60263858();
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U8(a1, 6604) = v2;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v2];
  FIELD_U32(a1, 6148) = 2;
  FIELD_U32(a1, 620) = a1 + 6720;
  FIELD_U32(a1, 6736) = 0;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0x41800000;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFD9D8, &stru_60AFD9E4, &stru_60AFD9F0);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDBC00, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 12124), (StageActor *)a1, &stru_60AFD9AC, a1 + 12428);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 12124))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 12124)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 12124));
  }
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0x41600000;
  FIELD_U32(a1, 500) = 0x41800000;
  FIELD_U32(a1, 504) = 0x42200000;
  v5 = **(_DWORD **)(FIELD_U32(a1, 6300) + 20);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "bros";
  v6 = LoadResource(ResourceMgrRelated_instance, &v9);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "bros";
  TexAnim_play(v5, v6, &v9);
  FIELD_F32(v5, 20) = (float)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1);
  FIELD_U32(v5, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), 0);
  FIELD_U32(v5, 24) = 0;
  Animation_update(v5);
  FIELD_U32(a1, 6292) = 2;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 792))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 788))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 784))(a1);
  FIELD_U32(a1, 6576) = 0x41800000;
  FIELD_U32(a1, 6580) = 0x41800000;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  FIELD_U32(a1, 6592) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6596) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6600) = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 756))(a1);
  FIELD_S32(a1, 6548) >>= 1;
  (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BroBase_StateID_Attack);
  sub_60263968((Enemy *)a1);
  FIELD_U32(a1, 6244) = 1;
  FIELD_U32(a1, 116) = 1153138688;
  FIELD_F64(a1, 12436) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 12432))(a1 + 12432);
  FIELD_U32(a1, 12444) = v7;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 816))(a1);
  return 1;
}
