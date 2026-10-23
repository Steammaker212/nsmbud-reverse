/* sub_6059CFC0
 * address: 0x6059CFC0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059CFC0(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CAFB3C & ~(1616498656 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CAFB3C) )
    {
      dword_60CAFB38 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CAFB3C);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CAFB38)(&dword_60CAFB38, a2);
}
