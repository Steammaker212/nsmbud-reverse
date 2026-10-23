/* sub_608A8790
 * address: 0x608A8790   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A8790(float *a1, int *a2, int a3, int a4, float a5, int a6)
{
  float v6; // s6
  int v8; // r6
  float v11; // s0
  float v12; // s8
  int v13; // r0
  int result; // r0

  v6 = FIELD_F32(a4, 100);
  v8 = FIELD_U32(a3, 32);
  v11 = 1.0;
  if ( v6 < a5 )
  {
    v12 = FIELD_F32(a4, 104);
    v13 = FIELD_U8(a6, 48);
    if ( v13 == 2 )
    {
      v11 = 1.0 - (float)((float)(1.0 - FIELD_F32(a6, 44)) * (float)((float)(a5 - v6) / v12));
      if ( v11 < 0.0 )
        v11 = 0.0;
    }
    else
    {
      v11 = 1.0;
      if ( v13 == 1 )
        v11 = powf(FIELD_F32(a6, 44), (float)(a5 - v6) / v12);
    }
  }
  *a1 = v11;
  result = -(int)(float)((float)v8 * (float)(1.0 - v11));
  *a2 = result;
  return result;
}
