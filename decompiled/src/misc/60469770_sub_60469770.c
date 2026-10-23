/* sub_60469770
 * address: 0x60469770   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60469770()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C9D4FC & ~(1615239044 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D4FC) )
  {
    dword_60C9D4F8 = (int)&off_60BFB4E4;
    _cxa_guard_release(&dword_60C9D4FC);
  }
  return &dword_60C9D4F8;
}
