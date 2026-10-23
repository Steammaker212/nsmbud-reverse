/* SE_SYS_NEW_OSHIRASE_ref
 * address: 0x604EDA9C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_NEW_OSHIRASE_ref(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA61A8, 0);
  sub_60807EF0(SoundSystem_instance, "SE_SYS_NEW_OSHIRASE", 0, 1);
  sub_604EE4B0(a1);
  SE_SYS_HURRY_UP_ref_8164F8(dword_60CC6B68, 10);
  FIELD_U8(a1, 10833) = 1;
  return 10833;
}
