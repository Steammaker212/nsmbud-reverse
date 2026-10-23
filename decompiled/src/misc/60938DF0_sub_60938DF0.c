/* sub_60938DF0
 * address: 0x60938DF0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60938DF0(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  void *v4; // r0
  int v5; // r1
  int v6; // r2

  *a1 = off_60C5E2D4;
  v2 = a1[7];
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 28;
      v6 = 28 * v3;
      do
      {
        *(_DWORD *)(v5 + v6) = &off_60C5D81C;
        v6 -= 28;
      }
      while ( v6 );
    }
    operator_delete_8DE3FC(v4);
    a1[6] = 0;
    a1[7] = 0;
  }
  return a1;
}
