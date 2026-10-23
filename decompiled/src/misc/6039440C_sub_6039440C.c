/* sub_6039440C
 * address: 0x6039440C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039440C(int a1)
{
  int v2; // r1
  int result; // r0

  FIELD_U32(a1, 116) = 1158455296;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B008D0, 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 0);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 1);
  CollisionMgr_vf14(a1 + 648);
  v2 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) &= 0x6FFFF7FFu;
  FIELD_U32(a1, 3184) = v2 & 0x6FFFF7FF;
  result = FIELD_U32(a1, 3192) & 0x6FFFF7FF;
  FIELD_U32(a1, 3192) = result;
  return result;
}
