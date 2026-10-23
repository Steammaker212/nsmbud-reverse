/* sub_60573148
 * address: 0x60573148   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60573148(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CAEA5C & ~(1616327008 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEA5C) )
  {
    dword_60CAEA58 = (int)&off_60C02538;
    _cxa_guard_release(&dword_60CAEA5C);
  }
  return a2 == &dword_60CAEA58 || sub_6056A434(a2);
}
