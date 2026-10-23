/* sub_601619C8
 * address: 0x601619C8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601619C8(int result, int a2)
{
  int v2; // r2
  _DWORD *v3; // r12
  _DWORD *v4; // r3
  _DWORD *v5; // r0
  int v6; // t1

  if ( a2 )
  {
    v2 = FIELD_U32(a2, 8);
    if ( v2 )
    {
      v3 = (_DWORD *)(v2 + 4);
    }
    else
    {
      v3 = (_DWORD *)(result + 4);
      if ( FIELD_U32(result, 4) != a2 )
      {
        v4 = (_DWORD *)(a2 + 4);
LABEL_7:
        if ( *v4 )
        {
          v5 = (_DWORD *)(*v4 + 8);
        }
        else
        {
          v6 = FIELD_U32(result, 8);
          v5 = (_DWORD *)(result + 8);
          if ( v6 != a2 )
            goto LABEL_11;
        }
        *v5 = FIELD_U32(a2, 8);
LABEL_11:
        FIELD_U32(a2, 4) = 0;
        FIELD_U32(a2, 8) = 0;
        return 0;
      }
    }
    v4 = (_DWORD *)(a2 + 4);
    *v3 = FIELD_U32(a2, 4);
    goto LABEL_7;
  }
  return result;
}
