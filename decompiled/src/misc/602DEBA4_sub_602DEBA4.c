/* sub_602DEBA4
 * address: 0x602DEBA4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DEBA4(int result)
{
  float v1; // s2
  float v2; // s0

  v1 = FIELD_F32(result, 108) - FIELD_F32(result, 584);
  v2 = FIELD_F32(result, 112) - FIELD_F32(result, 588);
  FIELD_F32(result, 120) = v1;
  FIELD_F32(result, 124) = v2;
  FIELD_U32(result, 128) = 0;
  FIELD_F32(result, 132) = v1 * 0.7;
  FIELD_U32(result, 6156) = v1 <= 0.0;
  FIELD_U32(result, 104) = 1014350479;
  FIELD_U32(result, 100) = -1103101952;
  FIELD_U32(result, 3200) |= 0x40000000u;
  FIELD_U32(result, 3192) |= 0x40000000u;
  FIELD_U32(result, 3176) |= 0x40000000u;
  FIELD_U32(result, 3184) |= 0x40000000u;
  return result;
}
