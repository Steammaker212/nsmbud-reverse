/* sub_60008B9C
 * address: 0x60008B9C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60008B9C(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[1];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    *a1 = 0;
    a1[1] = 0;
  }
  return a1;
}
