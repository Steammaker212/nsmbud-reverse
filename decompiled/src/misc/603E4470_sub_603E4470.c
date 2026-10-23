/* sub_603E4470
 * address: 0x603E4470   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603E4470(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C995C0 & ~(1614693512 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C995C0) )
  {
    dword_60C995BC = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995C0);
  }
  if ( a2 == &dword_60C995BC )
    return 1;
  if ( ((unsigned int)&dword_60C8D91C & ~(1614693604 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C8D91C) )
    {
      dword_60C8D918 = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60C8D91C);
    }
  }
  return a2 == &dword_60C8D918;
}
