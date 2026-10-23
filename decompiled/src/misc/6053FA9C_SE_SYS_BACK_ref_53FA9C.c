/* SE_SYS_BACK_ref_53FA9C
 * address: 0x6053FA9C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_BACK_ref_53FA9C(int a1)
{
  sub_60502548(a1 + 31800);
  FIELD_U16(a1, 32852) = 0;
  sub_6047EABC((_DWORD *)(a1 + 31840));
  sub_604741D8((_DWORD *)(a1 + 28128), 0, &dword_60CABA74, 0);
  FIELD_U8(a1, 34724) = 1;
  sub_60478680((int)"SE_SYS_BACK", 15);
  return sub_608169AC(dword_60CC6B68);
}
