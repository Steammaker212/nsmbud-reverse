/* sub_608324DC
 * address: 0x608324DC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __cdecl sub_608324DC(float a)
{
  float v1; // s2

  if ( a <= 0.0 )
    return 0.0;
  v1 = 1.0;
  if ( a < 1.0 )
    return -(float)((float)((float)(a + a) * (float)((float)(a * a) - a)) - (float)(a * a));
  return v1;
}
