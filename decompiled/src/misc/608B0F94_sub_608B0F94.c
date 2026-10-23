/* sub_608B0F94
 * address: 0x608B0F94   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_608B0F94(int a1, int a2, int a3, float a4)
{
  float *result; // r0

  result = (float *)(FIELD_U32(a1, 4) + 96 * a2 + 4 * a3);
  *result = a4;
  return result;
}
