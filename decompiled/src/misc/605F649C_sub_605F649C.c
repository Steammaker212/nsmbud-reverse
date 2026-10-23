/* sub_605F649C
 * address: 0x605F649C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F649C(int a1)
{
  int result; // r0

  result = Actor__getProfileId((Actor *)a1);
  if ( result == 433 )
  {
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B05EC4, 2);
    result = FIELD_U32(a1, 3192) | 0x40000000;
    FIELD_U32(a1, 3192) = result;
  }
  return result;
}
