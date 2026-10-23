/* BobOmb_onCreate
 * address: 0x6025D0D8   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BobOmb_onCreate(Enemy *a1)
{
  Enemy *v2; // r7
  ActiveColliderMgr *v3; // r8
  char *v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // s2
  CollisionMgr_Sensor sensor; // [sp+8h] [bp-28h] BYREF

  v2 = (Enemy *)((char *)a1 + 0x1928);
  if ( LODWORD(a1[1]._._._.maxSpeed.z) != 2 )
    ++FIELD_U32(EnemyCounterMaybe_instance, 224);
  BobOmb_setupModel(a1);
  LightMask__init((RevealMaskRelated *)&a1[1]._._._.aCollider._.containingHeap, 0, 2);
  FIELD_U32(a1, 0x0)._._.effectOffset.x = 0.0;
  FIELD_U32(a1, 0x0)._._.effectOffset.y = 8.0;
  FIELD_U32(a1, 0x0)._._.effectOffset.z = 0.0;
  FIELD_U32(a1, 0x0)._._.field_1EC = 0.0;
  FIELD_U32(a1, 0x0)._._.field_1F0 = 1090519040;
  FIELD_U32(a1, 0x0)._._.field_1F4 = 16.0;
  FIELD_U32(a1, 0x0)._._.field_1F8 = 16.0;
  ActiveCollider__init(
    &FIELD_U32(a1, 0x0)._._.aCollider,
    &FIELD_U32(a1, 0x0)._._,
    (ActiveColliderInfo *)&unk_60BDB18C,
    (int)&a1[1]._._._.aCollider.field_FC);
  if ( (FIELD_U32(v2, 0x0)._._._.vtable | 4) != 6 )
  {
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0x0)._._.aCollider)
      && !ActiveColliderMgr_isInCreateList(v3, &FIELD_U32(a1, 0x0)._._.aCollider) )
    {
      ActiveColliderMgr_addToCreateList(v3, &FIELD_U32(a1, 0x0)._._.aCollider);
    }
  }
  CollisionMgr_init((CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr, (StateActor *)a1, 0, 0, 0);
  if ( FIELD_U32(v2, 0x0)._._._.vtable == 3 )
  {
    CollisionMgr_setSensor((CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr, &stru_60AFD8D8, 3);
    CollisionMgr_setSensor((CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr, &stru_60AFD8E4, 2);
    CollisionMgr_setSensor((CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr, &stru_60AFD8F0, 0);
    sensor.b = 14.0;
    sensor.a = 3.0;
    sensor.c = -8.0;
    CollisionMgr_setSensor((CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr, &sensor, 1);
    v4 = &FIELD_U32(a1, 0x0)._.collisionMgr[2536];
    v5 = *(_DWORD *)&FIELD_U32(a1, 0x0)._.collisionMgr[2536] | 0x4C000600;
    v6 = *(_DWORD *)&FIELD_U32(a1, 0x0)._.collisionMgr[2544] | 0x4C000600;
    v7 = *(_DWORD *)&FIELD_U32(a1, 0x0)._.collisionMgr[2528] | 0x4C000600;
    *(_DWORD *)&FIELD_U32(a1, 0x0)._.collisionMgr[2552] |= 0x4C000600u;
    *(_DWORD *)&FIELD_U32(a1, 0x0)._.collisionMgr[2544] = v6;
    *(_DWORD *)&FIELD_U32(a1, 0x0)._.collisionMgr[2528] = v7;
  }
  else
  {
    CollisionMgr_setSensor((CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr, &stru_60AFD8B4, 3);
    CollisionMgr_setSensor((CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr, &stru_60AFD8C0, 2);
    CollisionMgr_setSensor((CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr, &stru_60AFD8CC, 0);
    sensor.b = 9.0;
    sensor.a = 5.0;
    sensor.c = -6.0;
    CollisionMgr_setSensor((CollisionMgr *)FIELD_U32(a1, 0x0)._.collisionMgr, &sensor, 1);
    v4 = &FIELD_U32(a1, 0x0)._.collisionMgr[2552];
    v5 = *(_DWORD *)&FIELD_U32(a1, 0x0)._.collisionMgr[2552] | 0x20000;
  }
  *(_DWORD *)v4 = v5;
  *(_DWORD *)&a1[1]._._._.playerId = 3;
  FIELD_U32(a1, 0x0)._._.field_26C = (int)&a1[1]._._._._.field_44;
  LODWORD(a1[1]._._._.maxSpeed.x) = 1;
  FIELD_U32(a1, 0x0)._._.field_270 = (int)&a1[1]._._._.xAcceleration;
  FIELD_U32(a1, 0x1804) = 2;
  BobOmb_decideFirstState(a1);
  *(double *)&a1[1]._._._.aCollider.field_E0 = ((double (__fastcall *)(int *))*(_DWORD *)a1[1]._._._.aCollider.field_DC)(&a1[1]._._._.aCollider.field_DC);
  a1[1]._._._.aCollider.field_E8 = v8;
  BobOmb_onCreate_helper((float *)&FIELD_U32(a1, 0x0)._._._.vtable);
  return 1;
}
