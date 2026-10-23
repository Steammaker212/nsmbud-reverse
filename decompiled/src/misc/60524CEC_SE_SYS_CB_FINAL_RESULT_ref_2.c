/* SE_SYS_CB_FINAL_RESULT_ref_2
 * address: 0x60524CEC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CB_FINAL_RESULT_ref_2(_DWORD *a1)
{
  a1[1165] = 60;
  sub_60473DE4(a1 + 11, 1u, &dword_60CA9964, 0);
  a1[1166] = 1;
  sub_60528300(a1);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_CB_FINAL_RESULT", 0, 1);
}
