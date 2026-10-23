/* sub_60835D28
 * address: 0x60835D28   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835D28(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v6; // r5
  __int64 v7; // r2

  v6 = FIELD_U32(a1, 184);
  v7 = nullsub_70(*a3, a3[1], a3[2], a3[3]);
  return dword_60CC781C(v6, a2, v7, HIDWORD(v7), a5);
}
