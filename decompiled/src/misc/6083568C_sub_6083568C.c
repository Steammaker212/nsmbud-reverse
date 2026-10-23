/* sub_6083568C
 * address: 0x6083568C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083568C(int a1, int a2, int a3, _DWORD *a4, int a5, int a6, int a7, int a8)
{
  int v8; // r4
  int v11; // r5
  int v12; // r7
  __int64 v13; // r0

  v8 = FIELD_U32(a1, 184);
  v11 = sub_6083AB50(a2);
  v12 = sub_6083AC8C(a3);
  v13 = nullsub_70(*a4, a4[1], a4[2], a4[3]);
  return dword_60CC7880(v8, v11, v12, a5, v13, HIDWORD(v13), a6, a8, a7);
}
