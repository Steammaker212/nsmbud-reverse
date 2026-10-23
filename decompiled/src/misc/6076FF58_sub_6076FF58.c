/* sub_6076FF58
 * address: 0x6076FF58   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076FF58(int a1)
{
  int result; // r0

  if ( !FIELD_U32(a1, 9964) )
    FIELD_U32(a1, 1216) &= ~0x200000u;
  if ( (FIELD_U32(a1, 6908) & 0x2004) == 0x2004 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 15);
  if ( (FIELD_U8(a1, 1226) & 2) != 0 )
  {
    if ( sub_60786934(a1 + 688) != 1 || (FIELD_U8(a1, 6900) & 2) != 0 )
    {
      sub_60814E5C(a1 + 840);
      FIELD_U32(a1, 1224) &= ~0x20000u;
    }
    if ( FIELD_F32(a1, 124) <= 1.0 )
      FIELD_U32(a1, 1224) &= ~0x20000u;
  }
  result = FIELD_U32(a1, 1204) | 0x2000000;
  FIELD_U32(a1, 1204) = result;
  return result;
}
