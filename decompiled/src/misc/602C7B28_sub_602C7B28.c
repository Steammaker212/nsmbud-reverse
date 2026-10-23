/* sub_602C7B28
 * address: 0x602C7B28   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C7B28(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60C91704 & ~(1613527880 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C91704) )
    {
      dword_60C91700 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C91704);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C91700)(&dword_60C91700, a2);
}
