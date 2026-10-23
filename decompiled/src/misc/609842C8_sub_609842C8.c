/* sub_609842C8
 * address: 0x609842C8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609842C8(int a1)
{
  void *v2; // r0
  int v3; // r0

  sub_6098625C();
  *(_DWORD *)a1 = off_60C5F914;
  FIELD_U32(a1, 232) = 0;
  FIELD_U32(a1, 248) = -1;
  FIELD_U32(a1, 252) = -1;
  FIELD_U32(a1, 240) = off_60BFDB94;
  FIELD_U16(a1, 256) = 0;
  FIELD_U16(a1, 258) = 0;
  v2 = (void *)sub_609908C0();
  v3 = operator_new_8DE25C(0x1A8u, v2, 4);
  FIELD_U32(a1, 232) = sub_609979EC(v3);
  sub_60997AF4();
  return a1;
}
