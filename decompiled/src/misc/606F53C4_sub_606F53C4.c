/* sub_606F53C4
 * address: 0x606F53C4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F53C4(int result)
{
  float v1; // s0
  float v2; // s6
  float v3; // s2

  v1 = FIELD_F32(result, 6116);
  FIELD_U32(result, 304) = 0;
  v2 = (float)(v1 * 0.5) + -4.0;
  FIELD_F32(result, 308) = v2 + -4.0;
  v3 = FIELD_F32(result, 6492) * 0.5;
  FIELD_F32(result, 312) = v3;
  FIELD_F32(result, 316) = v2 + -2.0;
  FIELD_U32(result, 6296) = 0;
  FIELD_F32(result, 6300) = v1 + -9.0;
  FIELD_F32(result, 6304) = v3;
  FIELD_U32(result, 6308) = 1086324736;
  return result;
}
