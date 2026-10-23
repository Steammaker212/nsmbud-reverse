/* sub_6092994C
 * address: 0x6092994C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6092994C(_DWORD *a1)
{
  _DWORD *v1; // r4
  void *v2; // r0

  *(a1 - 7) = off_60C5DE84;
  v1 = a1 - 7;
  *a1 = off_60C5DEE8;
  v2 = (void *)a1[69];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    v1[75] = 0;
    v1[76] = 0;
  }
  v1[71] = &off_60C5E40C;
  v1[67] = &off_60C5E40C;
  v1[63] = &off_60C5E40C;
  v1[57] = &off_60C5E40C;
  v1[50] = &off_60C5E40C;
  v1[43] = &off_60C5E40C;
  return sub_60922E14(v1);
}
