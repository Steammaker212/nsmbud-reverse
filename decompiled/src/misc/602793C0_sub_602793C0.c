/* sub_602793C0
 * address: 0x602793C0   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602793C0(int a1)
{
  int result; // r0

  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFDDD0, &stru_60AFDDDC, &stru_60AFDDE8);
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U32(a1, 3204) |= 0x20u;
  FIELD_U32(a1, 3192) |= 0x40000000u;
  FIELD_U32(a1, 3196) |= 0x20u;
  FIELD_U32(a1, 3176) |= 0x40000000u;
  FIELD_U32(a1, 3184) |= 0x40000000u;
  FIELD_U32(a1, 3180) |= 0x20u;
  result = FIELD_U32(a1, 3188) | 0x20;
  FIELD_U32(a1, 3188) = result;
  return result;
}
