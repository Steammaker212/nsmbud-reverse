/* sub_608C5784
 * address: 0x608C5784   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608C5784(int a1, float a2)
{
  float result; // s0

  result = a2 * 10.0;
  FIELD_F32(a1, 4) = result;
  *(_DWORD *)a1 = 0;
  return result;
}
