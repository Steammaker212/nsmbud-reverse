/* SumoBroLightning_onCreate
 * address: 0x60335270   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SumoBroLightning_onCreate(MultiStateActor *a1)
{
  int v2; // r0
  float x; // r0
  ActiveColliderMgr *v4; // r7
  State *v5; // r1
  float y; // r1
  Vec2 out; // [sp+18h] [bp-38h] BYREF
  Vec3 position; // [sp+20h] [bp-30h] BYREF

  v2 = FIELD_U32(a1, 0x0)._._.settings1 & 1;
  a1[1]._._.field_1F0 = v2;
  BYTE1(a1[1]._._.field_1F4) = v2;
  x = FIELD_U32(a1, 0x0)._.position.x;
  position.y = FIELD_U32(a1, 0x0)._.position.y;
  position.x = x;
  position.z = 4500.0;
  EffectWrapper_update((EffectWrapper *)&a1[1]._._.aCollider.field_C4, 964, &position, 0, 0);
  FIELD_U32(a1, 0x0)._.position.z = 1500.0;
  ActiveCollider__init(&FIELD_U32(a1, 0x0)._.aCollider, &FIELD_U32(a1, 0x0)._, (ActiveColliderInfo *)&unk_60BEC9DC, (int)&a1[1]);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0x0)._.aCollider)
    && !ActiveColliderMgr_isInCreateList(v4, &FIELD_U32(a1, 0x0)._.aCollider) )
  {
    ActiveColliderMgr_addToCreateList(v4, &FIELD_U32(a1, 0x0)._.aCollider);
  }
  CollisionMgr_init((CollisionMgr *)FIELD_U32(a1, 0x0).collisionMgr, (StateActor *)a1, &stru_60AFFA10, 0, &stru_60AFFA1C);
  LOBYTE(a1[1]._._.field_1F4) = 0;
  FIELD_U32(a1, 0x0)._.field_64 = 0.0;
  *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2548] |= 4u;
  *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2532] |= 4u;
  *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2540] |= 4u;
  *(_DWORD *)&FIELD_U32(a1, 0x0).collisionMgr[2556] |= 4u;
  FIELD_U32(a1, 0x0)._.maxSpeed.y = -10.0;
  LightSource_update1((LightSource *)&a1[1]._._.aCollider.info.distToEdge, 35, &FIELD_U32(a1, 0x0)._.position, 0, 0, 0, 0, 0, 0);
  if ( a1[1]._._.field_1F0 )
    v5 = &stru_60C940F8;
  else
    v5 = &SumoBroLightning_StateID_Down;
  (*(void (__fastcall **)(MultiStateActor *, State *))(FIELD_U32(a1, 0x0)._._.vtable + 192))(a1, v5);
  y = FIELD_U32(a1, 0x0)._.position.y;
  position.x = FIELD_U32(a1, 0x0)._.position.x;
  position.y = y;
  mapPositionToScreen(&out, &position);
  sub_60813570(&a1[1]._._._.heap, "SE_OBJ_KK_THUNDER", &out, 0);
  return 1;
}
