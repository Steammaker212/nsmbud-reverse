/* sub_605C6C9C
 * address: 0x605C6C9C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605C6C9C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAFB3C & ~(1616669876 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFB3C) )
  {
    dword_60CAFB38 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CAFB3C);
  }
  return a2 == &dword_60CAFB38 || sub_60027FB0(a2);
}
