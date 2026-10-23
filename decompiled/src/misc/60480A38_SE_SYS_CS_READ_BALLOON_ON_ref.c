/* SE_SYS_CS_READ_BALLOON_ON_ref
 * address: 0x60480A38   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CS_READ_BALLOON_ON_ref(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 2060), 0, &dword_60C9ECD8, 0);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_CS_READ_BALLOON_ON", 0, 1);
}
