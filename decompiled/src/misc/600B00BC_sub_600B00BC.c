/* sub_600B00BC
 * address: 0x600B00BC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600B00BC(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C830F8 & ~(1611333852 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C830F8) )
    {
      dword_60C830F4 = (int)&off_60BC321C;
      _cxa_guard_release(&dword_60C830F8);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C830F4)(&dword_60C830F4, a2);
}
