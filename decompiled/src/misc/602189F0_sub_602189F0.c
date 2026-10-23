/* sub_602189F0
 * address: 0x602189F0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602189F0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C8D3CC & ~(1612810760 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D3CC) )
  {
    dword_60C8D3C8 = (int)&off_60BD4E08;
    _cxa_guard_release(&dword_60C8D3CC);
  }
  return a2 == &dword_60C8D3C8 || sub_60174850(a2);
}
