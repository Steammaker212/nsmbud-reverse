/* sub_6016801C
 * address: 0x6016801C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016801C(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C88A78 & ~(1612087348 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A78) )
  {
    dword_60C88A74 = (int)&off_60BD4AD8;
    _cxa_guard_release(&dword_60C88A78);
  }
  if ( a2 == &dword_60C88A74 )
    return 1;
  else
    return sub_60168120(a2);
}
