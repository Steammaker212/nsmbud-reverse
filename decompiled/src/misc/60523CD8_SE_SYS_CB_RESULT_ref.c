/* SE_SYS_CB_RESULT_ref
 * address: 0x60523CD8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CB_RESULT_ref(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 44), 2u, &dword_60CA996C, 0);
  sub_60528300(a1);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_CB_RESULT", 0, 1);
}
