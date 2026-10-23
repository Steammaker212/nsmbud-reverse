/* Iggy__vf474
 * address: 0x6009E214   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600AB794
// 
// Overridden by: None
void __fastcall Iggy__vf474(int a1)
{
  CollisionMgr *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  v1 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1095761920;
  FIELD_U32(a1, 312) = 1097859072;
  FIELD_U32(a1, 316) = 1095761920;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 6844) = 1101004800;
  FIELD_U32(a1, 6848) = 1103101952;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1103101952;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5634, 3);
  CollisionMgr_setSensor(v1, &stru_60AF5640, 2);
  CollisionMgr_setSensor(v1, &stru_60AF564C, 0);
  v2.b = 30.0;
  v2.a = 10.0;
  v2.c = -20.0;
  CollisionMgr_setSensor(v1, &v2, 1);
}
