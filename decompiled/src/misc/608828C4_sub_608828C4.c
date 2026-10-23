/* sub_608828C4
 * address: 0x608828C4   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608828C4(double a1, float a2, float a3, float a4, int a5, int a6, int *a7, int a8)
{
  int v11; // r0
  int v12; // r7
  float v13; // s2
  float v14; // r0
  unsigned int *v15; // r1
  int i; // r0
  float v17; // s4
  unsigned int *v18; // r2
  float32x4_t v19; // q8
  float32x4_t v20; // q9
  float32x4_t v21; // q8

  if ( a8 == 1 )
    goto LABEL_10;
  if ( a8 )
  {
    v12 = a8 - 1;
    if ( a2 <= 0.0 )
      *(float *)&a1 = *((float *)&a1 + 1) / a4;
    else
      *(float *)&a1 = fmodf(*((float *)&a1 + 1) + (float)((float)(*(float *)&a1 * a3) * a2), a2) / a2;
    if ( *(float *)&a7[4 * v12 + 3] <= *(float *)&a1 )
    {
      a7 += 4 * v12;
      v14 = *(float *)a7;
      goto LABEL_12;
    }
    v13 = *((float *)a7 + 3);
    if ( *(float *)&a1 >= v13 )
    {
      v15 = (unsigned int *)(a7 + 2);
      for ( i = 0; ; ++i )
      {
        v17 = v13;
        if ( i >= a8 )
          break;
        v13 = *((float *)v15 + 5);
        v18 = v15 + 4;
        v15 += 4;
        if ( v17 <= *(float *)&a1 )
        {
          v15 = v18;
          if ( *(float *)&a1 < v13 )
          {
            v19.n128_u64[0] = *((_QWORD *)v18 - 3);
            v20.n128_u64[0] = *((_QWORD *)v18 - 1);
            *(float *)&a1 = (float)(*(float *)&a1 - v17) / (float)(v13 - v17);
            v19.n128_u64[1] = *(v18 - 4);
            v20.n128_u64[1] = *v18;
            v21 = vmlaq_f32(v19, vdupq_lane_s32(*(int32x2_t *)&a1, 0), vsubq_f32(v20, v19));
            *(_QWORD *)a6 = v21.n128_u64[0];
            FIELD_U32(a6, 8) = v21.n128_u32[2];
            return *(float *)&a1;
          }
        }
      }
      v11 = 0;
      goto LABEL_4;
    }
LABEL_10:
    v14 = *(float *)a7;
LABEL_12:
    *(float *)a6 = v14;
    FIELD_U32(a6, 4) = a7[1];
    v11 = a7[2];
    goto LABEL_13;
  }
  v11 = 1065353216;
LABEL_4:
  *(_DWORD *)a6 = v11;
  FIELD_U32(a6, 4) = v11;
LABEL_13:
  FIELD_U32(a6, 8) = v11;
  return *(float *)&a1;
}
