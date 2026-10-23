/* sub_6063926C
 * address: 0x6063926C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063926C(int result, double a2, float a3, float a4, float a5, float a6, float32x2_t a7)
{
  int v7; // r1
  unsigned int v8; // r1
  float v9; // s2
  float v10; // s0

  v7 = FIELD_U8(result, 12);
  if ( v7 == 3 )
  {
    v10 = *(float *)result + -0.10938;
    if ( v10 <= 0.125 )
    {
      v10 = 0.0;
      FIELD_U8(result, 12) = 0;
    }
    *(float *)result = v10;
  }
  else if ( v7 == 1 )
  {
    a7.n64_u32[0] = 0;
    *(float *)&a2 = FIELD_F32(result, 4) - (float)((float)(FIELD_F32(result, 4) * 0.0625) + 0.03125);
    *(float *)&a2 = vmax_f32(*(float32x2_t *)&a2, a7).n64_f32[0];
    if ( *(float *)&a2 == 0.0 )
    {
      v9 = 1.0;
      FIELD_U8(result, 12) = 2;
    }
    else
    {
      v8 = FIELD_U32(result, 8) + 0x10000000;
      FIELD_U32(result, 8) = v8;
      v9 = 1.0
         - (float)(*(float *)&a2
                 * (float)(*(float *)((char *)&sinLutTable[2] + ((v8 >> 20) & 0xFF0))
                         + (float)((float)((float)(v8 & 0xFFFFFF)
                                         * *(float *)((char *)&sinLutTable[3] + ((v8 >> 20) & 0xFF0)))
                                 * 0.000000059605)));
    }
    *(float *)result = v9;
    FIELD_U32(result, 4) = LODWORD(a2);
  }
  return result;
}
