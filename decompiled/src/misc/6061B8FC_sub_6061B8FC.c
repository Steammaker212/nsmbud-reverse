/* sub_6061B8FC
 * address: 0x6061B8FC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6061B8FC(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB3528 & ~(1617017108 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3528) )
  {
    dword_60CB3524 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CB3528);
  }
  return a2 == &dword_60CB3524 || sub_60027FB0(a2);
}
