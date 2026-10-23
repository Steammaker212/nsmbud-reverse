/* sub_604622F4
 * address: 0x604622F4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604622F4(int a1)
{
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U32(a1, 3192) |= 0x40000000u;
  FIELD_U32(a1, 3176) |= 0x40000000u;
  FIELD_U32(a1, 3184) |= 0x40000000u;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B02660, 2);
}
