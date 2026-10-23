/* sub_608C9AF8
 * address: 0x608C9AF8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C9AF8(_DWORD *result, int a2)
{
  int v2; // lr
  _DWORD *v3; // r4
  int v4; // r3

  v2 = result[100];
  if ( v2 >= 1 )
  {
    if ( (v2 & 3) != 0 )
    {
      v3 = result + 33;
      v4 = 0;
      do
      {
        ++v4;
        *v3 = a2;
        v3 += 50;
      }
      while ( (v2 & 3) != v4 );
    }
    else
    {
      v4 = 0;
    }
    if ( (unsigned int)(v2 - 1) >= 3 )
    {
      result += 50 * v4 + 183;
      do
      {
        v4 += 4;
        *(result - 150) = a2;
        *(result - 100) = a2;
        *(result - 50) = a2;
        *result = a2;
        result += 200;
      }
      while ( v4 < v2 );
    }
  }
  return result;
}
