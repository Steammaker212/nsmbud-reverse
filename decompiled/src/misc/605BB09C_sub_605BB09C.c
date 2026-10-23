/* sub_605BB09C
 * address: 0x605BB09C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605BB09C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB06FC & ~(1616621744 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB06FC) )
  {
    dword_60CB06F8 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB06FC);
  }
  return &dword_60CB06F8;
}
