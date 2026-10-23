/* sub_6092882C
 * address: 0x6092882C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6092882C(_DWORD *a1)
{
  _DWORD *v1; // r4
  void *v2; // r0
  _DWORD *v3; // r0

  *(a1 - 7) = off_60C5DD74;
  v1 = a1 - 7;
  *a1 = off_60C5DDD8;
  v2 = (void *)a1[61];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    v1[67] = 0;
    v1[68] = 0;
  }
  v1[61] = &off_60C5E40C;
  v1[57] = &off_60C5E40C;
  v1[50] = &off_60C5E40C;
  v1[43] = &off_60C5E40C;
  v3 = sub_60922E14(v1);
  operator_delete(v3);
}
