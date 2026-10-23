/* sub_6088ACD0
 * address: 0x6088ACD0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088ACD0(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v10; // r9

  sub_60835BF8(a1, FIELD_U32(a4, 4), 63);
  v10 = a2[33];
  sub_60835A38(a1, (int *)(a2[87] + 168));
  sub_60835AD4(a1, a2[87] + 208);
  sub_60835934(a1, a2[87] + 236);
  sub_60835BA8(a1, (_DWORD *)(a2[87] + 608));
  sub_6089AEBC(v10, a1, a2, a4, a6);
  sub_6089B110(v10, a1, a2, a4, a6);
  return sub_60890DC8(*(_DWORD *)(a2[29] + 24), a1, a2, a3);
}
