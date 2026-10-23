/* sub_6060D8A8
 * address: 0x6060D8A8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6060D8A8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB2EE0 & ~(1616959680 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB2EE0) )
  {
    dword_60CB2EDC = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB2EE0);
  }
  return a2 == &dword_60CB2EDC || sub_60026DC8(a2);
}
