/* sub_608A5588
 * address: 0x608A5588   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608A5588(int a1, _DWORD *a2, int a3)
{
  _DWORD *v6; // r0

  if ( dword_60CC8294 )
    debugPrintRelated2("ConnectionStripeSystem is already initialized.\n");
  v6 = (_DWORD *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 8))(a1, 32, 128);
  if ( v6 )
  {
    *v6 = &off_60C5ACA8;
    v6[1] = 1065353216;
    v6[2] = 1065353216;
    v6[3] = 1065353216;
    v6[4] = 1065353216;
    v6[5] = a2;
    v6[6] = a3;
    v6[7] = 0;
    a2[480] = 0;
    a2[481] = sub_608A5304;
    a2[482] = 0;
    a2[483] = 0;
    a2[484] = sub_608A5474;
    a2[485] = sub_608A54D0;
    a2[486] = sub_608A5534;
    a2[487] = 0;
    a2[488] = 0;
    a2[489] = 0;
    a2[490] = sub_60888FA4;
    dword_60CC8294 = (int)v6;
  }
  else
  {
    debugPrintRelated3("[ConnectedStripe] Memory Allocate Error!! : %d\n");
  }
}
