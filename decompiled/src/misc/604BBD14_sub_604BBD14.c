/* sub_604BBD14
 * address: 0x604BBD14   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BBD14(int result)
{
  int v1; // r1
  int v2; // r3
  int v3; // r2
  _DWORD *v4; // r1

  v1 = FIELD_U32(result, 6888);
  if ( v1 )
  {
    v2 = 0;
    v3 = FIELD_U32(result, 6892);
    if ( (v1 & 1) != 0 )
    {
      v2 = 1;
      result = FIELD_U32(v3, 36) | 1;
      FIELD_U32(v3, 36) = result;
    }
    if ( v1 != 1 )
    {
      result = v1 - v2;
      v4 = (_DWORD *)(v3 + 3584 * v2 + 3620);
      do
      {
        result -= 2;
        *(v4 - 896) |= 1u;
        *v4 |= 1u;
        v4 += 1792;
      }
      while ( result );
    }
  }
  return result;
}
