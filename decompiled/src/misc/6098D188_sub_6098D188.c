/* sub_6098D188
 * address: 0x6098D188   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098D188(int a1, int a2)
{
  int result; // r0
  bool v4; // zf

  result = FIELD_U8(a1, 124);
  if ( result )
  {
    result = FIELD_U8(a1, 125);
    if ( !FIELD_U8(a1, 125) )
    {
      result = FIELD_U8(a1, 122);
      v4 = result == 0;
      if ( FIELD_U8(a1, 122) )
      {
        result = FIELD_U8(a1, 123);
        v4 = result == 2;
      }
      if ( !v4 )
      {
        *(_DWORD *)(FIELD_U32(a1, 52) + 224) = a2;
        (*(void (__fastcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 24) + 48))(
          FIELD_U32(a1, 24),
          FIELD_U32(a1, 52),
          FIELD_U32(a2, 16) + 8);
        sub_6097F554(FIELD_U32(a1, 52));
        result = FIELD_U32(a1, 52);
        FIELD_U32(result, 224) = 0;
      }
    }
  }
  return result;
}
