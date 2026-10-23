/* sub_60929058
 * address: 0x60929058   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60929058(_DWORD *a1)
{
  _DWORD *v1; // r4
  void *v2; // r0
  void *v3; // r0
  _DWORD *v4; // r0

  *(a1 - 7) = off_60C5DDFC;
  v1 = a1 - 7;
  *a1 = off_60C5DE60;
  v2 = (void *)a1[74];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    v1[80] = 0;
    v1[81] = 0;
  }
  v3 = (void *)v1[79];
  if ( v3 )
  {
    operator_delete_8DE3FC(v3);
    v1[78] = 0;
    v1[79] = 0;
  }
  v1[74] = &off_60C5E40C;
  v1[68] = &off_60C5E40C;
  v1[64] = &off_60C5E40C;
  v1[57] = &off_60C5E40C;
  v1[50] = &off_60C5E40C;
  v1[43] = &off_60C5E40C;
  v4 = sub_60922E14(v1);
  operator_delete(v4);
}
