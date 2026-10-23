/* sub_600731CC
 * address: 0x600731CC   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600731CC(int result, int a2)
{
  unsigned int v2; // r7
  _BYTE *v3; // r3
  bool v4; // cc
  float32x4_t *v5; // r3
  int v6; // r12
  float32x2_t *v7; // r6
  unsigned __int32 *v8; // r1
  unsigned __int32 *v9; // lr
  float32x2_t v10; // d2
  unsigned int *v11; // r4
  float32x4_t v12; // q2
  float32x4_t v13; // q3
  float32x4_t v14; // q5
  float32x4_t v15; // q4
  float32x4_t v16; // q8
  __int64 v17; // d12
  int v18; // r1
  unsigned __int64 v19; // d0

  v2 = 1;
  v3 = (_BYTE *)(result + 12184);
  while ( *(v3 - 308) )
  {
    if ( !*v3 )
      goto LABEL_7;
    v3 += 616;
    v4 = (int)(v2 + 1) < 40;
    v2 += 2;
    if ( !v4 )
      return result;
  }
  --v2;
LABEL_7:
  v5 = *(float32x4_t **)(a2 + 8);
  v6 = FIELD_U32(a2, 20);
  v7 = (float32x2_t *)(v5[18].n128_u32[1] + 16 * v6);
  v8 = (unsigned __int32 *)(v5[20].n128_u32[2] + 16 * v6);
  v9 = (unsigned __int32 *)(v5[20].n128_u32[1] + 16 * v6);
  v10.n64_u64[0] = v7[1].n64_u32[0];
  v11 = (unsigned int *)(v5[20].n128_u32[3] + 16 * v6);
  if ( *(_BYTE *)(v5[8].n128_u32[2] + 1875) == 2 )
  {
    v12 = v5[37];
    v15.n128_u32[1] = *v8;
    v14.n128_u32[1] = v8[1];
    v13.n128_u32[1] = v8[2];
    v12.n128_u32[3] = 0;
    v15.n128_u32[0] = *v9;
    v14.n128_u32[0] = v9[1];
    v13.n128_u32[0] = v9[2];
    v15.n128_u64[1] = *v11;
    v13.n128_u64[1] = v11[2];
    v14.n128_u64[1] = v11[1];
  }
  else if ( *(_BYTE *)(v5[8].n128_u32[2] + 1875) )
  {
    v15.n128_u64[1] = *v11;
    v14.n128_u32[1] = v8[1];
    v13.n128_u32[1] = v8[2];
    v12.n128_u32[1] = v8[3];
    v15.n128_u32[1] = *v8;
    v14.n128_u32[0] = v9[1];
    v13.n128_u32[0] = v9[2];
    v12.n128_u32[0] = v9[3];
    v15.n128_u32[0] = *v9;
    v12.n128_u64[1] = v11[3];
    v13.n128_u64[1] = v11[2];
    v14.n128_u64[1] = v11[1];
  }
  else
  {
    v12 = v5[37];
    v13 = v5[36];
    v14 = v5[35];
    v15 = v5[34];
  }
  v16 = vmlaq_lane_f32(vmulq_lane_f32(v14, (float32x2_t)FIELD_U64(v7, 0x0)[0], 1), v15, (float32x2_t)FIELD_U64(v7, 0x0)[0], 0);
  if ( v2 >= 0x28 )
    v2 = 0;
  v17 = *(_QWORD *)(v5[19].n128_u32[0] + 16 * v6);
  v18 = result + 308 * v2;
  FIELD_U8(v18, 11876) = 1;
  v19 = vaddq_f32(v12, vmlaq_lane_f32(v16, v13, v10, 0)).n128_u64[0];
  FIELD_F32(v18, 11696) = *(float *)&v17 * 1.2;
  FIELD_F32(v18, 11700) = *(float *)&v17 * 1.2;
  FIELD_F32(v18, 11688) = *(float *)&v19 - FIELD_F32(result, 108);
  FIELD_F32(v18, 11692) = *((float *)&v19 + 1) - FIELD_F32(result, 112);
  return v18 + 11692;
}
