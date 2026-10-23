/* sub_60806308
 * address: 0x60806308   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60806308(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619026720 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  if ( a2 == &dword_60CC6AE4 )
    return 1;
  if ( ((unsigned int)&dword_60CC6AF0 & ~(1619026812 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CC6AF0) )
    {
      dword_60CC6AEC = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CC6AF0);
    }
  }
  return a2 == &dword_60CC6AEC;
}
