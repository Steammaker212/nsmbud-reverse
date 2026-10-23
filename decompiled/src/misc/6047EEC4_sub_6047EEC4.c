/* sub_6047EEC4
 * address: 0x6047EEC4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047EEC4(int result, int a2, float a3)
{
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r12

  v3 = FIELD_U32(result, 16);
  if ( v3 != result + 12 )
  {
    v4 = FIELD_U32(result, 24);
    v5 = a2 + 1;
    v6 = result + 12 - v4;
    result = v3 - v4;
    while ( --v5 >= 1 )
    {
      v3 = FIELD_U32(v3, 4);
      result = v3 - v4;
      if ( v3 - v4 == v6 )
        return result;
    }
    if ( result )
    {
      if ( FIELD_U32(result, 164) == 4 )
        FIELD_U8(result, 168) = 1;
      return sub_6047823C((_DWORD *)result, a3);
    }
  }
  return result;
}
