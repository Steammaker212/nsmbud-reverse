/* sub_6056924C
 * address: 0x6056924C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6056924C()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CAE5C0 & ~(1616286304 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE5C0) )
  {
    dword_60CAE5BC = (int)&off_60C01FFC;
    _cxa_guard_release(&dword_60CAE5C0);
  }
  return &dword_60CAE5BC;
}
