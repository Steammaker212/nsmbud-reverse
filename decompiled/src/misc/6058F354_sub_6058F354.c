/* sub_6058F354
 * address: 0x6058F354   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6058F354(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAF62C & ~(1616442220 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF62C) )
  {
    dword_60CAF628 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CAF62C);
  }
  return a2 == &dword_60CAF628 || sub_60026DC8(a2);
}
