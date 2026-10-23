/* sub_600A45B8
 * address: 0x600A45B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600A45B8()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82A68 & ~(1611285964 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82A68) )
  {
    dword_60C82A64 = (int)&off_60BC317C;
    _cxa_guard_release(&dword_60C82A68);
  }
  return &dword_60C82A64;
}
