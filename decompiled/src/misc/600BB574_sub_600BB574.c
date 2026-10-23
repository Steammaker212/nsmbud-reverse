/* sub_600BB574
 * address: 0x600BB574   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600BB574(int a1)
{
  float v1; // s0
  float v2; // s0
  float result; // s0

  FIELD_U32(a1, 6196) = 0;
  FIELD_U32(a1, 160) = 0x80000000;
  v1 = FIELD_F32(a1, 108);
  FIELD_U32(a1, 6204) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6208) = FIELD_U32(a1, 116);
  FIELD_F32(a1, 6200) = v1 - FIELD_F32(a1, 6180);
  v2 = (float)FIELD_U32(a1, 6140);
  FIELD_F32(a1, 104) = (float)-(float)(v2 * FIELD_F32(a1, 6152)) / 48.0;
  FIELD_U32(a1, 132) = 0;
  result = (float)-(float)(v2 * FIELD_F32(a1, 6156)) / 48.0;
  FIELD_F32(a1, 100) = result;
  FIELD_U32(a1, 136) = 0;
  return result;
}
