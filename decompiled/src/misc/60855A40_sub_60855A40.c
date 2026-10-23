/* sub_60855A40
 * address: 0x60855A40   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60855A40(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r6
  int v4; // r1
  _DWORD *v5; // r5

  v2 = (_DWORD *)a1[1];
  if ( v2 != a1 )
  {
    do
    {
      v3 = (_DWORD *)v2[1];
      if ( v2 != a1 )
      {
        v4 = *v3;
        *(_DWORD *)(*v2 + 4) = v3;
        *v3 = *v2;
        FIELD_U32(v4, 4) = v2;
        *v2 = v4;
      }
      if ( !*((_BYTE *)v2 + 20) )
      {
        v5 = v2 - 1;
        (*(void (__fastcall **)(_DWORD *))*(v2 - 1))(v2 - 1);
        sub_60855BF0(v5);
      }
      v2 = v3;
    }
    while ( v3 != a1 );
  }
  return a1;
}
