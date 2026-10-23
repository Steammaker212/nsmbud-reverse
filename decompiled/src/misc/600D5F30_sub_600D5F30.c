/* sub_600D5F30
 * address: 0x600D5F30   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600D5F30()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C8439C & ~(1611489092 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8439C) )
  {
    dword_60C84398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C8439C);
  }
  return &dword_60C84398;
}
