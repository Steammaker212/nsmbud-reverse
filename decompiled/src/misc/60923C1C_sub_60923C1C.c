/* sub_60923C1C
 * address: 0x60923C1C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60923C1C(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  *a1 = &off_60C5D8F8;
  v2 = (void *)a1[6];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[5] = 0;
    a1[6] = 0;
  }
  v3 = (void *)a1[4];
  if ( v3 )
    operator_delete_8DE3FC(v3);
  operator_delete(a1);
}
