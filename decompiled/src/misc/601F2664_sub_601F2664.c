/* sub_601F2664
 * address: 0x601F2664   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601F2664(int a1, float a2)
{
  float result; // s0

  LODWORD(result) = (int)(float)((float)((float)(FIELD_F32(a1, 632) + FIELD_F32(a1, 632)) * 3.1416) / a2);
  return result;
}
