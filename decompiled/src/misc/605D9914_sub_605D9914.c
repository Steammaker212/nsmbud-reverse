/* sub_605D9914
 * address: 0x605D9914   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605D9914(int a1)
{
  float result; // s0

  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 100) = 0;
  result = FIELD_F32(a1, 6384) - FIELD_F32(a1, 112);
  FIELD_F32(a1, 124) = result;
  return result;
}
