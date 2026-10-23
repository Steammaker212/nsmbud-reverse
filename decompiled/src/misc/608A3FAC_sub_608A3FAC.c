/* sub_608A3FAC
 * address: 0x608A3FAC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A3FAC(int result, _BYTE *a2, int a3, double a4)
{
  _DWORD *v6; // r4
  int v7; // r7
  int v8; // r6
  float v9; // s2
  int v10; // r2
  float v11; // s4
  int v12; // r1
  float32x4_t v13; // q9
  float32x4_t v14; // q8
  float32x4_t v15; // q8

  v6 = (_DWORD *)result;
  v7 = FIELD_U32(a3, 4);
  if ( v7 )
  {
    if ( v7 == 1 )
      goto LABEL_6;
    v8 = a3 + 16 * (v7 - 1);
    if ( FIELD_U8(a3, 1) )
      *(float *)&a4 = fmodf(*(float *)&a4, FIELD_F32(v8, 24));
    v9 = FIELD_F32(a3, 24);
    if ( *(float *)&a4 < v9 )
    {
LABEL_6:
      *v6 = FIELD_U32(a3, 12);
      v6[1] = FIELD_U32(a3, 16);
      result = FIELD_U32(a3, 20);
      v6[2] = result;
    }
    else if ( FIELD_F32(v8, 24) <= *(float *)&a4 )
    {
      *v6 = FIELD_U32(v8, 12);
      v6[1] = FIELD_U32(v8, 16);
      v6[2] = FIELD_U32(v8, 20);
      *a2 = 1;
      return 1;
    }
    else
    {
      v10 = a3 - 4;
      result = 0;
      while ( 1 )
      {
        v11 = v9;
        if ( result >= v7 )
          break;
        v9 = FIELD_F32(v10, 44);
        v12 = v10 + 16;
        ++result;
        v10 += 16;
        if ( v11 <= *(float *)&a4 )
        {
          v10 = v12;
          if ( *(float *)&a4 < v9 )
          {
            v13.n128_u64[0] = FIELD_U64(v12, 16);
            v14.n128_u64[0] = *(_QWORD *)v12;
            result = FIELD_U32(v12, 8);
            *(float *)&a4 = (float)(*(float *)&a4 - v11) / (float)(v9 - v11);
            v13.n128_u64[1] = FIELD_U32(v12, 24);
            v14.n128_u64[1] = (unsigned int)result;
            v15 = vmlaq_f32(v14, vdupq_lane_s32(*(int32x2_t *)&a4, 0), vsubq_f32(v13, v14));
            *(_QWORD *)v6 = v15.n128_u64[0];
            v6[2] = v15.n128_u32[2];
            return result;
          }
        }
      }
    }
  }
  return result;
}
