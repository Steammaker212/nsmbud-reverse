/* sub_60468B50
 * address: 0x60468B50   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60468B50(int a1)
{
  CollisionMgr *v2; // r5
  int result; // r0
  CollisionMgr_Sensor v4; // [sp+0h] [bp-20h] BYREF

  v2 = (CollisionMgr *)(a1 + 648);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B02764, 0);
  v4.b = 6.0;
  v4.a = 2.0;
  v4.c = -3.9;
  CollisionMgr_setSensor(v2, &v4, 1);
  FIELD_U32(a1, 3180) |= 2u;
  result = FIELD_U32(a1, 3188) | 2;
  FIELD_U32(a1, 3188) = result;
  return result;
}
