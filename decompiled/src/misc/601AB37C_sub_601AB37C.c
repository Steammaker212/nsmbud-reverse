/* sub_601AB37C
 * address: 0x601AB37C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601AB37C()
{
  int result; // r0

  result = sead__ThreadUtil__ConvertPrioritySeadToPlatform(18);
  dword_60C8A550 = result;
  dword_60C8A554 = 0;
  dword_60C8A558 = 2;
  return result;
}
