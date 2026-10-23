/* sub_6068A618
 * address: 0x6068A618   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6068A618(_DWORD *result, _DWORD *a2)
{
  *result = off_60C17410;
  if ( a2 )
  {
    result[2] = *a2;
    result[3] = a2[1];
    result[4] = a2[2];
    result[5] = a2[3];
    result[6] = a2[4];
    result[7] = a2[5];
    result[8] = a2[6];
    result[9] = a2[7];
    result[10] = a2[8];
    result[11] = a2[9];
    result[12] = a2[10];
    result[13] = a2[11];
  }
  return result;
}
