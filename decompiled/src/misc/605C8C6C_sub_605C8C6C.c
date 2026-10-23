/* sub_605C8C6C
 * address: 0x605C8C6C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605C8C6C(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)&dword_60CB0C7C & ~(1616678020 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0C7C) )
  {
    dword_60CB0C78 = (int)&off_60BC317C;
    _cxa_guard_release(&dword_60CB0C7C);
  }
  v4 = 1;
  if ( a2 != &dword_60CB0C78 )
  {
    if ( ((unsigned int)&dword_60C803C8 & ~(1616678116 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803C8) )
    {
      dword_60C803C4 = (int)&off_60BC3188;
      _cxa_guard_release(&dword_60C803C8);
    }
    if ( a2 != &dword_60C803C4 )
    {
      if ( ((unsigned int)&dword_60C803D0 & ~(1616678208 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
      {
        dword_60C803CC = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C803D0);
      }
      return a2 == &dword_60C803CC;
    }
  }
  return v4;
}
