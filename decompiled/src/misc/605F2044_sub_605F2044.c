/* sub_605F2044
 * address: 0x605F2044   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F2044(int a1)
{
  CollisionMgr *v2; // r5

  v2 = (CollisionMgr *)(a1 + 648);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 3);
  CollisionMgr_setSensor(v2, 0, 2);
  CollisionMgr_setSensor(v2, 0, 0);
  CollisionMgr_setSensor(v2, 0, 1);
  FIELD_U8(a1, 7481) = 0;
  return 7481;
}
