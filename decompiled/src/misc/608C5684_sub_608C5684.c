/* sub_608C5684
 * address: 0x608C5684   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608C5684(int a1, int a2)
{
  float result; // s0
  float v3; // s0

  if ( a2 == 127 )
  {
    FIELD_U32(a1, 8) = 1199570688;
    return 65535.0;
  }
  else if ( a2 == 126 )
  {
    FIELD_F32(a1, 8) = 24.0;
    return 24.0;
  }
  else
  {
    if ( a2 > 49 )
      v3 = 60.0 / (float)(126 - a2);
    else
      v3 = (float)((2 * a2) | 1) * 0.0078125;
    result = v3 / 5.0;
    FIELD_F32(a1, 8) = result;
  }
  return result;
}
