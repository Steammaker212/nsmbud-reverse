/* sub_608B0748
 * address: 0x608B0748   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B0748(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r6

  v2 = a1 + 1;
  *a1 = &off_60C5AF70;
  v3 = (_DWORD *)a1[2];
  if ( v3 != v2 )
  {
    do
    {
      v4 = (_DWORD *)v3[1];
      sub_608B030C((int)(v3 - 105));
      v3 = v4;
    }
    while ( v4 != v2 );
  }
  return a1;
}
