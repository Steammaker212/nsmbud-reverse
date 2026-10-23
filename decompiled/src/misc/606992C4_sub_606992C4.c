/* sub_606992C4
 * address: 0x606992C4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606992C4(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB94CC & ~(1617531612 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB94CC) )
  {
    dword_60CB94C8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB94CC);
  }
  return a2 == &dword_60CB94C8 || sub_60026DC8(a2);
}
