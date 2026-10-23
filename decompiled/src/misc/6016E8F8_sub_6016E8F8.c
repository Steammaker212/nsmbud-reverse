/* sub_6016E8F8
 * address: 0x6016E8F8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6016E8F8(int a1)
{
  float result; // s0

  result = FIELD_F32(a1, 888) / (float)FIELD_S32(a1, 916);
  FIELD_F32(a1, 892) = result;
  FIELD_U32(a1, 896) = 1;
  return result;
}
