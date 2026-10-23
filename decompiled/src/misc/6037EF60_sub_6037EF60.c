/* sub_6037EF60
 * address: 0x6037EF60   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037EF60(int a1)
{
  int result; // r0

  sub_602A8EE0(a1);
  result = FIELD_U8(a1, 6320);
  if ( !FIELD_U8(a1, 6320) )
  {
    sub_602CB320(a1 + 6324);
    return sub_6037EF94(a1);
  }
  return result;
}
