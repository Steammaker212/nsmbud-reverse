/* sub_601862E0
 * address: 0x601862E0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601862E0(int a1, float *a2)
{
  float v2; // r6
  float v3; // r5
  float v5; // s16
  float v6; // s0
  float v7; // s0
  unsigned int result; // r0

  v2 = *a2;
  v3 = a2[2];
  v5 = *a2;
  v6 = sqrtf((float)((float)(a2[1] * a2[1]) + (float)(v5 * v5)) + (float)(v3 * v3));
  if ( v6 > 0.0 )
  {
    v7 = 1.0 / v6;
    v3 = v3 * v7;
    v2 = v5 * v7;
  }
  if ( COERCE_FLOAT(LODWORD(v2) & 0x7FFFFFFF) < 0.1 && COERCE_FLOAT(LODWORD(v3) & 0x7FFFFFFF) < 0.1 )
  {
    v3 = -1.0;
    v2 = -0.0;
  }
  result = sub_6000F7B8(v2, v3);
  FIELD_U32(a1, 180) = result;
  FIELD_U32(a1, 192) = result;
  return result;
}
