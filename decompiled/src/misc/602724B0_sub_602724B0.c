/* sub_602724B0
 * address: 0x602724B0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602724B0(int a1)
{
  int result; // r0

  FIELD_U32(a1, 328) = 9;
  sub_6015907C((ActiveCollider *)(a1 + 188), 176);
  result = FIELD_U32(a1, 340) | 0x1000;
  FIELD_U32(a1, 340) = result;
  return result;
}
