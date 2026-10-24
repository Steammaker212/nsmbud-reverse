/* sub_60804474
 * address: 0x60804474   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60804474(sead_IDisposer *a1, float a2)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60C27EF8;
  FIELD_U32(result + (1) * 16, 0x0) = 0;
  FIELD_U32(result + (1) * 16, 0x4) = 0;
  *(float *)&FIELD_U32(result + (1) * 16, 0x8) = a2;
  *(float *)&FIELD_U32(result + (1) * 16, 0xC) = a2;
  *(float *)&FIELD_U32(result + (2) * 16, 0x0) = a2;
  *(float *)&FIELD_U32(result + (2) * 16, 0x4) = a2;
  FIELD_U32(result + (2) * 16, 0x8) = 0;
  FIELD_U32(result + (2) * 16, 0xC) = 0;
  FIELD_U32(result + (3) * 16, 0x0) = 0;
  FIELD_U32(result + (3) * 16, 0x4) = 0;
  FIELD_U32(result + (3) * 16, 0x8) = 0;
  FIELD_U32(result + (3) * 16, 0xC) = 973279855;
  return result;
}
