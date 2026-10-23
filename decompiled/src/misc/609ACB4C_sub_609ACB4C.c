/* sub_609ACB4C
 * address: 0x609ACB4C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609ACB4C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r5
  int v5; // r6
  int v6; // r7

  *a1 = off_60C611A4;
  sub_608DEB70(a1 + 2);
  v2 = a1[6];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 208;
      v6 = 272 * v3;
      do
      {
        sub_609175E4(v5 + v6);
        v6 -= 272;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    a1[5] = 0;
    a1[6] = 0;
  }
  return a1;
}
