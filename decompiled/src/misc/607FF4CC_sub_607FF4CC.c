/* sub_607FF4CC
 * address: 0x607FF4CC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FF4CC(float a1, float a2, float a3, float a4)
{
  float v5; // s2

  if ( a1 == 0.0 )
    return 0.0;
  v5 = a3 - a2;
  if ( v5 == 0.0 )
    return 0.0 * a1;
  else
    return (float)((float)(a4 - a2) / v5) * a1;
}
