/* sub_60818FDC
 * address: 0x60818FDC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60818FDC(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CC6BE0 & ~(1619103740 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CC6BE0) )
    {
      dword_60CC6BDC = (int)&off_60BC00A4;
      _cxa_guard_release(&dword_60CC6BE0);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CC6BDC)(&dword_60CC6BDC, a2);
}
