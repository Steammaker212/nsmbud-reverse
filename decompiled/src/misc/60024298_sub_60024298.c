/* sub_60024298
 * address: 0x60024298   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60024298()
{
  int result; // r0

  result = dword_60C7F558;
  if ( dword_60C7F558 )
  {
    FIELD_U16(dword_60C7F558, 22) = 0;
    FIELD_U16(result, 24) = 0;
    FIELD_U16(result, 26) = 0;
  }
  return result;
}
