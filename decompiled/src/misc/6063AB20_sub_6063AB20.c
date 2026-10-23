/* sub_6063AB20
 * address: 0x6063AB20   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063AB20(int a1)
{
  _DWORD *v1; // r4
  int v2; // r5

  v1 = (_DWORD *)(a1 + 6372);
  v2 = a1 + 6192;
  sub_6063B50C(a1 + 6192, FIELD_U32(a1, 6372));
  return sub_6063B5E4(v2, *v1, v1 - 1566, v1 - 1554, 0.15);
}
