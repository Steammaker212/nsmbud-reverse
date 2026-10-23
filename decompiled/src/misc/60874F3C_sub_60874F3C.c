/* sub_60874F3C
 * address: 0x60874F3C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60874F3C(__int64 *a1, int a2)
{
  __int64 v3; // d0
  __int64 v4; // d1
  int result; // r0
  __int64 v6; // d2
  int v7; // r12
  float *v8; // r2
  int v9; // r3
  unsigned __int64 *v10; // r5
  float32x4_t v11; // q1
  __int64 *v12; // r4
  __int64 v13; // d6
  int v14; // r4
  float32x4_t v15; // q2
  float32x4_t v16; // q8

  if ( !*((_DWORD *)a1 + 57)
    || (v3 = *a1, v4 = a1[1], result = 0, v6 = FIELD_U64(a2, 16), *(float *)a1 <= *(float *)&v6)
    && *(float *)a2 <= *((float *)a1 + 4)
    && *((float *)&v3 + 1) <= *((float *)&v6 + 1)
    && *(float *)&v4 <= FIELD_F32(a2, 24) )
  {
    v7 = *((_DWORD *)a1 + 56);
    result = 1;
    if ( v7 >= 1 )
    {
      v8 = (float *)(a1 + 6);
      v9 = 0;
      while ( 1 )
      {
        v10 = (unsigned __int64 *)(a2 + 16);
        v11 = *(float32x4_t *)(v8 - 4);
        v12 = (__int64 *)(a2 + 16);
        if ( v11.n128_f32[1] >= 0.0 )
          v12 = (__int64 *)a2;
        v13 = *v12;
        v14 = a2 + 16;
        if ( v11.n128_f32[2] >= 0.0 )
          v14 = a2;
        if ( v11.n128_f32[0] >= 0.0 )
          v10 = (unsigned __int64 *)a2;
        v15.n128_u64[0] = *v10;
        v15.n128_u32[1] = HIDWORD(v13);
        v15.n128_u64[1] = FIELD_U32(v14, 8);
        v16 = vmulq_f32(v11, v15);
        v16.n128_u64[0] = vadd_f32(*(float32x2_t *)&v16.n128_i8[8], (float32x2_t)v16.n128_u64[0]).n64_u64[0];
        if ( (float)(vpadd_f32((float32x2_t)v16.n128_u64[0], (float32x2_t)v16.n128_u64[0]).n64_f32[0] + *v8) > 0.0 )
          break;
        ++v9;
        v8 += 8;
        if ( v9 >= v7 )
          return result;
      }
      return 0;
    }
  }
  return result;
}
