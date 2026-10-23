/* sub_60461850
 * address: 0x60461850   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60461850(int a1)
{
  float v2; // r0
  int result; // r0
  CollisionMgr_Sensor v4; // [sp+0h] [bp-20h] BYREF

  if ( (FIELD_U8(a1, 21) & 4) != 0 )
  {
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B02648, 0);
    v4.b = 12.0;
    v2 = 8.0;
  }
  else
  {
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B02654, 0);
    v4.b = 12.0;
    v2 = 4.0;
  }
  v4.a = v2;
  v4.c = -7.9;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v4, 1);
  FIELD_U32(a1, 3180) |= 2u;
  result = FIELD_U32(a1, 3188) | 2;
  FIELD_U32(a1, 3188) = result;
  return result;
}
