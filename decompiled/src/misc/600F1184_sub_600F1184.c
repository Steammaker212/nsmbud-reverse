/* sub_600F1184
 * address: 0x600F1184   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600F1184(int a1)
{
  CollisionMgr *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1096810496;
  FIELD_U32(a1, 312) = 1095761920;
  FIELD_U32(a1, 316) = 1095761920;
  FIELD_U32(a1, 320) = 1;
  v1 = (CollisionMgr *)(a1 + 648);
  FIELD_U32(a1, 6844) = 1101004800;
  FIELD_U32(a1, 6848) = 1098907648;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1098907648;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5FC8, 3);
  CollisionMgr_setSensor(v1, &stru_60AF5FD4, 2);
  CollisionMgr_setSensor(v1, &stru_60AF5FE0, 0);
  v2.b = 12.0;
  v2.a = 8.0;
  v2.c = -16.0;
  CollisionMgr_setSensor(v1, &v2, 1);
}
