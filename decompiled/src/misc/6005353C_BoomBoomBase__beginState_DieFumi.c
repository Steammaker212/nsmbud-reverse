/* BoomBoomBase__beginState_DieFumi
 * address: 0x6005353C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600260D0
// 
// Overridden by: None
void __fastcall BoomBoomBase__beginState_DieFumi(StateActor *a1)
{
  float v2; // r0
  signed int v3; // r0
  int v4; // r1
  CollisionMgr *collisionMgr; // r4

  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1100))(a1);
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 72))(a1);
  v2 = *(float *)&a1[1]._.collisionMgr[388];
  FIELD_U32(a1, 0x0)._.speed.x = 0.0;
  FIELD_U32(a1, 0x0)._.speed.y = v2;
  FIELD_U32(a1, 0x0)._.speed.z = 0.0;
  FIELD_U32(a1, 0x0)._.maxSpeed.y = -4.0;
  FIELD_U32(a1, 0x0)._.field_64 = -0.1875;
  v3 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  FIELD_U32(a1, 0x0)._.direction = v3;
  v4 = *(_DWORD *)&a1[1]._.collisionMgr[348];
  if ( v3 )
    v4 = -v4;
  FIELD_U32(a1, 0x0)._.rotation.y = v4;
  FIELD_U32(a1, 0x0)._.position.z = 5000.0;
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1204))(a1);
  *(_DWORD *)&a1[1]._.collisionMgr[496] = 0;
  collisionMgr = (CollisionMgr *)FIELD_U32(a1, 0x0).collisionMgr;
  CollisionMgr_setSensor(collisionMgr, &stru_60AF52CC, 3);
  CollisionMgr_setSensor(collisionMgr, 0, 2);
  CollisionMgr_setSensor(collisionMgr, 0, 0);
  CollisionMgr_setSensor(collisionMgr, 0, 1);
}
