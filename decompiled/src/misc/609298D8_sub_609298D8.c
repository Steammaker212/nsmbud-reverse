/* sub_609298D8
 * address: 0x609298D8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609298D8(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60C5DE84;
  a1[7] = off_60C5DEE8;
  v2 = (void *)a1[76];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[75] = 0;
    a1[76] = 0;
  }
  a1[71] = &off_60C5E40C;
  a1[67] = &off_60C5E40C;
  a1[63] = &off_60C5E40C;
  a1[57] = &off_60C5E40C;
  a1[50] = &off_60C5E40C;
  a1[43] = &off_60C5E40C;
  return sub_60922E14(a1);
}
