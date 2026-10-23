/* sub_605EE238
 * address: 0x605EE238   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605EE238()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB1E64 & ~(1616831052 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1E64) )
  {
    dword_60CB1E60 = (int)&off_60BDBC48;
    _cxa_guard_release(&dword_60CB1E64);
  }
  return &dword_60CB1E60;
}
