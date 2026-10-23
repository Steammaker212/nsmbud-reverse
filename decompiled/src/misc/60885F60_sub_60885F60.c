/* sub_60885F60
 * address: 0x60885F60   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60885F60(_DWORD *result, int a2)
{
  if ( byte_60CC8018 )
  {
    *result = dword_60C5A974;
    result[1] = dword_60C5A974;
  }
  else
  {
    *result = a2;
    result[1] = a2;
  }
  return result;
}
