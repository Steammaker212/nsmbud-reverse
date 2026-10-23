/* sub_604B6870
 * address: 0x604B6870   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B6870(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CA1E04 & ~(1615554704 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CA1E04) )
    {
      dword_60CA1E00 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CA1E04);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CA1E00)(&dword_60CA1E00, a2);
}
