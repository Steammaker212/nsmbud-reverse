/* sub_608534F8
 * address: 0x608534F8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608534F8(int result)
{
  int v1; // r12
  int v2; // r2
  int v3; // r1

  if ( (FIELD_U32(result, 8) & 0x14) == 0x14 )
  {
    v1 = FIELD_U32(result, 28);
    v2 = 0;
    while ( v2 < v1 )
    {
      v3 = *(_DWORD *)(result + 12 + 4 * v2++);
      if ( v3 == 2 )
        goto LABEL_8;
    }
    if ( v1 > 3 )
      return result;
    *(_DWORD *)(result + 4 * v1 + 12) = 2;
    v2 = FIELD_U32(result, 28) + 1;
LABEL_8:
    FIELD_U32(result, 28) = v2;
  }
  return result;
}
