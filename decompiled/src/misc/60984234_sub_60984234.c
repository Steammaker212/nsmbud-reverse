/* sub_60984234
 * address: 0x60984234   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60984234(int a1, int a2, int a3, int a4)
{
  void *v5; // r0
  int v6; // r0

  sub_6098620C(a1, a2, a3, a4);
  *(_DWORD *)a1 = off_60C5F914;
  FIELD_U32(a1, 232) = 0;
  FIELD_U32(a1, 248) = -1;
  FIELD_U32(a1, 252) = -1;
  FIELD_U32(a1, 240) = off_60BFDB94;
  FIELD_U16(a1, 256) = 0;
  FIELD_U16(a1, 258) = 0;
  v5 = (void *)sub_609908C0();
  v6 = operator_new_8DE25C(0x1A8u, v5, 4);
  FIELD_U32(a1, 232) = sub_609979EC(v6);
  sub_60997AF4();
  return a1;
}
