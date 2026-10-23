/* sub_60344864
 * address: 0x60344864   size: 828   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60344864(int a1)
{
  signed int v2; // r0
  float v3; // s0
  char v4; // r12
  int v5; // s2
  ActiveColliderMgr *v6; // r6
  unsigned __int8 v8[4]; // [sp+8h] [bp-20h] BYREF
  unsigned __int8 v9; // [sp+Ch] [bp-1Ch] BYREF

  throw_5_ref();
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v2];
  FIELD_U32(a1, 7100) = (FIELD_U32(a1, 20) >> 5) & 1;
  v3 = FIELD_F32(a1, 112) + 13.0;
  FIELD_F32(a1, 112) = v3;
  FIELD_U32(a1, 116) = -988004352;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 7028) = FIELD_U32(a1, 108);
  FIELD_F32(a1, 7032) = v3;
  FIELD_U32(a1, 7036) = -988004352;
  FIELD_U32(a1, 7080) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 12496) = 3;
  FIELD_U32(a1, 620) = a1 + 12480;
  if ( ((unsigned int)dword_60C94884 & ~(1614039392 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C94884) )
  {
    byte_60C94880 = 0;
    byte_60C94881 = 1;
    byte_60C94882 = 1;
    _cxa_guard_release(dword_60C94884);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C94880);
  FIELD_F64(a1, 12860) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 12856))(a1 + 12856);
  FIELD_U32(a1, 12868) = v5;
  v9 = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BEDE2C, &v9, 0);
  v8[0] = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 12552), (StateActor *)a1, &stru_60AFFC08, v8, 0);
  FIELD_U32(a1, 12664) = a1 + 12888;
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 12552))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 12552)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 12552));
  }
  if ( FIELD_U32(a1, 7100) )
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFFC34, 0, 0);
  CollisionMgr_init((CollisionMgr *)(a1 + 7128), (StateActor *)a1, 0, &stru_60AFFC40, 0);
  FIELD_U32(a1, 9672) |= 0x40000000u;
  FIELD_U32(a1, 6968) = -1056964608;
  FIELD_U32(a1, 6972) = 1090519040;
  FIELD_U32(a1, 6976) = -1065353216;
  ShapedCollider_init((ShapedCollider *)(a1 + 6312), (StageActor *)a1, (ShapedColliderInfo *)&dword_60C948C0);
  FIELD_U32(a1, 6624) = sub_60344D18;
  FIELD_U32(a1, 6628) = 0;
  FIELD_U32(a1, 6632) = 0;
  FIELD_U32(a1, 7064) = 2;
  FIELD_U16(a1, 7108) = 0;
  FIELD_U8(a1, 7110) = 0;
  sub_60344DF4(a1);
  FIELD_U32(a1, 7088) = 1;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9474C);
  return 1;
}
