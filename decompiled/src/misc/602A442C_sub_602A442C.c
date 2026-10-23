/* sub_602A442C
 * address: 0x602A442C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_602A442C(_WORD *result)
{
  if ( *result )
    --*result;
  if ( result[1] )
    --result[1];
  if ( result[2] )
    --result[2];
  if ( result[3] )
    --result[3];
  return result;
}
