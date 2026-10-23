/* sub_608C5534
 * address: 0x608C5534   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608C5534()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC95F8 & ~(1619809608 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC95F8) )
  {
    dword_60CC94B8 = (int)off_60C5B300;
    sub_608D08A8(&unk_60CC94C0);
    nn__os__InitializeMutex(&unk_60CC95E0, 1, 0);
    byte_60CC95F4 = 0;
    byte_60CC95F5 = 0;
    sub_60000288();
    _cxa_guard_release(&dword_60CC95F8);
  }
  return &dword_60CC94B8;
}
