/* sub_604374BC
 * address: 0x604374BC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604374BC(int a1, int a2, int a3, int32x2_t *a4, _DWORD *a5, _DWORD *a6)
{
  sub_6042DAA4(FIELD_U32(a1, 1148), a2, a1 + 956, a4, a5);
  sub_6042DD5C(*(int **)(a1 + 1148), a2, a1 + 844);
  *(_DWORD *)(FIELD_U32(a1, 1148) + 4) = a1;
  sub_6042DDD8(*(int **)(a1 + 1148), a2, a6);
  sub_6042D4DC(*(unsigned __int8 **)(a1 + 1148), a2);
  sub_6042D8C4(*(_DWORD **)(a1 + 1148), a2);
  sub_6042D94C(*(_DWORD **)(a1 + 1148), a2);
  return sub_6042E09C(*(_DWORD **)(a1 + 1148), a2);
}
