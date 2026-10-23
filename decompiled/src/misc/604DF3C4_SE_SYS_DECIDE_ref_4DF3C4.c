/* SE_SYS_DECIDE_ref_4DF3C4
 * address: 0x604DF3C4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DECIDE_ref_4DF3C4(int a1)
{
  sub_604741D8((_DWORD *)(a1 + 44), 0, &dword_60CA508C, 0);
  FIELD_U8(a1, 6297) = 1;
  return sub_60807FC0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1048577);
}
