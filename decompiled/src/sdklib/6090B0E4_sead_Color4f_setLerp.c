/* sead_Color4f_setLerp
 * address: 0x6090B0E4   size: 120   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sead_Color4f_setLerp(float *this, float *color2, float *lerp, float a4)
{
  if ( a4 >= 0.0 )
  {
    if ( a4 > 1.0 )
      a4 = 1.0;
  }
  else
  {
    a4 = 0.0;
  }
  *(this + 3) = color2[3] + (float)(a4 * (float)(lerp[3] - color2[3]));
  *this = *color2 + (float)(a4 * (float)(*lerp - *color2));
  *(this + 1) = color2[1] + (float)(a4 * (float)(lerp[1] - color2[1]));
  *(this + 2) = color2[2] + (float)(a4 * (float)(lerp[2] - color2[2]));
  return this;
}
