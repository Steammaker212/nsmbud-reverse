/* sub_605AF340
 * address: 0x605AF340   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AF340(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CB02AC & ~(1616573280 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB02AC) )
    {
      dword_60CB02A8 = (int)&off_60C08AD0;
      _cxa_guard_release(&dword_60CB02AC);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB02A8)(&dword_60CB02A8, a2);
}
