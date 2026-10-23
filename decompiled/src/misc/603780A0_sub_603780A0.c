/* sub_603780A0
 * address: 0x603780A0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603780A0(int a1)
{
  int v1; // r4

  v1 = a1 + 6100;
  (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 6100) + 4) + 84))(
    *(_DWORD *)(FIELD_U32(a1, 6100) + 4),
    2,
    1.0,
    0.0,
    0.0);
  sub_60793088(*(_DWORD *)(*(_DWORD *)v1 + 4), 2.5);
  *(_DWORD *)(v1 - 5980) = -1071644672;
  *(_DWORD *)(v1 - 5976) = 0;
  *(_DWORD *)(v1 - 5972) = 0;
  *(_DWORD *)(v1 - 6012) = 0;
  *(_DWORD *)(v1 - 6000) = 0;
  return -6000;
}
