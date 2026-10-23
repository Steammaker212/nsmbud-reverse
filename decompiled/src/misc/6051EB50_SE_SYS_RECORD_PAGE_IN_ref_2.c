/* SE_SYS_RECORD_PAGE_IN_ref_2
 * address: 0x6051EB50   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_RECORD_PAGE_IN_ref_2(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA8FDC, 0);
  return sub_60807EF0(SoundSystem_instance, "SE_SYS_RECORD_PAGE_IN", 0, 1);
}
