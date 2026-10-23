/* sub_60928EA4
 * address: 0x60928EA4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60928EA4(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  *a1 = off_60C5DDFC;
  a1[7] = off_60C5DE60;
  v2 = (void *)a1[81];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[80] = 0;
    a1[81] = 0;
  }
  v3 = (void *)a1[79];
  if ( v3 )
  {
    operator_delete_8DE3FC(v3);
    a1[78] = 0;
    a1[79] = 0;
  }
  a1[74] = &off_60C5E40C;
  a1[68] = &off_60C5E40C;
  a1[64] = &off_60C5E40C;
  a1[57] = &off_60C5E40C;
  a1[50] = &off_60C5E40C;
  a1[43] = &off_60C5E40C;
  return sub_60922E14(a1);
}
