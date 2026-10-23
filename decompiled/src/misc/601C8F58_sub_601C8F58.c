/* sub_601C8F58
 * address: 0x601C8F58   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_601C8F58(int a1, int a2)
{
  int v4; // r0
  float v5; // s16
  float v6; // s18
  unsigned int v7; // r6
  float *v8; // r1
  float v9; // s28
  float v10; // s30
  float v11; // s17
  float v12; // s19
  float v13; // s24
  float v14; // s20
  float v15; // s0
  float v16; // s28
  float v17; // s17
  float *v18; // r0
  float v19; // s4
  __n128 result; // q0
  _DWORD v21[23]; // [sp+4h] [bp-5Ch] BYREF

  v4 = FIELD_U32(a1, 1208);
  if ( v4 == 7 )
  {
    v5 = 1200.0;
    v6 = 500.0;
    v7 = sub_601E0C28(FIELD_U32(a1, 1212)) ^ 0x80000000;
    v4 = FIELD_U32(a1, 1208);
  }
  else
  {
    v5 = -100.0;
    v6 = 800.0;
    v7 = 0;
  }
  v8 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  memset(v21, 255, 12);
  sub_601E06F0(v4, v21);
  v13 = (float)(-0.00030118 * 0.0) + 1.0;
  v14 = (float)(0.024541 * 0.0) + 0.0;
  v15 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v16 = v9 + (float)(v15 * v10);
  v17 = v11 + (float)(v15 * v12);
  v18 = (float *)sub_601DFFE4(v21);
  v19 = v18[20];
  result.n128_f32[0] = (float)((float)((float)((float)(v6
                                                     * (float)((float)(v13 * (float)(v14 * v16)) - (float)(v14 * v13)))
                                             + (float)((float)(v13 * v17) * 0.0))
                                     + (float)(v5 * (float)((float)((float)(v13 * v13) * v16) + (float)(v14 * v14))))
                             + 0.0)
                     + v18[18];
  result.n128_f32[2] = (float)((float)((float)((float)(v6
                                                     * (float)((float)(v13 * v13) + (float)(v14 * (float)(v14 * v16))))
                                             + (float)((float)(v14 * v17) * 0.0))
                                     + (float)(v5 * (float)((float)((float)(v14 * v13) * v16) - (float)(v14 * v13))))
                             + 0.0)
                     + v18[19];
  *(_DWORD *)a2 = result.n128_u32[0];
  FIELD_U32(a2, 4) = result.n128_u32[2];
  FIELD_F32(a2, 8) = (float)((float)((float)((float)(v6 * (float)(v14 * v17)) - (float)(v16 * 0.0))
                                     + (float)(v5 * (float)(v13 * v17)))
                             + 0.0)
                     + v19;
  return result;
}
