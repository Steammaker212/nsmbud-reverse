/* sub_60730680
 * address: 0x60730680   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60730680(int a1)
{
  int v1; // r0
  int v2; // t1
  _DWORD *v3; // r1

  v2 = FIELD_U32(a1, 6300);
  v1 = a1 + 6300;
  v3 = *(_DWORD **)(v2 + 4);
  v3[55] = 0;
  v3[56] = 0;
  v3[57] = 0;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 4) + 232) &= ~2u;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 4) + 232) &= ~4u;
  return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(*(_DWORD *)v1 + 4) + 84))(
           *(_DWORD *)(*(_DWORD *)v1 + 4),
           198,
           1.0,
           5.0,
           0.0);
}
