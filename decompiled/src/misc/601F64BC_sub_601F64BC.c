/* sub_601F64BC
 * address: 0x601F64BC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F64BC(int a1, float a2)
{
  int v3; // r0
  int v4; // r0
  int result; // r0

  v3 = FIELD_U32(a1, 708);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v4 = sub_601FEE28(dword_60C8C188);
      a2 = sub_6016E8F8(v4);
      v3 = FIELD_U32(a1, 708);
    }
    result = v3 - 1;
    FIELD_U32(a1, 708) = result;
    if ( !result )
      return sub_601FA360(dword_60C8BF58, a2);
  }
  else
  {
    sub_601FA4F8(dword_60C8BF58);
    FIELD_U8(a1, 216) |= 2u;
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
