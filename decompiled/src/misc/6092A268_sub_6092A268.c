/* sub_6092A268
 * address: 0x6092A268   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6092A268(_DWORD *a1)
{
  _DWORD *v1; // r4
  void *v2; // r0
  void *v3; // r0
  _DWORD *v4; // r0

  *(a1 - 7) = off_60C5DF0C;
  v1 = a1 - 7;
  *a1 = off_60C5DF70;
  v2 = (void *)a1[85];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    v1[91] = 0;
    v1[92] = 0;
  }
  v3 = (void *)v1[90];
  if ( v3 )
  {
    operator_delete_8DE3FC(v3);
    v1[89] = 0;
    v1[90] = 0;
  }
  v1[85] = &off_60C5E40C;
  v1[81] = &off_60C5E40C;
  v1[77] = &off_60C5E40C;
  v1[71] = &off_60C5E40C;
  v1[65] = &off_60C5E40C;
  v1[61] = &off_60C5E40C;
  v1[57] = &off_60C5E40C;
  v1[50] = &off_60C5E40C;
  v1[43] = &off_60C5E40C;
  v4 = sub_60922E14(v1);
  operator_delete(v4);
}
