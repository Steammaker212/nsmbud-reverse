/* sub_60607978
 * address: 0x60607978   size: 932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60607978(int a1)
{
  int v2; // r0
  int *v3; // r1
  float *v4; // r8
  float *v5; // r10
  float v6; // s0
  float v7; // s4
  float v8; // s0
  float v9; // r0
  int v10; // r0
  int v11; // r5
  int v12; // r2
  float v13; // r0
  float v14; // s0
  float v15; // s2
  ActiveColliderMgr *v16; // r6
  float v17; // s2
  ActiveColliderMgr *v18; // r6
  float v19; // s0
  float v20; // s2
  ShapedColliderInfo v22; // [sp+8h] [bp-78h] BYREF
  CollisionMgr_Sensor adjacentSensor; // [sp+2Ch] [bp-54h] BYREF
  CollisionMgr_Sensor a4; // [sp+38h] [bp-48h] BYREF
  CollisionMgr_Sensor a3; // [sp+44h] [bp-3Ch] BYREF

  FIELD_U32(a1, 6116) = Actor__getProfileId((Actor *)a1) != 285;
  v2 = FIELD_U32(a1, 20) & 3;
  if ( !v2 )
    v2 = 1;
  FIELD_U32(a1, 6120) = v2;
  lift_zen_float_ref(a1, 285);
  FIELD_U32(a1, 116) = 1137180672;
  v3 = dword_60607D20;
  if ( !FIELD_U32(a1, 6116) )
    v3 = &dword_60607D20[1];
  v4 = (float *)(a1 + 6792);
  FIELD_U32(a1, 6792) = *v3;
  v5 = (float *)(a1 + 6796);
  FIELD_F32(a1, 6796) = (float)((float)FIELD_S32(a1, 6120) * 3.0) * 16.0;
  FIELD_U32(a1, 6800) = FIELD_U32(a1, 112);
  ((void (__fastcall *)(ShapedColliderInfo *, int, int, _DWORD))checkLiquidCollisions)(
    &v22,
    a1 + 6800,
    a1 + 108,
    FIELD_U8(a1, 86));
  if ( LODWORD(v22.distToCenter.x) )
    FIELD_U8(a1, 6804) = 1;
  FIELD_F32(a1, 6808) = (float)(FIELD_F32(a1, 6800) + 0.0) + -24.0;
  v6 = *v4;
  v7 = *v4 * 0.5;
  a3.a = *v4 * -0.5;
  a3.b = v7;
  a3.c = 0.0;
  v8 = v6 + -8.0;
  a4.a = v8 * -0.5;
  a4.b = v8 * 0.5;
  v9 = *v5;
  adjacentSensor.a = 0.0;
  adjacentSensor.b = v9;
  a4.c = v9;
  adjacentSensor.c = v7;
  CollisionMgr_init((CollisionMgr *)(a1 + 7272), (StateActor *)a1, &a3, &a4, &adjacentSensor);
  v10 = FIELD_U32(a1, 9824) | 0x40008000;
  FIELD_U32(a1, 9816) |= 0x8000u;
  v11 = FIELD_U32(a1, 9800);
  v12 = FIELD_U32(a1, 9808);
  FIELD_U32(a1, 9824) = v10;
  FIELD_U32(a1, 9800) = v11 | 0x40008000;
  FIELD_U32(a1, 9808) = v12 | 0x40008000;
  memset(&v22, 0, 16);
  v13 = *v5;
  v14 = *v4 * 0.5;
  v22.topLeft.x = *v4 * -0.5;
  v22.topLeft.y = v13;
  v22.bottomRight.x = v14;
  v22.bottomRight.y = 0.0;
  v22.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6136), (StageActor *)a1, &v22);
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6136), 2);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6136));
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C0F710, 0);
  v15 = *v5 * 0.5;
  FIELD_F32(a1, 312) = *v4 * 0.5;
  FIELD_F32(a1, 316) = v15;
  FIELD_U32(a1, 304) = 0;
  FIELD_F32(a1, 308) = v15;
  v16 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v16, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v16, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 12624), (StageActor *)a1, &stru_60B06384, a1 + 12928);
  v17 = *v5 * 0.5;
  FIELD_F32(a1, 12748) = *v4 * 0.5;
  FIELD_F32(a1, 12752) = v17;
  FIELD_U32(a1, 12740) = 0;
  FIELD_F32(a1, 12744) = v17;
  v18 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 12624))
    && !ActiveColliderMgr_isInCreateList(v18, (ActiveCollider *)(a1 + 12624)) )
  {
    ActiveColliderMgr_addToCreateList(v18, (ActiveCollider *)(a1 + 12624));
  }
  v19 = (float)(*v4 + *v4) + 160.0;
  v20 = *v5 + 300.0;
  FIELD_F32(a1, 500) = v19;
  FIELD_F32(a1, 504) = v20;
  FIELD_F32(a1, 508) = v19;
  FIELD_F32(a1, 512) = v20;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB2B14);
  ((void (__fastcall *)(int))loc_60608074)(a1);
  return 1;
}
