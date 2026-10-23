/* sub_60471D64
 * address: 0x60471D64   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60471D64(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60BFC9CC;
  v2 = (void *)a1[818];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[817] = 0;
    a1[818] = 0;
  }
  sub_608DEB70(a1 + 819);
  operator_delete(a1);
}
