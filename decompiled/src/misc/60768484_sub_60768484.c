/* sub_60768484
 * address: 0x60768484   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768484(int a1)
{
  int result; // r0
  _DWORD *v3; // r5

  v3 = (_DWORD *)(a1 + 9704);
  result = FIELD_U32(a1, 9704);
  if ( result == 1 )
  {
    FIELD_U32(a1, 124) = -1073741824;
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -2.0;
    sub_607612CC(a1, 0);
    return (int)sub_60766314(a1, &stru_60CBF37C, 0);
  }
  else if ( !result )
  {
    result = dword_60C9CF0C;
    if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 )
    {
      result = FIELD_U8(dword_60C9CF0C, 1406);
      if ( !FIELD_U8(dword_60C9CF0C, 1406) )
      {
        sub_60777C68(dword_60CBFA90);
        result = 1;
        *v3 = 1;
      }
    }
  }
  return result;
}
