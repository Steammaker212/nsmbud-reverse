/* sub_604617F0
 * address: 0x604617F0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604617F0(int a1)
{
  int result; // r0

  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B02630, 3);
  result = FIELD_U32(a1, 3204) | 2;
  FIELD_U32(a1, 3204) = result;
  return result;
}
