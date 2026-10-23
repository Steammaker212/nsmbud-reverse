/* sub_60186214
 * address: 0x60186214   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60186214(int a1, float *a2)
{
  float v2; // r5
  float v3; // r4
  float v4; // s16
  float v5; // s0
  float v6; // s0

  v2 = *a2;
  v3 = a2[2];
  v4 = *a2;
  v5 = sqrtf((float)((float)(a2[1] * a2[1]) + (float)(v4 * v4)) + (float)(v3 * v3));
  if ( v5 > 0.0 )
  {
    v6 = 1.0 / v5;
    v3 = v3 * v6;
    v2 = v4 * v6;
  }
  if ( COERCE_FLOAT(LODWORD(v2) & 0x7FFFFFFF) < 0.1 && COERCE_FLOAT(LODWORD(v3) & 0x7FFFFFFF) < 0.1 )
  {
    v3 = -1.0;
    v2 = -0.0;
  }
  return sub_6000F7B8(v2, v3);
}
