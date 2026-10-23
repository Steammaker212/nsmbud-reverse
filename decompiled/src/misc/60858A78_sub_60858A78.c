/* sub_60858A78
 * address: 0x60858A78   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60858A78(float *a1, int a2)
{
  unsigned int v2; // r2
  float v3; // s0
  int v4; // r2
  float v5; // s2
  float v6; // s4
  float result; // s0

  *a1 = 0.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  a1[3] = 0.0;
  v2 = FIELD_U8(a2, 67);
  if ( (v2 & 3) == 2 )
  {
    v3 = -FIELD_F32(a2, 56);
  }
  else if ( (v2 & 3) != 0 )
  {
    v3 = 0.0;
  }
  else
  {
    v3 = FIELD_F32(a2, 56) * -0.5;
  }
  v4 = (v2 >> 2) & 3;
  if ( v4 )
  {
    if ( v4 == 2 )
    {
      v5 = FIELD_F32(a2, 60);
      v6 = v5;
    }
    else
    {
      v6 = 0.0;
      v5 = FIELD_F32(a2, 60);
    }
  }
  else
  {
    v5 = FIELD_F32(a2, 60);
    v6 = v5 * 0.5;
  }
  *a1 = v3;
  a1[1] = v6;
  result = v3 + FIELD_F32(a2, 56);
  a1[2] = result;
  a1[3] = v6 - v5;
  return result;
}
