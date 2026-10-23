/* sub_603D7238
 * address: 0x603D7238   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603D7238(int a1)
{
  float result; // s0

  sub_603D907C(a1, 0, 1.0);
  result = (float)byte_60AFE3F4[FIELD_U32(a1, 80) ^ 1] * flt_60B01354[FIELD_U32(a1, 11844)];
  FIELD_F32(a1, 120) = result;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 11832) = 5;
  return result;
}
