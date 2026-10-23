/* sub_6017B614
 * address: 0x6017B614   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6017B614(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60C88E88 & ~(1612166700 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C88E88) )
  {
    dword_60C88E84 = (int)&off_60BD4E08;
    _cxa_guard_release(dword_60C88E88);
  }
  return a2 == &dword_60C88E84 || sub_60174850(a2);
}
