/* sub_608BC5E8
 * address: 0x608BC5E8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC5E8(int result, int a2, int a3, float32x2_t a4, float32x2_t a5)
{
  unsigned __int32 v5; // s0
  unsigned __int16 v6; // r1
  int i; // r3
  int v8; // lr
  float v9; // s2
  int v10; // r4
  int v11; // r5

  if ( a2 )
  {
    a5.n64_u32[0] = 0;
    v5 = vmax_f32(a4, a5).n64_u32[0];
    v6 = FIELD_U16(result, 572) & a2;
    for ( i = 0; i != 128; i += 16 )
    {
      if ( (v6 & 1) != 0 )
      {
        v8 = result + i;
        v9 = *(float *)(result + i + 448);
        v10 = *(_DWORD *)(result + i + 452);
        v11 = *(_DWORD *)(result + i + 456);
        if ( v11 < v10 )
          v9 = FIELD_F32(v8, 444) + (float)((float)((float)v11 * (float)(v9 - FIELD_F32(v8, 444))) / (float)v10);
        FIELD_F32(v8, 444) = v9;
        FIELD_U32(v8, 448) = v5;
        FIELD_U32(v8, 452) = a3;
        FIELD_U32(v8, 456) = 0;
      }
      v6 >>= 1;
    }
  }
  return result;
}
