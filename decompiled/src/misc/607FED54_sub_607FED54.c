/* sub_607FED54
 * address: 0x607FED54   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_607FED54(sead_IDisposer *a1, int a2, float a3, float a4)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60C27DDC;
  FIELD_U32(result + (1) * 16, 0x0) = FIELD_U32(a2, 24);
  FIELD_U32(result + (1) * 16, 0x4) = 0;
  *(float *)&FIELD_U32(result + (1) * 16, 0x8) = a3;
  FIELD_U32(result + (1) * 16, 0xC) = 0;
  *(float *)&FIELD_U32(result + (2) * 16, 0x0) = a4;
  return result;
}
