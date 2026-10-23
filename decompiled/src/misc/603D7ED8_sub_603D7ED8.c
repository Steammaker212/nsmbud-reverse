/* sub_603D7ED8
 * address: 0x603D7ED8   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D7ED8(int a1)
{
  signed int v2; // r0
  int v3; // s2
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  char v9; // r12
  unsigned __int8 v11[4]; // [sp+8h] [bp-20h] BYREF
  unsigned __int8 v12; // [sp+Ch] [bp-1Ch] BYREF

  wanwan_ref();
  sub_603D8418(a1);
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 160) = dword_60AF1EC0[v2];
  FIELD_U32(a1, 156) = -412876800;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 6244) = 0;
  FIELD_F32(a1, 11752) = FIELD_F32(a1, 108) + flt_60AF2138[FIELD_U32(a1, 20) & 1];
  FIELD_F32(a1, 11756) = FIELD_F32(a1, 112) + -12.0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1132462080;
  FIELD_U32(a1, 504) = 1132462080;
  FIELD_U32(a1, 508) = 1124073472;
  FIELD_U32(a1, 512) = 1124073472;
  FIELD_F64(a1, 18620) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 18616))(a1 + 18616);
  FIELD_U32(a1, 18628) = v3;
  v12 = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BF83C4, &v12, 0);
  FIELD_U32(a1, 312) = 1093664768;
  FIELD_U32(a1, 316) = 1093664768;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  v11[0] = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 18312), (StateActor *)a1, &stru_60B012C4, v11, 0);
  FIELD_U32(a1, 18424) = a1 + 18648;
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 18312))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 18312)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 18312));
  }
  FIELD_U8(a1, 11812) = 1;
  FIELD_U32(a1, 11848) = ((4095 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) & 7;
  FIELD_U32(a1, 11852) = 0;
  v6 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 11740) = v6;
  v7 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 11744) = v7;
  v8 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 11748) = v8;
  FIELD_U32(a1, 11728) = v6;
  FIELD_U32(a1, 11732) = v7;
  FIELD_U32(a1, 11736) = v8;
  if ( ((unsigned int)dword_60C99124 & ~(1614643548 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C99124) )
  {
    byte_60C99120 = 1;
    byte_60C99121 = 1;
    byte_60C99122 = 1;
    _cxa_guard_release(dword_60C99124);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C99120);
  CollisionMgr_init((CollisionMgr *)(a1 + 6376), (StateActor *)a1, &stru_60B012F0, &stru_60B012FC, &stru_60B01308);
  FIELD_U8(a1, 11819) = 0;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98FF4);
  body_center_ref(a1);
  sub_603DA818(a1 + 11872);
  sub_603D8874(a1);
  return 1;
}
