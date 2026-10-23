/* sub_603B4654
 * address: 0x603B4654   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B4654(int result)
{
  int v1; // r1
  float v2; // s0

  v1 = FIELD_U32(result, 80);
  v2 = (float)byte_60AFE3F4[v1];
  FIELD_U32(result, 11800) = v1;
  FIELD_F32(result, 120) = v2 * 0.5;
  FIELD_U32(result, 124) = 1067030938;
  FIELD_U32(result, 128) = 0;
  FIELD_U32(result, 136) = -1065353216;
  FIELD_U32(result, 100) = -1103101952;
  FIELD_U8(result, 6056) = 1;
  FIELD_U32(result, 11944) = 16;
  return result;
}
