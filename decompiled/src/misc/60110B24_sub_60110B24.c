/* sub_60110B24
 * address: 0x60110B24   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60110B24(int a1)
{
  int v2; // r8
  int v3; // r0
  float v4; // s0
  float *v5; // r7
  float v6; // s4
  float v7; // s0
  int v8; // r1
  int v9; // r0
  int v10; // r0
  float v11; // s0
  float v12; // s0
  int v13; // r0
  SolidOnTopColliderInfo a5; // [sp+0h] [bp-48h] BYREF
  _DWORD v16[12]; // [sp+18h] [bp-30h] BYREF

  sub_606429F0(a1 + 144, a1 + 116);
  v2 = FIELD_U32(a1, 20);
  v3 = (FIELD_U32(a1, 24) >> 8) & 0xF;
  if ( !v3 )
    v3 = 4;
  FIELD_U32(a1, 6564) = v3;
  v4 = (float)v3 * 16.0;
  FIELD_F32(a1, 6560) = v4;
  FIELD_U32(a1, 80) = v2 & 3;
  FIELD_U8(a1, 6568) = (v2 & 0x10000000) != 0;
  v5 = (float *)((char *)&unk_60AF62A8 + 16 * (v2 & 3));
  v6 = v5[1];
  FIELD_F32(a1, 108) = *v5 + FIELD_F32(a1, 108);
  FIELD_F32(a1, 112) = v6 + FIELD_F32(a1, 112);
  FIELD_U32(a1, 144) = 0x40000000;
  FIELD_U32(a1, 148) = 1056964608;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_F32(a1, 6552) = v4 * 0.5;
  FIELD_U32(a1, 6556) = -1056964608;
  FIELD_U32(a1, 116) = -1013579776;
  lift_han_hikousen_ref(a1);
  v7 = FIELD_F32(a1, 6560);
  FIELD_F32(a1, 492) = v7 * 0.5;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_F32(a1, 500) = v7;
  FIELD_U32(a1, 504) = 1136656384;
  FIELD_F32(a1, 508) = v7;
  FIELD_U32(a1, 512) = 1136656384;
  memset(&a5, 0, 16);
  v16[0] = 0;
  v16[1] = 0;
  *(float *)&v16[2] = v7;
  v16[3] = 0;
  a5.points = (Vec2 *)v16;
  a5.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6104), (StageActor *)a1, &a5);
  v8 = *((_DWORD *)v5 + 3);
  FIELD_U32(a1, 6276) = 0;
  FIELD_U32(a1, 6280) = 0;
  v9 = *((_DWORD *)v5 + 2);
  FIELD_U32(a1, 120) = v9;
  FIELD_U32(a1, 124) = v8;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = v9;
  FIELD_U32(a1, 136) = v8;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = 0;
  v10 = a1 + 6572;
  if ( (v2 & 0x10) != 0 )
  {
    sub_6063938C(v10);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C86900);
    v11 = 1.0;
  }
  else
  {
    sub_60639254(v10);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C868E0);
    v11 = 0.0;
  }
  FIELD_F32(a1, 6588) = v11;
  v12 = FIELD_F32(a1, 120);
  FIELD_U32(a1, 6672) = 0;
  FIELD_U32(a1, 6676) = 0;
  v13 = 0x40000000;
  if ( v12 > 0.0 )
    v13 = -1073741824;
  FIELD_U32(a1, 6680) = v13;
  ((void (__fastcall *)(int))loc_6011104C)(a1);
  return 1;
}
