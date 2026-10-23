/* sub_6073F7F4
 * address: 0x6073F7F4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073F7F4(int result)
{
  float v1; // s0

  FIELD_U32(result, 6356) = 1109393408;
  FIELD_U32(result, 124) = 1081291571;
  FIELD_U32(result, 6364) = -1097229930;
  FIELD_U32(result, 100) = -1110316155;
  v1 = (float)((float)((float)(1 - FIELD_U8(result, 6368)) * 18.0) + 184.0) + -32.0;
  FIELD_F32(result, 6360) = v1;
  FIELD_F32(result, 120) = v1 / -40.0;
  FIELD_U32(result, 6344) = 1065353216;
  FIELD_U32(result, 6348) = 1069547520;
  FIELD_U32(result, 144) = 1065353216;
  FIELD_U32(result, 148) = 1065353216;
  FIELD_U32(result, 152) = 1065353216;
  FIELD_U32(result, 6352) = 1011666125;
  FIELD_U16(result, 6276) = 0;
  return result;
}
