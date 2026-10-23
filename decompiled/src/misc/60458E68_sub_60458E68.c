/* sub_60458E68
 * address: 0x60458E68   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60458E68(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60C9CF14 & ~(1615171200 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
  {
    dword_60C9CF10 = (int)&off_60BD84A8;
    _cxa_guard_release(&dword_60C9CF14);
  }
  v4 = 1;
  if ( a2 != &dword_60C9CF10 )
  {
    if ( ((unsigned int)&dword_60C8C22C & ~(1615171296 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C22C) )
    {
      dword_60C8C228 = (int)&off_60BD84B4;
      _cxa_guard_release(&dword_60C8C22C);
    }
    if ( a2 != &dword_60C8C228 )
    {
      if ( ((unsigned int)&dword_60C8C234 & ~(1615171388 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C234) )
      {
        dword_60C8C230 = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C8C234);
      }
      return a2 == &dword_60C8C230;
    }
  }
  return v4;
}
