/* sub_604B67FC
 * address: 0x604B67FC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_604B67FC()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CA1DFC & ~(1615554576 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1DFC) )
  {
    dword_60CA1DF8 = (int)&off_60BFE03C;
    _cxa_guard_release(&dword_60CA1DFC);
  }
  return &dword_60CA1DF8;
}
