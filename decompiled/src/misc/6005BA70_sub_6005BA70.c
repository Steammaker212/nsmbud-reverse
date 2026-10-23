/* sub_6005BA70
 * address: 0x6005BA70   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005BA70(StateActor *a1)
{
  float v2; // s16
  int v3; // r0
  int v4; // r0
  float x; // r5
  float v6; // s18
  float v7; // s0
  float z; // r2
  int v9; // r0
  float y; // r6
  float v11; // s0
  float v12; // s0
  _DWORD v14[2]; // [sp+0h] [bp-38h] BYREF
  Vec2 out; // [sp+8h] [bp-30h] BYREF

  if ( !(*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 716))(a1) )
    (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 720))(a1);
  v2 = 0.0;
  v3 = *(_DWORD *)&a1[1]._.collisionMgr[456];
  LODWORD(out.x) = &sead__SafeStringBase__vtable;
  LODWORD(out.y) = "fly_wait";
  sub_60421AD4(v3);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "fly_wait";
  sub_60051794((int)a1, (int)v14, 1);
  v4 = *(_DWORD *)&a1[1]._.collisionMgr[1088];
  LODWORD(out.x) = &sead__SafeStringBase__vtable;
  LODWORD(out.y) = "fly_wing_wait";
  sub_60421AD4(v4);
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1188))(a1);
  StageActor__distanceToPlayer(a1, &out);
  if ( *(_DWORD *)&a1[1]._.collisionMgr[1112] == 1
    && (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 724))(a1) == 1 )
  {
    x = out.x;
    v6 = out.x;
    v7 = FIELD_U32(a1, 0x0)._.position.x - *(float *)&a1[1]._.collisionMgr[1140];
  }
  else
  {
    v6 = out.x;
    x = out.x;
    v7 = FIELD_U32(a1, 0x0)._.position.x + out.x;
  }
  z = FIELD_U32(a1, 0x0)._.position.z;
  v9 = *(_DWORD *)&a1[1]._.collisionMgr[1108];
  *(float *)&a1[1]._.collisionMgr[1128] = v7;
  *(_DWORD *)&a1[1]._.collisionMgr[1132] = v9;
  *(float *)&a1[1]._.collisionMgr[1136] = z;
  y = out.y;
  v11 = sqrtf((float)((float)(out.y * out.y) + (float)(v6 * v6)) + 0.0);
  if ( v11 > 0.0 )
  {
    v12 = -2.5 / v11;
    v2 = v12 * 0.0;
    y = out.y * v12;
    x = v6 * v12;
  }
  FIELD_U32(a1, 0x0)._.speed.x = x;
  FIELD_U32(a1, 0x0)._.speed.y = y;
  FIELD_U32(a1, 0x0)._.speed.z = v2;
  FIELD_U32(a1, 0x0)._.field_64 = 0.0;
  FIELD_U32(a1, 0x0)._.maxSpeed.x = 0.0;
  FIELD_U32(a1, 0x0)._.maxSpeed.y = 0.0;
  FIELD_U32(a1, 0x0)._.maxSpeed.z = 0.0;
  LOWORD(a1[1]._._.field_B0) = 30;
  return 6276;
}
