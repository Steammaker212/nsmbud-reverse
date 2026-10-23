/* sub_6082C874
 * address: 0x6082C874   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6082C874()
{
  int result; // r0

  dword_60CC6E0C = 0;
  dword_60CC6E10 = 0;
  dword_60CC6E14 = 0;
  result = sead__ThreadUtil__ConvertPrioritySeadToPlatform(19);
  dword_60CC6E08 = result;
  return result;
}
