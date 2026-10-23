/* sub_603F64BC
 * address: 0x603F64BC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F64BC(void *a1)
{
  int v2; // r5
  _DWORD *v3; // r6
  _DWORD v5[8]; // [sp+8h] [bp-20h] BYREF

  sub_6090B310(dword_60CCF464);
  v2 = dword_60CD0B40;
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "2D";
  v3 = (_DWORD *)operator_new_8DE25C(0x1A4u, a1, 4);
  memset(v3, 0, 420);
  sub_60441A3C(v3);
  *v3 = off_60BF94D0;
  v3[4] = &off_60BF9528;
  sub_60958220(v2, v3, 5, v5, 0, a1);
  return sub_6090B32C(dword_60CCF464);
}
