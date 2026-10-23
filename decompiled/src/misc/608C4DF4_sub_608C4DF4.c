/* sub_608C4DF4
 * address: 0x608C4DF4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608C4DF4()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC94B4 & ~(1619807752 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC94B4) )
  {
    dword_60CC93B4 = (int)&dword_60CC93B4;
    dword_60CC93B8 = (int)&dword_60CC93B4;
    dword_60CC93BC = (int)&dword_60CC93BC;
    dword_60CC93C0 = (int)&dword_60CC93BC;
    dword_60CC93C4 = (int)&dword_60CC93C4;
    dword_60CC93C8 = (int)&dword_60CC93C4;
    byte_60CC93CC = 0;
    nn__os__InitializeMutex(&unk_60CC93D0, 1, 0);
    nn__os__InitializeMessageQueue(&unk_60CC93E4, &unk_60CC9414, 32);
    sub_608D2BD8(&unk_60CC9494);
    sub_60000288();
    _cxa_guard_release(&dword_60CC94B4);
  }
  return &dword_60CC93B4;
}
