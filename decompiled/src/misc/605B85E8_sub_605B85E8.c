/* sub_605B85E8
 * address: 0x605B85E8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B85E8(int a1)
{
  int result; // r0

  sub_606768FC();
  result = 0;
  if ( (FIELD_U8(a1, 6128) | 1) == 3 )
    result = FIELD_U32(a1, 6120);
  FIELD_U32(a1, 164) = result;
  return result;
}
