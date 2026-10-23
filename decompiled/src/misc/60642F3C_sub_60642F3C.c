/* sub_60642F3C
 * address: 0x60642F3C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60642F3C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB5A58 & ~(1617178452 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5A58) )
  {
    dword_60CB5A54 = (int)&off_60C13484;
    _cxa_guard_release(&dword_60CB5A58);
  }
  if ( a2 == &dword_60CB5A54 )
    return 1;
  if ( ((unsigned int)&dword_60CB5A60 & ~(1617178544 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5A60) )
  {
    dword_60CB5A5C = (int)&off_60C13490;
    _cxa_guard_release(&dword_60CB5A60);
  }
  if ( a2 == &dword_60CB5A5C )
    return 1;
  if ( ((unsigned int)&dword_60CB5A68 & ~(1617178636 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB5A68) )
    {
      dword_60CB5A64 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB5A68);
    }
  }
  return a2 == &dword_60CB5A64 || sub_60027FB0(a2);
}
