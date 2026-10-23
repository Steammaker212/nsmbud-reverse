/* sub_607692C0
 * address: 0x607692C0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607692C0(int a1)
{
  int result; // r0
  int v3; // [sp+4h] [bp-14h] BYREF

  if ( (FIELD_U8(a1, 1211) & 2) != 0 )
  {
    v3 = 0;
    sub_60773F88(a1, &v3, 0.1);
  }
  else
  {
    sub_60773F4C(a1);
  }
  result = FIELD_U8(a1, 1235);
  if ( (result & 8) == 0 )
  {
    result = sub_60793CA8(*(_DWORD *)(FIELD_U32(a1, 648) + 4));
    if ( result == 1 )
    {
      result = FIELD_U8(a1, 1234);
      if ( (result & 0x10) != 0 )
      {
        result = FIELD_U8(a1, 6902);
        if ( (result & 4) == 0 )
        {
          sub_60786D50(a1 + 688, 7);
          sub_60786D50(a1 + 688, 6);
          FIELD_U32(a1, 6900) |= 1u;
          FIELD_U32(a1, 9708) = 0;
          return Player_changeState(a1, &stru_60CBF81C, 1);
        }
      }
    }
  }
  return result;
}
