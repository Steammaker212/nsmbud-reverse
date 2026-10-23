/* sub_60619484
 * address: 0x60619484   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60619484(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CB33E8 & ~(1617007780 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CB33E8) )
    {
      dword_60CB33E4 = (int)&off_60BE24D4;
      _cxa_guard_release(&dword_60CB33E8);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CB33E4)(&dword_60CB33E4, a2);
}
