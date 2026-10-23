/* sub_606C407C
 * address: 0x606C407C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606C407C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBAB1C & ~(1617707156 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBAB1C) )
  {
    dword_60CBAB18 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBAB1C);
  }
  return a2 == &dword_60CBAB18 || sub_60027FB0(a2);
}
