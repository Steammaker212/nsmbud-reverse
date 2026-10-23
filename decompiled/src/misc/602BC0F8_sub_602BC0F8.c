/* sub_602BC0F8
 * address: 0x602BC0F8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BC0F8(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)dword_60C91050 & ~(1613480216 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C91050) )
    {
      dword_60C9104C = (int)&off_60BE43EC;
      _cxa_guard_release(dword_60C91050);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60C9104C)(&dword_60C9104C, a2);
}
