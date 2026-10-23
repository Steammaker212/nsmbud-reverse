/* sub_60176548
 * address: 0x60176548   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60176548(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C88E3C & ~(1612146016 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88E3C) )
  {
    dword_60C88E38 = (int)&off_60BD4EC8;
    _cxa_guard_release(&dword_60C88E3C);
  }
  if ( a2 == &dword_60C88E38 )
    return 1;
  else
    return sub_601767E8(a2);
}
