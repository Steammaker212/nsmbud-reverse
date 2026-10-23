/* sub_606CC408
 * address: 0x606CC408   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CC408(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CBB288 & ~(1617740832 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBB288) )
  {
    dword_60CBB284 = (int)&off_60C1CCEC;
    _cxa_guard_release(&dword_60CBB288);
  }
  if ( a2 == &dword_60CBB284 )
    return 1;
  else
    return sub_606CC6D8(a2);
}
