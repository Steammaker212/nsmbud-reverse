/* sub_607FF614
 * address: 0x607FF614   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607FF614(int a1, int a2, float result)
{
  float v3; // s2
  float *v4; // r0

  if ( result == 0.0 )
    return 0.0;
  if ( FIELD_S32(a2, 36) <= 1 )
  {
    v4 = (float *)(a1 + 16);
    if ( result == 0.0 )
    {
      return 0.0;
    }
    else
    {
      v3 = -32.0;
      if ( result >= (float)-32.0 )
      {
        v3 = result;
        if ( result > 32.0 )
          v3 = 32.0;
      }
      *v4 = v3;
      return result - v3;
    }
  }
  return result;
}
