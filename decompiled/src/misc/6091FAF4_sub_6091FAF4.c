/* sub_6091FAF4
 * address: 0x6091FAF4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6091FAF4(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60C5D6B4;
  v2 = (void *)a1[76];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[75] = 0;
    a1[76] = 0;
  }
  sub_60973B54(a1 + 57);
  sub_60973B54(a1 + 39);
  sub_60973B54(a1 + 21);
  sub_60973B54(a1 + 3);
  operator_delete(a1);
}
