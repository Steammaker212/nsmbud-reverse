/* sub_60443FC4
 * address: 0x60443FC4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60443FC4()
{
  int result; // r0

  result = sead__ThreadUtil__ConvertPrioritySeadToPlatform(17);
  dword_60C9CD50 = result;
  return result;
}
