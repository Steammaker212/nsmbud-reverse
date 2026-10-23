/* sub_6047EE74
 * address: 0x6047EE74   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047EE74(int result, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r12

  v2 = FIELD_U32(result, 16);
  if ( v2 != result + 12 )
  {
    v3 = FIELD_U32(result, 24);
    v4 = a2 + 1;
    v5 = result + 12 - v3;
    result = v2 - v3;
    while ( --v4 >= 1 )
    {
      v2 = FIELD_U32(v2, 4);
      result = v2 - v3;
      if ( v2 - v3 == v5 )
        return result;
    }
    if ( result )
      return sub_60478344(result);
  }
  return result;
}
