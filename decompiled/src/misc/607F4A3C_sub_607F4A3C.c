/* sub_607F4A3C
 * address: 0x607F4A3C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607F4A3C()
{
  int result; // r0

  sub_60528260(dword_60C99E60 + 20);
  result = dword_60C99E60;
  FIELD_U8(dword_60C99E60, 8260) = 1;
  return result;
}
