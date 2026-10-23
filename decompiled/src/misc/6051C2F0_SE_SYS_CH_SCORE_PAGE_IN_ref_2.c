/* SE_SYS_CH_SCORE_PAGE_IN_ref_2
 * address: 0x6051C2F0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CH_SCORE_PAGE_IN_ref_2(int a1)
{
  FIELD_U8(a1, 4012) = 1;
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_CH_SCORE_PAGE_IN", 0, 1);
}
