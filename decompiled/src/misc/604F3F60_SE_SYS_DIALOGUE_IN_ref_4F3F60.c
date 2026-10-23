/* SE_SYS_DIALOGUE_IN_ref_4F3F60
 * address: 0x604F3F60   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DIALOGUE_IN_ref_4F3F60(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA67A4, 0);
  sub_60473DE4((_DWORD *)(a1 + 3596), 0, &dword_60CA67EC, 0);
  FIELD_U8(a1, 7142) = 0;
  FIELD_U8(a1, 7142) = FIELD_U8(dword_60CC6D78, 20) ^ 1;
  sub_60807EF0(SoundSystem_instance, "SE_SYS_DIALOGUE_IN", 0, 1);
  return SE_SYS_HURRY_UP_ref_8164F8(dword_60CC6B68, 4);
}
