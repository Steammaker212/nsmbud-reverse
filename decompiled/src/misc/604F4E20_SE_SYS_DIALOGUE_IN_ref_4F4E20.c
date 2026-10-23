/* SE_SYS_DIALOGUE_IN_ref_4F4E20
 * address: 0x604F4E20   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DIALOGUE_IN_ref_4F4E20(_DWORD *a1)
{
  sub_60502548(a1 + 1887);
  sub_60473DE4(a1 + 10, 0, &dword_60CA67D4, 0);
  sub_604F7AB4(a1[2409], a1[2407], a1[2408]);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_DIALOGUE_IN", 0, 1);
}
