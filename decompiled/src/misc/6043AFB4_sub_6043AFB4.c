/* sub_6043AFB4
 * address: 0x6043AFB4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043AFB4(_DWORD *a1)
{
  void *v2; // r0

  *a1 = &off_60BFA9C4;
  v2 = (void *)a1[1];
  if ( v2 )
    operator_delete_8DE3FC(v2);
  return a1;
}
