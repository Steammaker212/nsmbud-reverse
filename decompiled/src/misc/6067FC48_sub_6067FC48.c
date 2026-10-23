/* sub_6067FC48
 * address: 0x6067FC48   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6067FC48(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB807C & ~(1617427552 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB807C) )
  {
    dword_60CB8078 = (int)&off_60C169DC;
    _cxa_guard_release(&dword_60CB807C);
  }
  if ( a2 == &dword_60CB8078 )
    return 1;
  if ( ((unsigned int)dword_60CB7FB4 & ~(1617427644 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60CB7FB4) )
    {
      dword_60CB7FB0 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60CB7FB4);
    }
  }
  return a2 == &dword_60CB7FB0 || sub_60027FB0(a2);
}
