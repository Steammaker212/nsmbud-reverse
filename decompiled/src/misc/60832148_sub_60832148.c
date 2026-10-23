/* sub_60832148
 * address: 0x60832148   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60832148()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC7274 & ~(1619206492 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7274) )
  {
    dword_60CC7270 = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60CC7274);
  }
  return &dword_60CC7270;
}
