/* sub_60289788
 * address: 0x60289788   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60289788(int a1)
{
  int result; // r0
  CollisionMgr_Sensor v3; // [sp+0h] [bp-28h] BYREF

  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1098907648;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1098907648;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFDEE4, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFDEF0, 0);
  v3.b = 28.0;
  v3.a = 12.0;
  v3.c = -12.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v3, 1);
  result = FIELD_U8(a1, 6605);
  if ( result == 1 )
    FIELD_U32(a1, 156) = 0;
  return result;
}
