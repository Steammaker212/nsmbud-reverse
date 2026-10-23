/* sub_603D23F0
 * address: 0x603D23F0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603D23F0(int a1, int *a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C98DFC & ~(1614619656 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C98DFC) )
  {
    dword_60C98DF8 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C98DFC);
  }
  return a2 == &dword_60C98DF8 || sub_60027FB0(a2);
}
