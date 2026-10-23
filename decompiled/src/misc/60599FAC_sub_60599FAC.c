/* sub_60599FAC
 * address: 0x60599FAC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60599FAC(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  float v3; // s0

  v1 = a1 + 1565;
  v2 = a1 + 2009;
  a1[1565] &= 0xFFF5EFFF;
  a1[38] = 1065353216;
  a1[37] = 1065353216;
  a1[36] = 1065353216;
  sub_6059BE40(a1 + 2009, 0.0);
  v3 = sub_6059BE58(v2);
  sub_6059BE50(v2, v3 + -1.0);
  *(v1 - 1440) = 1107296256;
  *(v1 - 1439) = 1107296256;
  *(v1 - 1438) = 1107296256;
  *(v1 - 1437) = 1107296256;
  return -5748;
}
