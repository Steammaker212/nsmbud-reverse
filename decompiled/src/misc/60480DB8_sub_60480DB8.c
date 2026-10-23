/* sub_60480DB8
 * address: 0x60480DB8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60480DB8(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = off_60BFD3AC;
  v2 = a1 + 1656;
  FIELD_U16(a1, 12836) = 0;
  sub_6050A4C4(a1 + 5608);
  sub_60475AE8((_DWORD *)(a1 + 2060));
  sub_6045C0A0(v2);
  sub_6045C0A0(a1 + 1252);
  sub_6045C0A0(a1 + 848);
  sub_6045C0A0(a1 + 444);
  sub_6045C0A0(a1 + 40);
  return a1;
}
