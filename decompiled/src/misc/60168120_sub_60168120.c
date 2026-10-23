/* sub_60168120
 * address: 0x60168120   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60168120(int *a1)
{
  char v1; // r12
  int v3; // r5

  if ( ((unsigned int)&dword_60C88A80 & ~(1612087608 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A80) )
  {
    dword_60C88A7C = (int)&off_60BC3170;
    _cxa_guard_release(&dword_60C88A80);
  }
  v3 = 1;
  if ( a1 != &dword_60C88A7C )
  {
    if ( ((unsigned int)&dword_60C803C0 & ~(1612087704 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C803C0) )
    {
      dword_60C803BC = (int)&off_60BC317C;
      _cxa_guard_release(&dword_60C803C0);
    }
    if ( a1 != &dword_60C803BC )
    {
      if ( ((unsigned int)&dword_60C803C8 & ~(1612087796 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C803C8) )
      {
        dword_60C803C4 = (int)&off_60BC3188;
        _cxa_guard_release(&dword_60C803C8);
      }
      if ( a1 != &dword_60C803C4 )
      {
        if ( ((unsigned int)&dword_60C803D0 & ~(1612087888 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
        {
          dword_60C803CC = (int)&off_60BC00A4;
          _cxa_guard_release(&dword_60C803D0);
        }
        return a1 == &dword_60C803CC;
      }
    }
  }
  return v3;
}
