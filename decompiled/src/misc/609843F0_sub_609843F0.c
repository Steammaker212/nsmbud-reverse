/* sub_609843F0
 * address: 0x609843F0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609843F0(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r7

  result = FIELD_U8(a2, 228);
  if ( !FIELD_U8(a2, 228) )
  {
    v7 = ((int (__fastcall *)(_DWORD, int, int))loc_60997C48)(FIELD_U32(a1, 232), a1, a2);
    if ( v7 )
    {
      sub_609981B8(FIELD_U32(a1, 232), a1, a1 + 240, v7, a2);
      sub_608620F4(a1, a2, a3);
      return sub_60998240(FIELD_U32(a1, 232), v7);
    }
    else
    {
      return sub_608620F4(a1, a2, a3);
    }
  }
  return result;
}
