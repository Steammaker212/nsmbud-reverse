/* sub_608A2820
 * address: 0x608A2820   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A2820(float32x2_t *a1, float32x2x2_t *a2, _DWORD *a3, int a4, float a5, int a6, int a7)
{
  int v7; // lr
  float v8; // s2
  float v9; // s4
  int v10; // r4
  int v11; // r5
  int v12; // r3
  int v13; // r5
  unsigned int v14; // s6
  float v15; // s0
  float v16; // s4
  float v17; // s2
  unsigned __int64 v18; // d1
  float32x2x2_t v20; // 0:d16.8,8:d17.8

  v7 = a3[34];
  v8 = FIELD_F32(a7, 152);
  v9 = FIELD_F32(v7, 2136);
  v10 = FIELD_U32(v7, 2184);
  v11 = *(_DWORD *)(*(_DWORD *)(a3[87] + 12) + 2164);
  switch ( v11 )
  {
    case 2:
      v12 = a3[14];
      v13 = v12 + 1;
      if ( v12 + 1 >= v10 )
        v13 = 0;
      a3[14] = v13;
      a4 = v12 % v10;
      break;
    case 1:
      v14 = a3[36];
      a3[36] = 1103515245 * v14 + 12345;
      a4 = (int)(float)((float)v10 * (float)((float)v14 * 2.3283e-10));
      break;
    case 0:
      v10 -= (int)(float)((float)(unsigned int)v10 * (float)((float)((float)FIELD_U32(v7, 2188) * a5) * 0.01));
      break;
  }
  v15 = v9 * v8;
  if ( v10 == 1 )
  {
    v16 = 0.0;
    v17 = 0.5;
  }
  else
  {
    v17 = 0.0;
    v16 = 1.0 / (float)(v10 - 1);
  }
  v20 = vld1q_dup_f32(&flt_608A2984);
  HIDWORD(v18) = v20.val[1].n64_u32[1];
  *(float *)&v18 = (float)((float)(v15 + (float)(v15 * FIELD_F32(v7, 2132))) * -0.5)
                 + (float)(v15 * (float)(v17 + (float)((float)a4 * v16)));
  FIELD_U64(a1, 0x0)[0] = (unsigned __int64)v20.val[0];
  a1[1].n64_u64[0] = v18;
  v20.val[1].n64_u32[0] = FIELD_U32(a7, 108);
  *a2 = v20;
  return 1;
}
