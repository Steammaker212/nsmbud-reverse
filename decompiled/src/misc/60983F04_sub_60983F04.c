/* sub_60983F04
 * address: 0x60983F04   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60983F04(int a1)
{
  void *v2; // r0
  int v3; // r0

  sub_609847CC();
  *(_DWORD *)a1 = off_60C5F89C;
  FIELD_U32(a1, 216) = -1;
  FIELD_U32(a1, 220) = -1;
  FIELD_U32(a1, 208) = off_60BFDB94;
  FIELD_U16(a1, 224) = 0;
  FIELD_U16(a1, 226) = 0;
  v2 = (void *)sub_609908C0();
  v3 = operator_new_8DE25C(0x1A8u, v2, 4);
  FIELD_U32(a1, 200) = sub_609979EC(v3);
  sub_60997AF4();
  return a1;
}
