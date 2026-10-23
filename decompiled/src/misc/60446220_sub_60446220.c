/* sub_60446220
 * address: 0x60446220   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60446220(int a1)
{
  sub_604435D8();
  *(_DWORD *)a1 = off_60BFAF6C;
  FIELD_U32(a1, 16) = &off_60BFAFC8;
  sub_6095CDD0(a1 + 432);
  sub_60959B54(a1 + 4896);
  FIELD_U32(a1, 5352) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 5356));
  FIELD_U32(a1, 5372) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 5376) = &byte_60ABC94D;
  FIELD_U32(a1, 5356) = off_60C5E9A4;
  FIELD_U32(a1, 5380) = 0;
  FIELD_U32(a1, 5384) = 0;
  FIELD_U32(a1, 5388) = 1;
  FIELD_U32(a1, 5396) = 0;
  FIELD_U32(a1, 5400) = 0;
  FIELD_U32(a1, 5404) = 0;
  FIELD_U32(a1, 5392) = off_60BD8394;
  FIELD_U32(a1, 5424) = 0;
  FIELD_U32(a1, 5428) = 1101004800;
  FIELD_U32(a1, 5432) = 0x40000000;
  FIELD_U32(a1, 5436) = 0;
  FIELD_U32(a1, 5440) = -1082130432;
  FIELD_U32(a1, 5444) = 0;
  FIELD_U16(a1, 5448) = 1;
  return a1;
}
