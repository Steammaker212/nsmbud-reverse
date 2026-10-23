/* sub_60643C74
 * address: 0x60643C74   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60643C74(int a1)
{
  int v2; // r5
  float v3; // s4
  float v4; // s18
  float v5; // s16
  unsigned int v6; // r1
  int v7; // r1
  int ResArchiveById; // r0
  float v10[2]; // [sp+8h] [bp-50h] BYREF
  SolidOnTopColliderInfo adjacentSensor; // [sp+10h] [bp-48h] BYREF
  float v12[12]; // [sp+28h] [bp-30h] BYREF

  v2 = a1 + 108;
  v3 = (float)((FIELD_U32(a1, 24) >> 8) & 0xF);
  v4 = v3 * 8.0;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)(v3 * 8.0);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  v5 = v3 * 16.0;
  FIELD_F32(a1, 500) = v3 * 16.0;
  FIELD_U32(a1, 504) = 1098907648;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_F32(a1, 508) = v3 * 16.0;
  FIELD_U32(a1, 512) = 1098907648;
  v6 = FIELD_U32(a1, 80);
  if ( v6 > 3 || (FIELD_U32(a1, 6624) = dword_60CB5B50[v6 + 3], v6 > 1) )
  {
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, 0);
  }
  else
  {
    adjacentSensor.field_0 = 0.0;
    adjacentSensor.field_4 = 0;
    *(float *)&adjacentSensor.field_8 = v3 * 8.0;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, (CollisionMgr_Sensor *)&adjacentSensor);
    FIELD_U32(a1, 3176) |= 0x80000000;
    FIELD_U32(a1, 3184) |= 0x80000000;
    v7 = FIELD_U32(a1, 3188);
    FIELD_U32(a1, 3180) |= 0x203u;
    FIELD_U32(a1, 3188) = v7 | 0x203;
  }
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  sub_606444A8(a1 + 6112, 0, ResArchiveById, v4 + -16.0, 0.0, 1.0);
  memset(&adjacentSensor, 0, 16);
  v12[0] = -v4;
  v12[1] = 8.0;
  v12[2] = v4;
  v12[3] = 8.0;
  adjacentSensor.points = (Vec2 *)v12;
  adjacentSensor.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6136), (StageActor *)a1, &adjacentSensor);
  FIELD_U32(a1, 6448) = sub_60643E70;
  v10[0] = v5 + 64.0;
  v10[1] = 80.0;
  sub_6069AFA0(a1 + 6584, v2, a1 + 492, v10, a1 + 6136);
  return 1;
}
