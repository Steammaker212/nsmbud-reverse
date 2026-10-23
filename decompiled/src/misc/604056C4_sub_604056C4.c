/* sub_604056C4
 * address: 0x604056C4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604056C4(_DWORD *result, int a2)
{
  if ( a2 > 9 )
    a2 = 0;
  result[126] = a2;
  if ( result[94] != 8 )
    return (_DWORD *)sub_6078E608(*(_DWORD *)(result[4] + 12), a2);
  return result;
}
