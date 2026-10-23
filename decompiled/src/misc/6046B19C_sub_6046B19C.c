/* sub_6046B19C
 * address: 0x6046B19C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046B19C(int a1)
{
  CollisionMgr *v2; // r5
  int result; // r0
  CollisionMgr_Sensor v4; // [sp+0h] [bp-20h] BYREF

  v2 = (CollisionMgr *)(a1 + 648);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B0280C, 0);
  v4.b = 12.0;
  v4.a = 4.0;
  v4.c = -9.0;
  CollisionMgr_setSensor(v2, &v4, 1);
  FIELD_U32(a1, 3180) |= 2u;
  result = FIELD_U32(a1, 3188) | 2;
  FIELD_U32(a1, 3188) = result;
  return result;
}
