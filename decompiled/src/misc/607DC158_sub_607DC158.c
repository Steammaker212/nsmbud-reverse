/* sub_607DC158
 * address: 0x607DC158   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607DC158(int a1)
{
  void *v2; // r0

  *(_DWORD *)a1 = off_60C262E0;
  sead__CriticalSection__dtor((_DWORD *)(a1 + 16692));
  sub_60954610(a1 + 16624);
  sub_607DC268(a1 + 15888);
  sub_607DC304(a1 + 15024);
  sub_607DC3A0(a1 + 14088);
  sead__CriticalSection__dtor((_DWORD *)(a1 + 14048));
  if ( FIELD_U8(a1, 192) )
    dword_60CC5754 = 0;
  v2 = (void *)sead__CalculateTask__dtor((_DWORD *)a1);
  operator_delete(v2);
}
