/* sub_6080E5F4
 * address: 0x6080E5F4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080E5F4(int a1)
{
  *(_QWORD *)a1 = 0x3F80000000000000LL;
  sub_608CE744(a1 + 8);
  FIELD_U64(a1, 16) = 0x3F80000000000000LL;
  sub_608CE75C(a1 + 24);
  FIELD_U32(a1, 36) = 1060320051;
  FIELD_U32(a1, 40) = 1045220557;
  FIELD_U32(a1, 44) = 1065353216;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 16) = 3;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 24) = -294967296;
  FIELD_U32(a1, 32) = 0;
  return a1;
}
