/* sub_6042F070
 * address: 0x6042F070   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042F070(_DWORD *a1)
{
  nn__mii__Database *v2; // r5
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  *a1 = off_60BFA5D0;
  v2 = (nn__mii__Database *)(a1 + 1372);
  nn__mii__Database__Finalize((nn__mii__Database *)(a1 + 1372));
  v3 = (void *)a1[5];
  if ( v3 )
  {
    operator_delete_8DE3FC(v3);
    a1[4] = 0;
    a1[5] = 0;
  }
  v4 = (void *)a1[8];
  if ( v4 )
  {
    operator_delete_8DE3FC(v4);
    a1[7] = 0;
    a1[8] = 0;
  }
  v5 = (void *)a1[11];
  if ( v5 )
  {
    operator_delete_8DE3FC(v5);
    a1[10] = 0;
    a1[11] = 0;
  }
  nn__mii__Database__dtor(v2);
  return sead__IDisposer__dtor(a1);
}
