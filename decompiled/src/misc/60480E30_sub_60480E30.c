/* sub_60480E30
 * address: 0x60480E30   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60480E30(_WORD *a1)
{
  int v2; // r5

  *(_DWORD *)a1 = off_60BFD3AC;
  v2 = (int)(a1 + 828);
  a1[6418] = 0;
  sub_6050A4C4(a1 + 2804);
  sub_60475AE8((_DWORD *)a1 + 515);
  sub_6045C0A0(v2);
  sub_6045C0A0((int)(a1 + 626));
  sub_6045C0A0((int)(a1 + 424));
  sub_6045C0A0((int)(a1 + 222));
  sub_6045C0A0((int)(a1 + 20));
  operator_delete(a1);
}
