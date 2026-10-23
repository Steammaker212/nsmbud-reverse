/* sub_6002420C
 * address: 0x6002420C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6002420C()
{
  int result; // r0

  result = dword_60C7F558;
  if ( dword_60C7F558 )
  {
    FIELD_U8(dword_60C7F558, 18) = 1;
    return sub_608168E4(dword_60CC6B68);
  }
  return result;
}
