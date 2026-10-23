/* sub_600F8D70
 * address: 0x600F8D70   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600F8D70(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C85C3C & ~(1611632008 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C85C3C) )
  {
    dword_60C85C38 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C85C3C);
  }
  return a2 == &dword_60C85C38 || sub_60027FB0(a2);
}
