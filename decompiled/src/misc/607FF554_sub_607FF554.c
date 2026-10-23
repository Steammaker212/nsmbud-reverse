/* sub_607FF554
 * address: 0x607FF554   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FF554(float result, float a2, float a3, float a4, float a5, float a6)
{
  if ( a3 != a4 )
    return (float)(a2 + (float)(a3 * a6))
         + (float)((float)(1.0 / a3) * (float)((float)(result - (float)(a2 + (float)(a3 * a6))) * a5));
  return result;
}
