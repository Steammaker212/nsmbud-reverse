/* sub_6076FEC8
 * address: 0x6076FEC8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076FEC8(int a1)
{
  int result; // r0
  unsigned __int8 *v3; // r5

  FIELD_U32(a1, 1224) |= 0x20800u;
  FIELD_U32(a1, 1220) &= ~0x100000u;
  if ( FIELD_U32(a1, 9964) )
    FIELD_U32(a1, 1216) |= 0x200000u;
  v3 = (unsigned __int8 *)(a1 + 6904);
  result = FIELD_U8(a1, 6904);
  if ( (result & 0x18) != 0 )
  {
    sub_60762584(a1);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 20);
    result = *v3;
    if ( (result & 0x10) == 0 )
    {
      sub_6078667C(a1 + 688, 5);
      result = FIELD_U32(a1, 1228) | 0x4000;
      FIELD_U32(a1, 1228) = result;
    }
  }
  return result;
}
