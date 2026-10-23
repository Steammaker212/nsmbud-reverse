/* sub_608362C8
 * address: 0x608362C8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608362C8(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // r0
  int v9; // r6
  __int64 v10; // kr00_8
  int v11; // r0

  v8 = dword_60CC72C8(**(_DWORD **)(a1 + 8), *a4, *a5);
  v9 = FIELD_U32(a1, 184);
  v10 = v8;
  v11 = sub_6083AC24(a3);
  return dword_60CC783C(v9, v11, a2, dword_60CC783C, v10, HIDWORD(v10));
}
