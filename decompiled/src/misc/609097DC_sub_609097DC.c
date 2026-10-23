/* sub_609097DC
 * address: 0x609097DC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609097DC(int a1, int a2)
{
  int v2; // r2
  int v3; // lr
  int v4; // r12
  int result; // r0

  v2 = FIELD_U32(a1, 200);
  if ( v2 == a1 + 196 )
    return 0;
  v3 = FIELD_U32(a1, 208);
  v4 = a1 + 196 - v3;
  result = v2 - v3;
  while ( FIELD_U32(result, 12) != a2 )
  {
    v2 = FIELD_U32(v2, 4);
    result = v2 - v3;
    if ( v2 - v3 == v4 )
      return 0;
  }
  return result;
}
