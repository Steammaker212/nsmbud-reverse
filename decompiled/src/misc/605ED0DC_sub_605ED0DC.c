/* sub_605ED0DC
 * address: 0x605ED0DC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_605ED0DC(int a1, int a2)
{
  int v2; // r2
  int v3; // r0
  float v4; // s0
  float *result; // r0

  v2 = (FIELD_U16(a1, 0x2944) + 1) & 0x1FF;
  FIELD_U16(a1, 0x2944) = v2;
  v3 = a1 + 8 * v2;
  v4 = FIELD_F32(a2, 4);
  FIELD_U32(v3, 6468) = *(_DWORD *)a2;
  result = (float *)(v3 + 6472);
  *result = v4 + 8.0;
  return result;
}
