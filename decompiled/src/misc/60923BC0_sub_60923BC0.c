/* sub_60923BC0
 * address: 0x60923BC0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60923BC0(_DWORD *a1)
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
  {
    operator_delete_8DE3FC(v3);
    a1[3] = 0;
    a1[4] = 0;
  }
  return a1;
}
