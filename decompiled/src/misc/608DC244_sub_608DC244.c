/* sub_608DC244
 * address: 0x608DC244   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DC244(_DWORD *a1)
{
  _DWORD *v2; // r5
  void *v3; // r0
  void *v4; // r0

  *(a1 - 2) = off_60C5BBF0;
  v2 = a1 - 2;
  *a1 = off_60C5BC10;
  if ( sub_608A9984((int)a1) )
    sub_6099BC78(a1);
  v3 = (void *)v2[366];
  if ( v3 )
  {
    operator_delete_8DE3FC(v3);
    v2[366] = 0;
  }
  v4 = (void *)v2[367];
  if ( v4 )
  {
    operator_delete_8DE3FC(v4);
    v2[367] = 0;
  }
  return sub_6099BBD4(a1);
}
