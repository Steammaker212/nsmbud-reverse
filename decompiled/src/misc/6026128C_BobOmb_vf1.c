/* BobOmb_vf1
 * address: 0x6026128C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *BobOmb_vf1()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C803F0 & ~(1613107872 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C803F0) )
  {
    dword_60C803EC = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C803F0);
  }
  return &dword_60C803EC;
}
