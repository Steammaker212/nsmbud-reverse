/* sub_60686210
 * address: 0x60686210   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60686210(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB8394 & ~(1617453608 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB8394) )
  {
    dword_60CB8390 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB8394);
  }
  return a2 == &dword_60CB8390 || sub_60026DC8(a2);
}
