/* sub_6005A1EC
 * address: 0x6005A1EC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6005A1EC(int a1)
{
  CollisionMgr *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  v1 = (CollisionMgr *)(a1 + 648);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5398, 2);
  CollisionMgr_setSensor(v1, &stru_60AF538C, 0);
  v2.b = 54.0;
  v2.a = 18.0;
  v2.c = -36.0;
  CollisionMgr_setSensor(v1, &v2, 1);
}
