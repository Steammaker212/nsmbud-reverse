/* sub_6079A618
 * address: 0x6079A618   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079A618(int a1, int a2, int a3)
{
  _BYTE *v6; // r7
  int result; // r0

  FIELD_U8(a1, 6688) = -1;
  v6 = (_BYTE *)(a1 + 6688);
  FIELD_U32(a1, 1216) &= 0xFFFF3FFF;
  result = sub_6079D894(a1);
  if ( result )
  {
    FIELD_U32(a1, 1236) |= 0x800u;
    *v6 = FIELD_U8(result, 84);
    if ( (FIELD_U8(a1, 1207) & 2) != 0 && (FIELD_U8(a1, 1218) & 1) == 0 )
      JUMPOUT(0x6079AE3C);
    ((void (__fastcall *)(int, int, int, int))loc_6079AE3C)(a1, a2, a3, 1);
    result = sub_6079AFAC(a1, a2, a3);
    if ( result == 2 )
    {
      result = FIELD_U32(a1, 1216) | 0xC000;
    }
    else
    {
      if ( result != 1 )
        return result;
      result = FIELD_U32(a1, 1216) | 0x4000;
    }
    FIELD_U32(a1, 1216) = result;
  }
  return result;
}
