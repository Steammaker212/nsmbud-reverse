/* sub_608DC2C0
 * address: 0x608DC2C0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608DC2C0(_DWORD *a1)
{
  _DWORD *v2; // r5
  void *v3; // r0
  void *v4; // r0

  *a1 = off_60C5BBF0;
  a1[2] = off_60C5BC10;
  v2 = a1 + 2;
  if ( sub_608A9984((int)(a1 + 2)) )
    sub_6099BC78(v2);
  v3 = (void *)a1[366];
  if ( v3 )
  {
    operator_delete_8DE3FC(v3);
    a1[366] = 0;
  }
  v4 = (void *)a1[367];
  if ( v4 )
  {
    operator_delete_8DE3FC(v4);
    a1[367] = 0;
  }
  sub_6099BBD4(v2);
  operator_delete(a1);
}
