/* sub_608DD868
 * address: 0x608DD868   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DD868(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60C5BCF0;
  a1[11] = &off_60C5BD0C;
  sub_608AC2F0((int)a1);
  v2 = (void *)a1[12];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[12] = 0;
  }
  return sub_608AC2B0(a1);
}
