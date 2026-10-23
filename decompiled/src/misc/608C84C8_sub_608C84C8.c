/* sub_608C84C8
 * address: 0x608C84C8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C84C8(_DWORD *result)
{
  int i; // r1

  for ( i = result[46]; i; i = FIELD_U32(i, 32) )
    FIELD_U32(i, 28) = 3;
  result[46] = 0;
  result[47] = 0;
  result[48] = 0;
  return result;
}
