/* SE_SYS_CHANGE_MODE_RDASH_ref_2
 * address: 0x6053A490   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CHANGE_MODE_RDASH_ref_2(int a1)
{
  _DWORD *v2; // r6

  v2 = (_DWORD *)(a1 + 83520);
  if ( FIELD_U32(a1, 83520) == 1 )
    sub_60474420((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, FIELD_U32(a1, 54636), 0);
  *v2 = 0;
  FIELD_U32(a1, 83512) = FIELD_U32(a1, 16708);
  sub_604741D8(v2 - 17857, 0, &dword_60CAB48C, 0);
  FIELD_U8(a1, 83565) = 1;
  FIELD_U8(a1, 83576) = 1;
  sub_60502548(a1 + 15680);
  FIELD_U16(a1, 16732) = 0;
  sub_6047EABC((_DWORD *)(a1 + 15720));
  return sub_60478680((int)"SE_SYS_CHANGE_MODE_RDASH", 15);
}
