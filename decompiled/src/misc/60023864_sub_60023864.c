/* sub_60023864
 * address: 0x60023864   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60023864()
{
  int result; // r0

  result = dword_60C7F558;
  if ( dword_60C7F558 )
  {
    sub_60023390(dword_60C7F558);
    result = (unsigned __int16)word_60C7F550;
    if ( word_60C7F550 != word_60C7F552 )
      word_60C7F552 = word_60C7F550;
  }
  return result;
}
