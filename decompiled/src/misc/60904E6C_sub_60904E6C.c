/* sub_60904E6C
 * address: 0x60904E6C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60904E6C(int a1, int a2, int a3)
{
  sub_6090529C();
  *(_DWORD *)a1 = &off_60C5CCA8;
  FIELD_U32(a1, 16) = off_60C5CC70;
  FIELD_U32(a1, 20) = a2;
  FIELD_U32(a1, 24) = sub_608E7EC4(a2);
  memset((void *)(a1 + 32), 0, 40);
  FIELD_U32(a1, 28) = &off_60BF9CF0;
  FIELD_U32(a1, 72) = 0;
  FIELD_U8(a1, 76) = 0;
  FIELD_U32(a1, 80) = sub_608E7F30(a2);
  FIELD_U32(a1, 8) = a1 + 16;
  sub_609052D4(a1, a3);
  return a1;
}
