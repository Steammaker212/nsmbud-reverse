/* sub_603E483C
 * address: 0x603E483C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603E483C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C995C8 & ~(1614694484 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C995C8) )
  {
    dword_60C995C4 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995C8);
  }
  if ( a2 == &dword_60C995C4 )
    return 1;
  if ( ((unsigned int)&dword_60C8D91C & ~(1614694576 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8D91C) )
    {
      dword_60C8D918 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C8D91C);
    }
  }
  return a2 == &dword_60C8D918;
}
