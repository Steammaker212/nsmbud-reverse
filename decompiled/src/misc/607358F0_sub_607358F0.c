/* sub_607358F0
 * address: 0x607358F0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607358F0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBDE5C & ~(1618172168 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDE5C) )
  {
    dword_60CBDE58 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBDE5C);
  }
  return a2 == &dword_60CBDE58 || sub_60027FB0(a2);
}
