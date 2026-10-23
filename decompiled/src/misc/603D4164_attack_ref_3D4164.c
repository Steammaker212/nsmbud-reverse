/* attack_ref_3D4164
 * address: 0x603D4164   size: 908   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall attack_ref_3D4164(int a1)
{
  char v1; // r12
  ActiveColliderMgr *v3; // r6
  int v4; // r1
  float v5; // r0
  int v6; // r2
  _BOOL4 v7; // r1
  float v8; // s0
  void (__fastcall *v9)(int, int *); // r2
  _DWORD *v10; // r5
  int ResArchiveById; // r0
  int v12; // s2
  CollisionMgr_Sensor v14; // [sp+8h] [bp-48h] BYREF
  CollisionMgr_Sensor sensor; // [sp+14h] [bp-3Ch] BYREF
  CollisionMgr_Sensor v16; // [sp+20h] [bp-30h] BYREF

  FIELD_U8(a1, 6056) = 1;
  FIELD_U32(a1, 620) = a1 + 6388;
  FIELD_U32(a1, 6404) = 3;
  FIELD_U32(a1, 624) = a1 + 6424;
  FIELD_U32(a1, 6452) = 1;
  if ( ((unsigned int)dword_60C98F74 & ~(1614627260 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C98F74) )
  {
    byte_60C98F70 = 0;
    byte_60C98F71 = 0;
    byte_60C98F72 = 4;
    _cxa_guard_release(dword_60C98F74);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C98F70);
  sub_603D4534(a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1098907648;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 312) = 1090519040;
  FIELD_U32(a1, 316) = 1090519040;
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF80B4, a1 + 6516);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  v4 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6344) = v4;
  v5 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 6348) = v5;
  v6 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6352) = v6;
  FIELD_U32(a1, 6368) = v4;
  FIELD_F32(a1, 6372) = v5;
  FIELD_U32(a1, 6376) = v6;
  v7 = ((FIELD_U32(a1, 20) >> 8) & 1) == 0;
  FIELD_U32(a1, 80) = v7;
  FIELD_U32(a1, 160) = dword_60AF2120[v7];
  FIELD_U32(a1, 6356) = dword_60AF2128[v7];
  FIELD_U32(a1, 6364) = 1107296256;
  FIELD_U8(a1, 6384) = 0;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1098907648;
  FIELD_U32(a1, 312) = 1086324736;
  FIELD_U32(a1, 316) = 1098907648;
  sensor.a = -5.0;
  sensor.b = 5.0;
  v8 = FIELD_F32(a1, 6468);
  v14.a = 1.0;
  sensor.c = (float)(v8 + 6.0) - v5;
  v14.b = sensor.c + -2.0;
  v14.c = 6.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &sensor, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v14, 0);
  v16.b = v14.b;
  v16.a = v14.a;
  v16.c = -v14.c;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v16, 1);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B0124C, &stru_60B01258, &stru_60B01264);
  sub_60003C60(a1, (int)&stru_60B0124C, 250.0);
  v9 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
  if ( FIELD_U8(a1, 30) )
  {
    v9(a1, &dword_60C98EE0);
    v10 = *(_DWORD **)(a1 + 6380);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    LODWORD(v16.a) = &sead__SafeStringBase__vtable;
    LODWORD(v16.b) = "attack";
    sub_60421938(v10, ResArchiveById, (int)&v16);
  }
  else
  {
    v9(a1, &dword_60C98E80);
  }
  FIELD_F64(a1, 6484) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6480))(a1 + 6480);
  FIELD_U32(a1, 6492) = v12;
  sub_603D46F4(a1);
  return 1;
}
