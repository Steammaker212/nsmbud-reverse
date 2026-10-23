/* SE_SYS_DECIDE_ref_49B5E4
 * address: 0x6049B5E4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DECIDE_ref_49B5E4(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA07C8, 0);
  sub_60807EF0(SoundSystem_instance, "SE_SYS_DECIDE", 0, 1);
  FIELD_U8(a1, 5350) = 1;
  FIELD_U8(a1, 5354) = 1;
  return 5354;
}
