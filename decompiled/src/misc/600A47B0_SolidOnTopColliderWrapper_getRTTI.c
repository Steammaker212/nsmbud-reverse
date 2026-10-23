/* SolidOnTopColliderWrapper_getRTTI
 * address: 0x600A47B0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *SolidOnTopColliderWrapper_getRTTI()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82A70 & ~(1611286468 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82A70) )
  {
    dword_60C82A6C = (int)&off_60BC3210;
    _cxa_guard_release(&dword_60C82A70);
  }
  return &dword_60C82A6C;
}
