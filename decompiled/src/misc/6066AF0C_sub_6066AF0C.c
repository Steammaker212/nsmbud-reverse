/* sub_6066AF0C
 * address: 0x6066AF0C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6066AF0C(int a1, int *a2)
{
  char v2; // r12
  int v4; // r5

  if ( ((unsigned int)dword_60CB6D28 & ~(1617342244 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CB6D28) )
  {
    dword_60CB6D24 = (int)&off_60BC317C;
    _cxa_guard_release(dword_60CB6D28);
  }
  v4 = 1;
  if ( a2 != &dword_60CB6D24 )
  {
    if ( ((unsigned int)&dword_60C803C8 & ~(1617342340 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803C8) )
    {
      dword_60C803C4 = (int)&off_60BC3188;
      _cxa_guard_release(&dword_60C803C8);
    }
    if ( a2 != &dword_60C803C4 )
    {
      if ( ((unsigned int)&dword_60C803D0 & ~(1617342432 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C803D0) )
      {
        dword_60C803CC = (int)&off_60BC00A4;
        _cxa_guard_release(&dword_60C803D0);
      }
      return a2 == &dword_60C803CC;
    }
  }
  return v4;
}
