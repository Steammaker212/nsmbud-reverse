/* sub_6003331C
 * address: 0x6003331C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6003331C(_DWORD *a1)
{
  a1[29] = 1153138688;
  a1[20] = 1;
  a1[40] = -536870912;
  sub_60033374((int)a1);
  sub_60033498((int)a1);
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C7FC94);
  return 1;
}
