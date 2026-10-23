/* sub_604B66FC
 * address: 0x604B66FC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604B66FC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CA1DFC & ~(1615554324 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1DFC) )
  {
    dword_60CA1DF8 = (int)&off_60BFE03C;
    _cxa_guard_release(&dword_60CA1DFC);
  }
  if ( a2 == &dword_60CA1DF8 )
    return 1;
  if ( ((unsigned int)&dword_60CA1E04 & ~(1615554416 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CA1E04) )
    {
      dword_60CA1E00 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CA1E04);
    }
  }
  return a2 == &dword_60CA1E00;
}
