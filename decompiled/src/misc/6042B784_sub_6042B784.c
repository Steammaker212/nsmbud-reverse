/* sub_6042B784
 * address: 0x6042B784   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6042B784()
{
  int result; // r0

  dword_60C9C104 = 0;
  dword_60C9C108 = 0;
  dword_60C9C10C = 0;
  result = sead__ThreadUtil__ConvertPrioritySeadToPlatform(29);
  dword_60C9C100 = result;
  return result;
}
