/* SE_SYS_PAUSE_ref_4CA010
 * address: 0x604CA010   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_PAUSE_ref_4CA010(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 5880), 0, &dword_60CA4D68, 0);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_PAUSE", 0, 1);
}
