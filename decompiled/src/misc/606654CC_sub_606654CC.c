/* sub_606654CC
 * address: 0x606654CC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606654CC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB6B7C & ~(1617319140 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6B7C) )
  {
    dword_60CB6B78 = (int)&off_60BCFCD8;
    _cxa_guard_release(&dword_60CB6B7C);
  }
  return a2 == &dword_60CB6B78 || sub_60027FB0(a2);
}
