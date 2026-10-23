/* sub_607FEAE0
 * address: 0x607FEAE0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_607FEAE0(float *result, float a2)
{
  float v2; // s0
  float v3; // s0

  if ( a2 > 0.0 )
  {
    if ( *result >= 0.0 )
      return result;
    v2 = *result + a2;
    *result = v2;
    if ( v2 <= 0.0 )
      return result;
LABEL_8:
    *result = 0.0;
    return result;
  }
  if ( a2 < 0.0 && *result > 0.0 )
  {
    v3 = *result + a2;
    *result = v3;
    if ( v3 < 0.0 )
      goto LABEL_8;
  }
  return result;
}
