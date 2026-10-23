/* sub_600A3568
 * address: 0x600A3568   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_600A3568()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60C82840 & ~(1611281788 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C82840) )
  {
    dword_60C8283C = (int)&off_60BC763C;
    _cxa_guard_release(&dword_60C82840);
  }
  return &dword_60C8283C;
}
