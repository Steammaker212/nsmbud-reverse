/* sub_604F3B84
 * address: 0x604F3B84   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F3B84(int a1)
{
  int v2; // r4
  unsigned int v3; // r0

  v2 = 0;
  v3 = FIELD_U32(a1, 47116) - 1;
  if ( v3 >= 0xA )
    v3 = 0;
  if ( *(_DWORD *)(dword_60CC6D78 + 4 * v3 + 98488) != 14
    || FIELD_U8(a1, 58813) && sub_60405B04(a1 + 56124)
    || FIELD_U8(a1, 61801) && sub_60405B04(a1 + 59112)
    || FIELD_U8(a1, 64789) && sub_60405B04(a1 + 62100)
    || FIELD_U8(a1, 67777) && sub_60405B04(a1 + 65088)
    || FIELD_U8(a1, 70765) && sub_60405B04(a1 + 68076) )
  {
    return v2;
  }
  if ( !FIELD_U8(a1, 73753) )
    return 1;
  if ( !sub_60405B04(a1 + 71064) )
    return 1;
  return v2;
}
