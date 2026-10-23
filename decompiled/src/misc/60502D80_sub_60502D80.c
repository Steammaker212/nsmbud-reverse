/* sub_60502D80
 * address: 0x60502D80   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502D80(int a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r12
  int v7; // r3

  result = 0;
  v3 = FIELD_U32(a1, 56);
  v4 = a1 + 52;
  if ( v3 != a1 + 52 )
  {
    v5 = FIELD_U32(a1, 64);
    v6 = v4 - v5;
    v7 = v3 - v5;
    while ( !FIELD_U8(v7, 160) )
    {
      v3 = FIELD_U32(v3, 4);
      v7 = v3 - v5;
      if ( v3 - v5 == v6 )
        return result;
    }
    return 1;
  }
  return result;
}
