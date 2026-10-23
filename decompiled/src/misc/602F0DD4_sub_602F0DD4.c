/* sub_602F0DD4
 * address: 0x602F0DD4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602F0DD4(int a1, int a2)
{
  float *v2; // r1
  float result; // s0

  v2 = (float *)(a2 + 7384);
  result = flt_60AF2644[FIELD_U32(dword_60C99DD4, 1052) & 3] + *v2;
  *v2 = result;
  return result;
}
