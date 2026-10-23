/* sub_60855964
 * address: 0x60855964   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60855964(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r6
  int v5; // r1

  v2 = a1 + 3;
  *a1 = &off_60C5A1F0;
  v3 = (_DWORD *)a1[4];
  if ( v3 != v2 )
  {
    do
    {
      v4 = (_DWORD *)v3[1];
      if ( v3 != v2 )
      {
        v5 = *v4;
        *(_DWORD *)(*v3 + 4) = v4;
        *v4 = *v3;
        FIELD_U32(v5, 4) = v3;
        *v3 = v5;
      }
      sub_60855BF0(v3);
      v3 = v4;
    }
    while ( v4 != v2 );
  }
  return a1;
}
