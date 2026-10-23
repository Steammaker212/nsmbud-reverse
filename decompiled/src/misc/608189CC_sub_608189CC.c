/* sub_608189CC
 * address: 0x608189CC   size: 1152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608189CC(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CC6BC8 & ~(1619102940 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BC8) )
  {
    dword_60CC6BC4 = (int)&off_60C2A1E4;
    _cxa_guard_release(&dword_60CC6BC8);
  }
  v4 = 1;
  if ( a2 != &dword_60CC6BC4 )
  {
    if ( ((unsigned int)&dword_60CC6BD0 & ~(1619103036 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BD0) )
    {
      dword_60CC6BCC = (int)&off_60C2A1F0;
      _cxa_guard_release(&dword_60CC6BD0);
    }
    if ( a2 != &dword_60CC6BCC )
    {
      if ( ((unsigned int)&dword_60CC6BD8 & ~(1619103128 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BD8) )
      {
        dword_60CC6BD4 = (int)&off_60C2A1FC;
        _cxa_guard_release(&dword_60CC6BD8);
      }
      if ( a2 != &dword_60CC6BD4 )
      {
        if ( ((unsigned int)&dword_60CC6BE0 & ~(1619103220 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BE0) )
        {
          dword_60CC6BDC = (int)&off_60BC00A4;
          _cxa_guard_release(&dword_60CC6BE0);
        }
        return a2 == &dword_60CC6BDC;
      }
    }
  }
  return v4;
}
