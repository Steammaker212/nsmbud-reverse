/* default_ref
 * address: 0x609405A4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *default_ref()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CD09FC & ~(1620313528 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CD09FC) )
  {
    dword_60CD0A00 = (int)&sead__SafeStringBase__vtable;
    dword_60CD0A04 = (int)"default";
    _cxa_guard_release(&dword_60CD09FC);
  }
  return &dword_60CD0A00;
}
