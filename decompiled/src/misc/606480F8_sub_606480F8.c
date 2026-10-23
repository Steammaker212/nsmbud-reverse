/* sub_606480F8
 * address: 0x606480F8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606480F8(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB5F9C & ~(1617199376 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB5F9C) )
  {
    dword_60CB5F98 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB5F9C);
  }
  return a2 == &dword_60CB5F98 || sub_60027FB0(a2);
}
