/* sub_600845BC
 * address: 0x600845BC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600845BC(int a1)
{
  int v1; // r4
  CollisionMgr *v2; // r5
  float v3; // r1
  int v4; // t1
  Vec3 v6[3]; // [sp+0h] [bp-28h] BYREF

  v1 = a1;
  FIELD_U32(a1, 304) = 0;
  v2 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 308) = 1092616192;
  FIELD_U32(a1, 312) = 1092616192;
  FIELD_U32(a1, 316) = 1092616192;
  FIELD_U32(a1, 320) = 1;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1094713344;
  FIELD_U32(a1, 6844) = 1094713344;
  FIELD_U32(a1, 6848) = 1094713344;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF55A0, 2);
  CollisionMgr_setSensor(v2, &stru_60AF55AC, 0);
  v6[0].y = 10.0;
  v6[0].x = 10.0;
  v6[0].z = -8.0;
  CollisionMgr_setSensor(v2, (CollisionMgr_Sensor *)v6, 1);
  v3 = FIELD_F32(v1, 112);
  v6[0].x = FIELD_F32(v1, 108);
  v6[0].y = v3;
  v6[0].z = 4500.0;
  EffectData_create(1081, v6, 0, 0);
  v4 = FIELD_U32(v1, 7616);
  v1 += 7616;
  *(_DWORD *)v1 = v4 & 0xFFFFFFFE;
  FIELD_U32(v1, 4) = 23860929;
  FIELD_U32(v1, 8) = 4;
  *(_DWORD *)(v1 - 7460) = 0;
  *(_DWORD *)(v1 - 7452) = 0;
  *(_DWORD *)(v1 - 7276) |= 0x1000u;
  return -7276;
}
