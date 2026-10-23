/* sub_606809D8
 * address: 0x606809D8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606809D8(int a1)
{
  float v1; // s0
  float result; // s0

  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  v1 = FIELD_F32(a1, 7464);
  FIELD_U32(a1, 120) = 0;
  result = -v1;
  FIELD_F32(a1, 124) = result;
  FIELD_U32(a1, 128) = 0;
  FIELD_U8(a1, 7596) = 0;
  return result;
}
