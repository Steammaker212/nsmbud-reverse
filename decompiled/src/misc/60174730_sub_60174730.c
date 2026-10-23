/* sub_60174730
 * address: 0x60174730   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60174730(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C88BF4 & ~(1612138312 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C88BF4) )
  {
    dword_60C88BF0 = (int)&off_60BD4E08;
    _cxa_guard_release(dword_60C88BF4);
  }
  if ( a2 == &dword_60C88BF0 )
    return 1;
  else
    return sub_60174850(a2);
}
