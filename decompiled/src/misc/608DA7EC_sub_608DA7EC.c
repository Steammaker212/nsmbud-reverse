/* sub_608DA7EC
 * address: 0x608DA7EC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DA7EC(int a1, int a2)
{
  int v2; // r0
  int v3; // r3
  int v4; // r12
  int result; // r0
  int v6; // r1

  v2 = FIELD_U32(a1, 12);
  v3 = FIELD_U32(v2, 24);
  v4 = v2 + 20;
  result = 0;
  if ( v3 != v4 )
  {
    v6 = a2 + 16;
    while ( v3 - 128 != v6 )
    {
      v3 = FIELD_U32(v3, 4);
      if ( v3 == v4 )
        return result;
    }
    return 1;
  }
  return result;
}
