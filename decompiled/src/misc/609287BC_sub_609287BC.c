/* sub_609287BC
 * address: 0x609287BC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609287BC(_DWORD *a1)
{
  void *v2; // r0
  _DWORD *v3; // r0

  *a1 = off_60C5DD74;
  a1[7] = off_60C5DDD8;
  v2 = (void *)a1[68];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[67] = 0;
    a1[68] = 0;
  }
  a1[61] = &off_60C5E40C;
  a1[57] = &off_60C5E40C;
  a1[50] = &off_60C5E40C;
  a1[43] = &off_60C5E40C;
  v3 = sub_60922E14(a1);
  operator_delete(v3);
}
