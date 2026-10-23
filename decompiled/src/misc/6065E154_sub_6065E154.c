/* sub_6065E154
 * address: 0x6065E154   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6065E154(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60CB676C & ~(1617289580 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB676C) )
  {
    dword_60CB6768 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB676C);
  }
  return a2 == &dword_60CB6768 || sub_60026DC8(a2);
}
