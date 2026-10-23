/* sub_60169030
 * address: 0x60169030   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60169030(int a1, float *a2, float *a3, unsigned int a4)
{
  float v7; // s0
  float v8; // s2
  float v9; // s2
  float v10; // s0
  float v11; // s4
  int result; // r0

  if ( a4 == 6 )
    a4 = sub_6019B64C(a2, a3);
  if ( a4 <= 5 )
  {
    if ( ((1 << a4) & 3) != 0 )
    {
      v10 = a3[1];
      goto LABEL_18;
    }
    if ( ((1 << a4) & 0xC) != 0 )
    {
      v7 = a2[2];
      v8 = v7 - a3[2];
      if ( v8 <= 0.00000011921 && v8 >= -0.00000011921 )
      {
        v9 = 0.0;
LABEL_17:
        v10 = a2[1] + (float)(v9 * (float)(a3[1] - a2[1]));
        goto LABEL_18;
      }
      v11 = FIELD_F32(a1, 88);
    }
    else
    {
      v7 = *a2;
      v8 = *a2 - *a3;
      if ( v8 <= 0.00000011921 && v8 >= -0.00000011921 )
      {
        v9 = 0.0;
        goto LABEL_17;
      }
      v11 = FIELD_F32(a1, 80);
    }
    v9 = fabsf(v11 - v7) / fabsf(v8);
    if ( v9 > 1.0 )
      v9 = 1.0;
    goto LABEL_17;
  }
  v10 = 0.0;
LABEL_18:
  result = 0;
  if ( a4 - 2 >= 4 )
  {
    if ( a4 )
    {
      if ( a4 == 1 && FIELD_F32(a1, 84) < v10 )
      {
        FIELD_F32(a1, 84) = v10;
        return 1;
      }
    }
    else if ( FIELD_F32(a1, 84) > v10 )
    {
      FIELD_F32(a1, 84) = v10;
    }
  }
  else if ( FIELD_F32(a1, 84) < v10 )
  {
    FIELD_F32(a1, 84) = v10;
    FIELD_U32(a1, 120) = 0;
    return 1;
  }
  return result;
}
