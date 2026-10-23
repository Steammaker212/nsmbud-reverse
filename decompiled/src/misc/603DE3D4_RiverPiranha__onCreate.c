/* RiverPiranha__onCreate
 * address: 0x603DE3D4   size: 1076   group: misc
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
signed int __fastcall RiverPiranha__onCreate(int a1)
{
  float v2; // s0
  int v3; // r0
  float *v4; // r5
  ActiveColliderMgr *v5; // r7
  ActiveColliderMgr *v6; // r7
  int ProfileId; // r1
  CollisionMgr *v8; // r0
  float v9; // r1
  float v10; // r0
  TileCheck *v11; // r0
  int v12; // r6
  int v13; // s2
  char v14; // r12
  float v15; // s16
  int v16; // r7
  int v17; // r5
  _BYTE *v18; // r0
  int v19; // r5
  int v21; // [sp+4h] [bp-B4h] BYREF
  TileCheck_Result v22; // [sp+8h] [bp-B0h] BYREF
  TileCheck v23; // [sp+30h] [bp-88h] BYREF
  TileCheck_Param v24; // [sp+7Ch] [bp-3Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-30h] BYREF
  Vec2 a3; // [sp+90h] [bp-28h] BYREF

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  *(_DWORD *)&v23.field_0 = FIELD_U32(a1, 108);
  *(float *)&v23.field_4 = v2 + -8.0;
  v23.field_8 = v3;
  v4 = (float *)(a1 + 6308);
  ((void (__fastcall *)(int *, int, TileCheck *, _DWORD))checkLiquidCollisions)(
    &v21,
    a1 + 6308,
    &v23,
    FIELD_U8(a1, 86));
  if ( !v21 )
  {
    v9 = FIELD_F32(a1, 112);
    v10 = FIELD_F32(a1, 108);
    *(_WORD *)&v24.field_0 = 0;
    a3.x = v10;
    a3.y = v9;
    positionOffset.x = v10;
    positionOffset.y = v9 + -56.0;
    v24.field_2 = FIELD_U8(a1, 86);
    v24.field_3 = FIELD_U8(a1, 87);
    v24.field_4 = 0;
    v24.field_8 = 0;
    v11 = TileCheck_ctor(&v23, &v24);
    v22.field_C = 0;
    v22.field_10 = 0;
    if ( TileCheck_check(v11, &v22, &a3, &positionOffset, 15) != 1 || (v22.field_1C & 0xFF00) != 0x300 )
      return 2;
    *v4 = v22.field_8;
  }
  FIELD_U32(a1, 620) = a1 + 6588;
  FIELD_U32(a1, 6604) = 3;
  FIELD_U32(a1, 624) = a1 + 6624;
  FIELD_U32(a1, 6652) = 1;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  sub_603DE84C(a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1094713344;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 312) = 1107296256;
  FIELD_U32(a1, 316) = 1107296256;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF8904, 0);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6676), (StageActor *)a1, &stru_60B013E4, a1 + 7012);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6676))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 6676)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 6676));
  }
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1094713344;
  ProfileId = Actor__getProfileId((Actor *)a1);
  v8 = (CollisionMgr *)(a1 + 648);
  if ( ProfileId == 501 )
    CollisionMgr_init(v8, (StateActor *)a1, &stru_60B01410, 0, &stru_60B0141C);
  else
    CollisionMgr_init(v8, (StateActor *)a1, 0, 0, &stru_60B01428);
  v12 = 0;
  FIELD_U32(a1, 160) = 0x40000000;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_F32(a1, 112) = *v4 + -3.0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 104) = 1048576000;
  FIELD_F64(a1, 6984) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6980))(a1 + 6980);
  FIELD_U32(a1, 6992) = v13;
  sub_603DE95C(a1);
  FIELD_U8(a1, 6332) = 0;
  if ( ((unsigned int)dword_60C99424 & ~(1614669548 << v14) & 1) == 0 && _cxa_guard_acquire(dword_60C99424) )
  {
    byte_60C99420 = 0;
    byte_60C99421 = 0;
    byte_60C99422 = 4;
    _cxa_guard_release(dword_60C99424);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C99420);
  v15 = FIELD_F32(a1, 112);
  v16 = FIELD_U32(a1, 116);
  v17 = FIELD_U32(a1, 108);
  memset(&v23, 0, 44);
  v23.field_C = (int)Profile__get(0x1FFu);
  v23.field_10 = v17;
  *(float *)&v23.field_14 = v15 + 48.0;
  v23.field_18 = v16;
  v23.field_1C = FIELD_U32(a1, 160);
  LOBYTE(v23.field_20) = FIELD_U8(a1, 86);
  v18 = ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)&v23, 0);
  if ( v18 )
  {
    *((_DWORD *)v18 + 1585) = FIELD_U32(a1, 8);
    v12 = *((_DWORD *)v18 + 2);
  }
  v19 = 1;
  FIELD_U32(a1, 6340) = v12;
  FIELD_U8(a1, 6056) = 1;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9937C);
  return v19;
}
