/* sub_601774C8
 * address: 0x601774C8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601774C8(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int *v5; // r2
  int v6; // r3
  int v7; // lr
  int v8; // t1

  result = 0;
  v4 = FIELD_U32(a1, 1060);
  if ( v4 )
  {
    v5 = *(int **)(a1 + 1068);
    v6 = 4 * v4;
    while ( 1 )
    {
      v8 = *v5++;
      v7 = v8;
      if ( FIELD_U32(v8, 4) == FIELD_U32(a2, 4) )
        break;
      v6 -= 4;
      if ( !v6 )
        return result;
    }
    return FIELD_U32(v7, 8);
  }
  return result;
}
