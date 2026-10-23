/* sub_60835624
 * address: 0x60835624   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835624(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // r4
  int v9; // r7
  int v10; // r6
  __int64 v11; // r0

  v6 = FIELD_U32(a1, 184);
  v9 = sub_6083AB50(a2);
  v10 = sub_6083AC8C(a3);
  v11 = nullsub_70(*a4, a4[1], a4[2], a4[3]);
  return dword_60CC7878(v6, v9, v10, a5, v11, HIDWORD(v11), a6);
}
