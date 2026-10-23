/* sub_606BA840
 * address: 0x606BA840   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606BA840()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CB587C & ~(1617668180 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CB587C) )
  {
    dword_60CB5878 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB587C);
  }
  return &dword_60CB5878;
}
