/* sub_604511B4
 * address: 0x604511B4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604511B4(_DWORD *result, int a2, int a3)
{
  if ( result[35] )
  {
    result[35] = 0;
    result[36] = -1;
  }
  result[35] = a2;
  result[36] = a3;
  if ( result[34] )
    return (_DWORD *)sub_6086B060(result + 8, FIELD_U32(a2, 40));
  return result;
}
