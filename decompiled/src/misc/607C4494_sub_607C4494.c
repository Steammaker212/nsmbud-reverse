/* sub_607C4494
 * address: 0x607C4494   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C4494(int a1)
{
  int v2; // r0
  int result; // r0

  sub_60774360(a1);
  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(int))loc_60771910)(a1);
  sub_60771250(a1);
  v2 = FIELD_U32(a1, 1224);
  FIELD_U32(a1, 1224) = v2 & 0xFFFFFFFB;
  if ( (FIELD_U8(a1, 6904) & 0x18) != 0 )
    FIELD_U32(a1, 1224) = v2 | 4;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 972))(a1);
  if ( !result )
  {
    result = FIELD_U32(a1, 9940);
    if ( result == 1 )
    {
      FIELD_U8(a1, 12052) = 0;
      FIELD_U32(a1, 12056) = 0;
      if ( !sub_60773F4C(a1) )
        FIELD_U32(a1, 1220) |= 0x800u;
      sub_607740F4(a1);
      result = a1 + 12068;
      if ( !FIELD_U8(a1, 12068) )
      {
        if ( (FIELD_U8(a1, 6902) & 8) != 0 )
          return result;
        *(_BYTE *)result = 1;
      }
      result = sub_6075F914((_DWORD *)a1);
      if ( result == 1 )
      {
        result = FIELD_U8(a1, 6902);
        if ( (result & 4) == 0 )
        {
          result = FIELD_U32(a1, 1224) | 0x2000000;
          FIELD_U32(a1, 1224) = result;
        }
      }
    }
    else if ( !result )
    {
      return sub_607C41D8(a1);
    }
  }
  return result;
}
