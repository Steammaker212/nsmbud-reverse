/* sub_603781F8
 * address: 0x603781F8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603781F8(int a1)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)(a1 + 6100);
  (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 6100) + 4) + 84))(
    *(_DWORD *)(FIELD_U32(a1, 6100) + 4),
    0,
    1.0,
    0.0,
    0.0);
  sub_60793088(*(_DWORD *)(*v1 + 4), 1.0);
  *(v1 - 1495) = 0;
  *(v1 - 1494) = 0;
  *(v1 - 1493) = 0;
  *(v1 - 1503) = 0;
  *(v1 - 1500) = 0;
  v1[1] = 30;
  return 30;
}
