/* sub_6037B4F4
 * address: 0x6037B4F4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037B4F4(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C96674 & ~(1614263572 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C96674) )
    {
      dword_60C96670 = (int)&off_60BE43EC;
      _cxa_guard_release(&dword_60C96674);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C96670)(&dword_60C96670, a2);
}
