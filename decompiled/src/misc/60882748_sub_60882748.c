/* sub_60882748
 * address: 0x60882748   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60882748(double a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v8; // r0
  int v9; // r6
  int *v10; // r7
  int v11; // r0
  float v12; // s2
  unsigned int *v13; // r2
  int i; // r1
  float v15; // s4
  unsigned int *v16; // r3
  float32x4_t v17; // q8
  float32x4_t v18; // q9
  float32x4_t v19; // q8

  v8 = FIELD_U32(a5, 12);
  if ( v8 == 1 )
    goto LABEL_9;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( FIELD_U32(a5, 4) )
    {
      v10 = (int *)(a5 + 16);
      *(float *)&a1 = fmodf(
                        *(float *)&a1
                      + (float)((float)((float)FIELD_U32(a5, 8) * *(float *)(FIELD_U32(a4, 308) + 16 * a6))
                              * (float)FIELD_S32(a5, 16)),
                        (float)FIELD_S32(a5, 16));
    }
    else
    {
      v10 = (int *)(FIELD_U32(a4, 136) + 2232);
    }
    v11 = a5 + 16 * v9;
    *(float *)&a1 = *(float *)&a1 / (float)*v10;
    if ( FIELD_F32(v11, 32) <= *(float *)&a1 )
    {
      *a3 = FIELD_U32(v11, 20);
      a3[1] = FIELD_U32(v11, 24);
      a3[2] = FIELD_U32(v11, 28);
      return *(float *)&a1;
    }
    v12 = FIELD_F32(a5, 32);
    if ( *(float *)&a1 >= v12 )
    {
      v13 = (unsigned int *)(a5 + 28);
      for ( i = 0; ; ++i )
      {
        v15 = v12;
        if ( i >= FIELD_U32(a5, 12) )
          goto LABEL_3;
        v12 = *((float *)v13 + 5);
        v16 = v13 + 4;
        v13 += 4;
        if ( v15 <= *(float *)&a1 )
        {
          v13 = v16;
          if ( *(float *)&a1 < v12 )
          {
            v17.n128_u64[0] = *((_QWORD *)v16 - 3);
            v18.n128_u64[0] = *((_QWORD *)v16 - 1);
            *(float *)&a1 = (float)(*(float *)&a1 - v15) / (float)(v12 - v15);
            v17.n128_u64[1] = *(v16 - 4);
            v18.n128_u64[1] = *v16;
            v19 = vmlaq_f32(v17, vdupq_lane_s32(*(int32x2_t *)&a1, 0), vsubq_f32(v18, v17));
            *(_QWORD *)a3 = v19.n128_u64[0];
            a3[2] = v19.n128_u32[2];
            return *(float *)&a1;
          }
        }
      }
    }
LABEL_9:
    *a3 = FIELD_U32(a5, 20);
    a3[1] = FIELD_U32(a5, 24);
    a3[2] = FIELD_U32(a5, 28);
    return *(float *)&a1;
  }
LABEL_3:
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  return *(float *)&a1;
}
