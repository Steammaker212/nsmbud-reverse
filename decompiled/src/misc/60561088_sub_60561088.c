/* sub_60561088
 * address: 0x60561088   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60561088(int result, int a2, int a3)
{
  FIELD_U32(result, 68) = a2;
  FIELD_U32(result, 72) = a3;
  FIELD_U32(result, 32024) = a2;
  FIELD_U32(result, 32028) = a3;
  FIELD_U32(result, 40) = a2;
  FIELD_U32(result, 44) = a3;
  FIELD_U8(result, 52) = 1;
  FIELD_U32(result, 56) = 1065353216;
  return result;
}
