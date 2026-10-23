/* sub_60818F44
 * address: 0x60818F44   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60818F44(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CC6BD8 & ~(1619103588 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CC6BD8) )
    {
      dword_60CC6BD4 = (int)&off_60C2A1FC;
      _cxa_guard_release(&dword_60CC6BD8);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CC6BD4)(&dword_60CC6BD4, a2);
}
