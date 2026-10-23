/* sub_60836348
 * address: 0x60836348   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60836348(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v5; // r6
  int v8; // r7
  __int64 v9; // r0

  v5 = FIELD_U32(a1, 184);
  v8 = sub_6083AC24(a3);
  v9 = nullsub_70(*a4, a4[1], a4[2], a4[3]);
  return dword_60CC7824(v5, v8, a2, dword_60CC7824, v9, HIDWORD(v9), a5);
}
