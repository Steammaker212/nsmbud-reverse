/* sub_602CDBF8
 * address: 0x602CDBF8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602CDBF8(int a1)
{
  float result; // s0

  BGM_anim_ref();
  FIELD_U32(a1, 88) = 0;
  LODWORD(result) = (int)(float)(sub_602D1E2C(a1 + 6316) + -1.0);
  FIELD_U16(a1, 6574) = LOWORD(result);
  return result;
}
