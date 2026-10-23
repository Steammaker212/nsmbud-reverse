/* sub_60547014
 * address: 0x60547014   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60547014(_BYTE *result)
{
  if ( result[4743] )
    return (_BYTE *)sub_605492C4();
  if ( !result[4746] && !result[4742] )
  {
    result[4743] = 0;
    return (_BYTE *)sub_60549400();
  }
  return result;
}
