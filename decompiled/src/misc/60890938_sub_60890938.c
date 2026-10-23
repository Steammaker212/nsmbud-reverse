/* sub_60890938
 * address: 0x60890938   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60890938(int result, int a2)
{
  int v2; // r3
  _DWORD *v3; // r0
  int v4; // t1

  if ( FIELD_U32(result, 2464) )
  {
    v2 = FIELD_U32(result, 2464);
    while ( v2 != a2 )
    {
      v2 = FIELD_U32(v2, 128);
      if ( !v2 )
      {
        v4 = FIELD_U32(result, 2468);
        v3 = (_DWORD *)(result + 2468);
        FIELD_U32(v4, 128) = a2;
        goto LABEL_7;
      }
    }
  }
  else
  {
    FIELD_U32(result, 2464) = a2;
    v3 = (_DWORD *)(result + 2468);
LABEL_7:
    *v3 = a2;
    FIELD_U32(a2, 128) = 0;
    return 0;
  }
  return result;
}
