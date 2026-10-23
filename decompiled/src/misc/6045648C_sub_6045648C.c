/* sub_6045648C
 * address: 0x6045648C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_6045648C(_WORD *result, __int16 a2, __int16 a3, int a4, __int16 a5, __int16 a6)
{
  result[96] = a2;
  result[97] = a3;
  if ( !a4 )
    a5 = -1;
  result[98] = a5;
  if ( !a4 )
    a6 = -1;
  result[99] = a6;
  return result;
}
