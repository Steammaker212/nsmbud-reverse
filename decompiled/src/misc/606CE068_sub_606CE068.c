/* sub_606CE068
 * address: 0x606CE068   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CE068(int a1, int a2)
{
  char v2; // r12

  if ( a1 == a2 )
    return 1;
  if ( ((unsigned int)&dword_60CBB308 & ~(1617748104 << v2) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60CBB308) )
    {
      dword_60CBB304 = (int)&off_60C1CCEC;
      _cxa_guard_release(&dword_60CBB308);
    }
  }
  return (*(int (__fastcall **)(int *, int))dword_60CBB304)(&dword_60CBB304, a2);
}
