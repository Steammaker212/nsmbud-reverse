/* sub_607FF72C
 * address: 0x607FF72C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FF72C(float a1)
{
  float result; // s0

  result = -32.0;
  if ( a1 >= -32.0 )
  {
    result = a1;
    if ( a1 > 32.0 )
      return 32.0;
  }
  return result;
}
