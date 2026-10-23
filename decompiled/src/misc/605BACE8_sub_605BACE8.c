/* sub_605BACE8
 * address: 0x605BACE8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BACE8(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = a1 + 6100;
  sub_605BB7F0(a1 + 6100);
  result = sub_605BB8D0(v2);
  if ( result == 1 )
  {
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
