/* sub_6080E4E0
 * address: 0x6080E4E0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6080E4E0(float a1, float a2, float a3, float a4, float a5)
{
  if ( a2 == a3 )
    return (float)(a4 + a5) * 0.5;
  else
    return (float)((float)((float)(a4 - a5) * a1) / (float)(a2 - a3))
         + (float)((float)((float)(a2 * a5) - (float)(a3 * a4)) / (float)(a2 - a3));
}
