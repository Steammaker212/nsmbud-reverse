/* sub_6048163C
 * address: 0x6048163C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048163C(int result)
{
  float v1; // s2

  v1 = FIELD_F32(result, 3620) - FIELD_F32(result, 3636);
  FIELD_F32(result, 3624) = FIELD_F32(result, 3616) - FIELD_F32(result, 3632);
  FIELD_F32(result, 3628) = v1;
  FIELD_U32(result, 3640) = 0;
  FIELD_U32(result, 3652) = 0;
  FIELD_U32(result, 3660) = 255;
  FIELD_U32(result, 3644) = (int)(float)((float)(2147500000.0 * 90.0) / 180.0) / 30;
  FIELD_U32(result, 3664) = 9;
  return result;
}
