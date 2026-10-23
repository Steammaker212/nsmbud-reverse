/* nn__atk__SoundActor__SetPlayableSoundCount
 * address: 0x608A97D0   size: 16   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__SoundActor__SetPlayableSoundCount(int a1, int a2, int a3)
{
  return nn__atk__detail__ExternalSoundPlayer__SetPlayableSoundCount(*(_DWORD *)(a1 + 4 * a2 + 72), a3);
}
