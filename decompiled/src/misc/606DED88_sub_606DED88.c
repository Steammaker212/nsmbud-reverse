/* sub_606DED88
 * address: 0x606DED88   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606DED88()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CBBC90 & ~(1617816988 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CBBC90) )
  {
    dword_60CBBC8C = (int)&off_60C1ED70;
    _cxa_guard_release(&dword_60CBBC90);
  }
  return &dword_60CBBC8C;
}
