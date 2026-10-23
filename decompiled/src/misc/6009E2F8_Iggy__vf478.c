/* Iggy__vf478
 * address: 0x6009E2F8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600AB798
// 
// Overridden by: None
void __fastcall Iggy__vf478(int a1)
{
  CollisionMgr *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  v1 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1091567616;
  FIELD_U32(a1, 312) = 1091567616;
  FIELD_U32(a1, 316) = 1091567616;
  FIELD_U32(a1, 320) = 1;
  FIELD_U32(a1, 6844) = 1094713344;
  FIELD_U32(a1, 6848) = 1092616192;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1092616192;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5658, 3);
  CollisionMgr_setSensor(v1, &stru_60AF5664, 2);
  CollisionMgr_setSensor(v1, &stru_60AF5670, 0);
  v2.b = 8.0;
  v2.a = 8.0;
  v2.c = -8.0;
  CollisionMgr_setSensor(v1, &v2, 1);
}
