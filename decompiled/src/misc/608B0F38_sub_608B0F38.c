/* sub_608B0F38
 * address: 0x608B0F38   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B0F38(_DWORD *result, int a2, float a3)
{
  int v3; // r1

  if ( a2 >= 4 )
  {
    result = (_DWORD *)*result;
    v3 = a2 - 4;
    if ( result[1] > v3 )
    {
      result = (_DWORD *)(*result + 4 * v3);
      *(float *)result = a3;
    }
  }
  return result;
}
