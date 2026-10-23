/* sub_60611640
 * address: 0x60611640   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60611640()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB307C & ~(1616975444 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB307C) )
  {
    dword_60CB3078 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60CB307C);
  }
  return &dword_60CB3078;
}
