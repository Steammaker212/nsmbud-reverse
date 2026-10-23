/* sub_6077743C
 * address: 0x6077743C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077743C(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 52);
  if ( !result )
  {
    result = sub_6077A638(0);
    if ( result == 1 )
    {
      result = sub_6077A740(1, 1);
      FIELD_U32(a1, 52) = 1;
    }
  }
  return result;
}
