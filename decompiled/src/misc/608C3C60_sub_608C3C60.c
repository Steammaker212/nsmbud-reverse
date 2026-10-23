/* sub_608C3C60
 * address: 0x608C3C60   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_608C3C60()
{
  char v0; // r12

  if ( ((unsigned int)&dword_60CC93B0 & ~(1619803252 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60CC93B0) )
  {
    dword_60CC90A0 = (int)off_60C5B2BC;
    sub_608D08A8(&unk_60CC90A8);
    nn__os__InitializeMessageQueue(&unk_60CC91C8, &unk_60CC91F8, 32);
    nn__os__InitializeMutex(&unk_60CC927C, 1, 0);
    nn__os__InitializeMutex(&unk_60CC9290, 1, 0);
    dword_60CC92A4 = (int)&dword_60CC92A4;
    dword_60CC92A8 = (int)&dword_60CC92A4;
    dword_60CC92AC = (int)&dword_60CC92AC;
    dword_60CC92B0 = (int)&dword_60CC92AC;
    byte_60CC92D0 = 0;
    byte_60CC92D1 = 0;
    dword_60CC92F8 = 0;
    byte_60CC92FC = 0;
    dword_60CC9300 = 0;
    byte_60CC9304 = 0;
    dword_60CC92E4 = 0;
    dword_60CC92E0 = 0;
    dword_60CC92DC = 0;
    dword_60CC92D8 = 0;
    dword_60CC9308 = (int)&dword_60CC9308;
    dword_60CC930C = (int)&dword_60CC9308;
    dword_60CC9310 = 0;
    dword_60CC9314 = (int)&dword_60CC9314;
    dword_60CC9318 = (int)&dword_60CC9314;
    nn__os__InitializeMutex(&unk_60CC931C, 1, 0);
    memset(&unk_60CC9330, 0, 96);
    dword_60CC9390 = (int)&dword_60CC9390;
    dword_60CC9394 = (int)&dword_60CC9390;
    nn__os__InitializeMutex(&unk_60CC9398, 1, 0);
    dword_60CC93AC = 0;
    sub_60000288();
    _cxa_guard_release(&dword_60CC93B0);
  }
  return &dword_60CC90A0;
}
