/* sub_608ED5D0
 * address: 0x608ED5D0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608ED5D0(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r7
  int v5; // r4
  int v6; // r6

  v2 = a1 + 1;
  *a1 = &off_60C5C5D0;
  v3 = (_DWORD *)a1[2];
  if ( v3 != v2 )
  {
    v4 = v3;
    do
    {
      v5 = v3[2];
      v4 = (_DWORD *)v4[1];
      if ( FIELD_U8(v5, 56) )
      {
        v6 = FIELD_U32(v5, 28);
        if ( v6 )
        {
          FIELD_U32(v5, 28) = 0;
          sead__ListNode__erase((_DWORD *)(v5 + 16));
          --FIELD_U32(v6, 8);
        }
        FIELD_U8(v5, 56) = 0;
      }
      v3 = v4;
    }
    while ( v4 != v2 );
  }
  return a1;
}
