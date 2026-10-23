/* sub_6051615C
 * address: 0x6051615C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6051615C(_DWORD *a1)
{
  int v2; // r5

  *a1 = off_60BFF928;
  v2 = (int)(a1 + 3235);
  sub_6045C0A0((int)(a1 + 3639));
  sub_6045C0A0((int)(a1 + 3538));
  sub_6045C0A0((int)(a1 + 3437));
  sub_6045C0A0((int)(a1 + 3336));
  sub_6045C0A0(v2);
  sub_6050A4C4((int)(a1 + 1419));
  sub_605021B0(a1 + 899);
  sub_60475AE8(a1 + 12);
  operator_delete(a1);
}
