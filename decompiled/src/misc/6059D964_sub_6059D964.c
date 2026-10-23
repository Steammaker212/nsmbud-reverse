/* sub_6059D964
 * address: 0x6059D964   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059D964(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CAFB34 & ~(1616501124 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CAFB34) )
    {
      dword_60CAFB30 = (int)&off_60C07994;
      _cxa_guard_release(&dword_60CAFB34);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CAFB30)(&dword_60CAFB30, a2);
}
