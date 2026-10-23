/* sub_605AFF88
 * address: 0x605AFF88   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605AFF88(int a1, int a2, int a3)
{
  float result; // s0

  result = FIELD_F32(a2, 4) + 224.0;
  FIELD_F32(a2, 4) = result;
  FIELD_U32(a3, 8) = 0;
  return result;
}
