/* sub_60168F2C
 * address: 0x60168F2C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60168F2C(int a1, float *a2, float *a3, unsigned int a4)
{
  float v4; // s0
  float v5; // s2
  float v6; // s2
  float v8; // s4

  if ( a4 > 5 )
    return 0.0;
  if ( ((1 << a4) & 3) != 0 )
    return a3[1];
  if ( ((1 << a4) & 0xC) == 0 )
  {
    v4 = *a2;
    v5 = *a2 - *a3;
    if ( v5 <= 0.00000011921 && v5 >= -0.00000011921 )
    {
      v6 = 0.0;
      return a2[1] + (float)(v6 * (float)(a3[1] - a2[1]));
    }
    v8 = FIELD_F32(a1, 80);
LABEL_14:
    v6 = fabsf(v8 - v4) / fabsf(v5);
    if ( v6 > 1.0 )
      v6 = 1.0;
    return a2[1] + (float)(v6 * (float)(a3[1] - a2[1]));
  }
  v4 = a2[2];
  v5 = v4 - a3[2];
  if ( v5 > 0.00000011921 || v5 < -0.00000011921 )
  {
    v8 = FIELD_F32(a1, 88);
    goto LABEL_14;
  }
  v6 = 0.0;
  return a2[1] + (float)(v6 * (float)(a3[1] - a2[1]));
}
