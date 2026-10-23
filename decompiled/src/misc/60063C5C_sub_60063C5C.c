/* sub_60063C5C
 * address: 0x60063C5C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60063C5C(int result, int a2)
{
  float v2; // s0

  v2 = (float)byte_60AFE3F4[a2];
  FIELD_U32(result, 80) = a2;
  FIELD_F32(result, 120) = v2 * 4.0;
  FIELD_U32(result, 124) = 0;
  FIELD_U32(result, 128) = 0;
  FIELD_U32(result, 104) = 1034147594;
  FIELD_U32(result, 100) = -1103101952;
  FIELD_U32(result, 132) = 0;
  FIELD_U32(result, 7076) = 32;
  return result;
}
