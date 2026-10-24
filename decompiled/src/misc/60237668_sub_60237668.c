/* sub_60237668
 * address: 0x60237668   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60237668(_DWORD *result)
{
  _DWORD *v1; // r8
  float32x4_t *v2; // r2
  int v3; // r3
  float32x2_t *v4; // r4
  unsigned __int32 *v5; // r1
  unsigned __int32 *v6; // r0
  unsigned int *v7; // r3
  float32x4_t v8; // q2
  float32x4_t v9; // q3
  float32x4_t v10; // q5
  float32x4_t v11; // q4
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r5
  int v17; // [sp+Ch] [bp-4Ch] BYREF
  float32x4_t v18; // [sp+10h] [bp-48h] BYREF

  v1 = result;
  v2 = (float32x4_t *)result[2];
  if ( v2 )
  {
    v3 = result[5];
    v4 = (float32x2_t *)(FIELD_U32(v2 + (18) * 16, 0x0)[1] + 16 * v3);
    v5 = (unsigned __int32 *)(FIELD_U32(v2 + (20) * 16, 0x0)[2] + 16 * v3);
    v6 = (unsigned __int32 *)(FIELD_U32(v2 + (20) * 16, 0x0)[1] + 16 * v3);
    v7 = (unsigned int *)(FIELD_U32(v2 + (20) * 16, 0x0)[3] + 16 * v3);
    if ( *(_BYTE *)(v2[8].n128_u32[2] + 1875) == 2 )
    {
      v8 = v2[37];
      v11.n128_u32[1] = *v5;
      v10.n128_u32[1] = v5[1];
      v9.n128_u32[1] = v5[2];
      v8.n128_u32[3] = 0;
      v11.n128_u32[0] = *v6;
      v10.n128_u32[0] = v6[1];
      v9.n128_u32[0] = v6[2];
      v11.n128_u64[1] = *v7;
      v9.n128_u64[1] = v7[2];
      v10.n128_u64[1] = v7[1];
    }
    else if ( *(_BYTE *)(v2[8].n128_u32[2] + 1875) )
    {
      v11.n128_u64[1] = *v7;
      v10.n128_u32[1] = v5[1];
      v9.n128_u32[1] = v5[2];
      v8.n128_u32[1] = v5[3];
      v11.n128_u32[1] = *v5;
      v10.n128_u32[0] = v6[1];
      v9.n128_u32[0] = v6[2];
      v8.n128_u32[0] = v6[3];
      v11.n128_u32[0] = *v6;
      v8.n128_u64[1] = v7[3];
      v9.n128_u64[1] = v7[2];
      v10.n128_u64[1] = v7[1];
    }
    else
    {
      v8 = v2[37];
      v9 = v2[36];
      v10 = v2[35];
      v11 = v2[34];
    }
    v18 = vaddq_f32(
            v8,
            vmlaq_lane_f32(
              vmlaq_lane_f32(vmulq_lane_f32(v10, (float32x2_t)FIELD_U64(v4, 0x0)[0], 1), v11, (float32x2_t)FIELD_U64(v4, 0x0)[0], 0),
              v9,
              (float32x2_t)FIELD_U32(v4 + (1) * 8, 0x0)[0],
              0));
    result = (_DWORD *)TileMgr_instance;
    if ( TileMgr_instance )
    {
      sub_601529D0(&v17, (float *)&v18, 0);
      result = (_DWORD *)(v17 - 1);
      if ( (unsigned int)(v17 - 1) >= 2 )
      {
        *(_DWORD *)(*(_DWORD *)(v1[2] + 148) + 24 * v1[5] + 12) = 0;
        *(_DWORD *)(*(_DWORD *)(v1[2] + 292) + 16 * v1[5] + 12) = 0;
        result = (_DWORD *)v1[2];
        v12 = v1[5];
        v13 = result[38];
        if ( v13 + 280 * v12 )
        {
          if ( *(int *)(result[87] + 84) >= 1 )
          {
            v14 = v13 + 280 * v12;
            v15 = 0;
            do
            {
              v16 = *(_DWORD *)(v14 + 4 * v15++);
              if ( v16 )
              {
                FIELD_U8(v16, 7) = 1;
                result = (_DWORD *)v1[2];
              }
            }
            while ( v15 < *(_DWORD *)(result[87] + 84) );
          }
        }
      }
    }
  }
  return result;
}
