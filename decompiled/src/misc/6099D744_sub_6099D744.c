/* sub_6099D744
 * address: 0x6099D744   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6099D744(int a1, int a2, float a3)
{
  if ( a3 >= 0.0 )
  {
    if ( a3 > 1.0 )
      a3 = 1.0;
  }
  else
  {
    a3 = 0.0;
  }
  return *(float *)(a2 + 4 * (int)(float)(a3 * (float)(FIELD_U8(a1, 3) - 1)));
}
