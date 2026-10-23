/* sub_60998498
 * address: 0x60998498   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998498(int a1, int a2, _DWORD *a3)
{
  int v6; // r0
  _DWORD *v7; // r0
  int result; // r0

  sub_60990E4C(a1, a2, a3);
  v6 = sub_60853E04(a2, "Check");
  v7 = sub_60980A38(a3, v6, 1);
  FIELD_U32(a1, 64) = v7;
  *((_BYTE *)v7 + 51) |= 0x10u;
  result = FIELD_U32(a1, 64);
  FIELD_U8(result, 51) &= ~0x20u;
  return result;
}
