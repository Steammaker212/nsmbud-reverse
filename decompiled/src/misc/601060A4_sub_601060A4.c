/* sub_601060A4
 * address: 0x601060A4   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601060A4(int a1)
{
  float *v2; // r6
  float *v3; // r1
  unsigned int v4; // r0
  unsigned int v5; // s0
  int v6; // r0
  float v7; // s0
  float v8; // r0
  float v9; // s2
  int v10; // r0
  SolidOnTopColliderInfo v12; // [sp+0h] [bp-40h] BYREF
  _DWORD v13[10]; // [sp+18h] [bp-28h] BYREF

  v2 = (float *)(a1 + 6192);
  v3 = (float *)(a1 + 6196);
  v4 = ((FIELD_U32(a1, 24) >> 8) & 0xF) + 1;
  if ( v4 <= 2 )
    v4 = 2;
  v5 = v4;
  v6 = v4 - 2;
  if ( v6 <= 0 )
    v6 = 0;
  v7 = (float)v5 * 16.0;
  *v2 = v7;
  *v3 = v7 * 0.5;
  FIELD_U32(a1, 6188) = v6;
  sub_606429F0(a1 + 144, a1 + 116);
  FIELD_U32(a1, 116) = 1137180672;
  v8 = FIELD_F32(a1, 6196);
  FIELD_F32(a1, 572) = v8;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 6664) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6668) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6672) = 1137180672;
  FIELD_F32(a1, 492) = v8;
  FIELD_U32(a1, 496) = 1090519040;
  v9 = *v2;
  FIELD_F32(a1, 500) = (float)(*v2 + 640.0) + 96.0;
  FIELD_U32(a1, 504) = 1141899264;
  FIELD_F32(a1, 508) = v9 + 96.0;
  FIELD_U32(a1, 512) = 1115684864;
  v13[0] = 0;
  v13[1] = 1090519040;
  *(float *)&v13[2] = v8 + v8;
  v13[3] = 1090519040;
  v12.field_0 = 0.0;
  v12.field_4 = 0;
  *(float *)&v12.field_8 = v8;
  v12.field_C = 0.0;
  v12.points = (Vec2 *)v13;
  v12.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6200), (StageActor *)a1, &v12);
  FIELD_U32(a1, 6372) = 0;
  FIELD_U32(a1, 6376) = 0;
  FIELD_U32(a1, 6512) = sub_601062B4;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6200));
  lift_han_koopa_ref_2((_DWORD *)a1);
  sub_60639254(a1 + 6648);
  sub_6063938C(a1 + 6648);
  v10 = FIELD_U32(a1, 6648);
  FIELD_U32(a1, 144) = v10;
  FIELD_U32(a1, 148) = v10;
  FIELD_U32(a1, 152) = v10;
  sub_6010672C(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C861D0);
  sub_60106A4C(a1);
  return 1;
}
