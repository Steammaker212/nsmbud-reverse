/* sub_60671DF4
 * address: 0x60671DF4   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60671DF4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB75B0 & ~(1617370844 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB75B0) )
  {
    dword_60CB75AC = (int)&off_60C158D8;
    _cxa_guard_release(&dword_60CB75B0);
  }
  if ( a2 == &dword_60CB75AC )
    return 1;
  if ( ((unsigned int)&dword_60CB73E0 & ~(1617370936 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB73E0) )
  {
    dword_60CB73DC = (int)&off_60C158E4;
    _cxa_guard_release(&dword_60CB73E0);
  }
  if ( a2 == &dword_60CB73DC )
    return 1;
  if ( ((unsigned int)&dword_60CB73E8 & ~(1617371028 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB73E8) )
  {
    dword_60CB73E4 = (int)&off_60C158F0;
    _cxa_guard_release(&dword_60CB73E8);
  }
  if ( a2 == &dword_60CB73E4 )
    return 1;
  if ( ((unsigned int)&dword_60CB73F0 & ~(1617371120 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB73F0) )
    {
      dword_60CB73EC = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CB73F0);
    }
  }
  return a2 == &dword_60CB73EC || sub_60027FB0(a2);
}
