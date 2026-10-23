/* sub_6092A090
 * address: 0x6092A090   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6092A090(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  *a1 = off_60C5DF0C;
  a1[7] = off_60C5DF70;
  v2 = (void *)a1[92];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[91] = 0;
    a1[92] = 0;
  }
  v3 = (void *)a1[90];
  if ( v3 )
  {
    operator_delete_8DE3FC(v3);
    a1[89] = 0;
    a1[90] = 0;
  }
  a1[85] = &off_60C5E40C;
  a1[81] = &off_60C5E40C;
  a1[77] = &off_60C5E40C;
  a1[71] = &off_60C5E40C;
  a1[65] = &off_60C5E40C;
  a1[61] = &off_60C5E40C;
  a1[57] = &off_60C5E40C;
  a1[50] = &off_60C5E40C;
  a1[43] = &off_60C5E40C;
  return sub_60922E14(a1);
}
