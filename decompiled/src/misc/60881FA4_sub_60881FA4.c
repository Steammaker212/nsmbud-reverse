/* sub_60881FA4
 * address: 0x60881FA4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_60881FA4(float32x4_t *result, unsigned __int32 a2)
{
  float32x4_t *v2; // r4
  float32x4_t *i; // r5
  double v4; // d0
  float v5; // s2
  float v6; // s3
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  double v15; // d6

  v2 = result;
  result[2].n128_u32[2] = a2;
  for ( i = (float32x4_t *)FIELD_U32(result + (20) * 16, 0x0)[0]; i; i = (float32x4_t *)i[7].n128_u32[2] )
  {
    result = (float32x4_t *)*(unsigned __int8 *)(*(_DWORD *)(i[21].n128_u32[3] + 12) + 1879);
    if ( result == (float32x4_t *)1 )
    {
      v4 = sub_60885F60((char *)&i[8].n128_f64[1] + 4, v2[2].n128_u32[2]);
      result = sub_60880330(i, *(float *)&v4, *((float *)&v4 + 1), v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
    }
  }
  return result;
}
