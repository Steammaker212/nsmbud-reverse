/* sub_601549C4
 * address: 0x601549C4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601549C4(int a1, float a2)
{
  int result; // r0
  _DWORD *v5; // r5
  int v6; // r1

  v5 = (_DWORD *)(a1 + 5532);
  result = FIELD_U32(a1, 5532);
  if ( !result )
  {
    result = a1 + 5416;
    if ( FIELD_U8(a1, 5416) )
    {
      result = sub_6014A2B8(result);
      if ( result )
      {
        v6 = FIELD_U32(result, 144);
        if ( !FIELD_U8(v6, 19) )
        {
          **(_DWORD **)(a1 + 2204) = FIELD_U32(a1, 5436);
          *(_DWORD *)(FIELD_U32(a1, 2204) + 4) = FIELD_U32(a1, 5440);
          *v5 = FIELD_U32(v6, 8);
          FIELD_F32(result, 416) = a2;
          return sub_601658F0();
        }
      }
    }
  }
  return result;
}
