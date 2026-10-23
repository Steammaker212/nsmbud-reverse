/* sub_601BA56C
 * address: 0x601BA56C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_601BA56C(int a1, float *a2, int a3)
{
  int v6; // r7
  float v7; // s16
  int v8; // r6
  int v9; // r0
  float v10; // s8
  float v11; // s4
  unsigned int v12; // r0
  float *v13; // r1
  float v14; // s0
  float v15; // s14
  float v16; // s3
  __n64 result; // d0

  v6 = sub_601C5EEC(a1);
  v7 = flt_60AFCF9C[v6 + 9 + dword_60AFC128[sub_601CFE3C(dword_60C8AEF0) - 1]];
  v8 = sub_601C5EEC(a1);
  v9 = sub_601CFE3C(dword_60C8AEF0);
  v10 = (float)(-0.00030118 * 0.0) + 1.0;
  v11 = (float)(0.024541 * 0.0) + 0.0;
  v12 = (int)(float)((float)(flt_60AFCF9C[v8 - 1 + dword_60AFC128[v9 - 1]] * 2147500000.0) / 180.0) + a3;
  v13 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
  v14 = (float)(v12 & 0xFFFFFF) * 0.000000059605;
  v15 = *v13 + (float)(v14 * v13[1]);
  v16 = v13[2] + (float)(v14 * v13[3]);
  result.n64_f32[0] = *a2
                    + (float)((float)((float)((float)((float)((float)(v10 * (float)(v11 * v15)) - (float)(v11 * v10))
                                                    * 0.0)
                                            + (float)((float)(v10 * v16) * 0.0))
                                    + (float)(v7 * (float)((float)((float)(v10 * v10) * v15) + (float)(v11 * v11))))
                            + 0.0);
  result.n64_f32[1] = a2[1]
                    + (float)((float)((float)((float)((float)(v11 * v16) * 0.0)
                                            + (float)((float)((float)(v10 * v10) + (float)(v11 * (float)(v11 * v15)))
                                                    * 0.0))
                                    + (float)(v7 * (float)((float)((float)(v11 * v10) * v15) - (float)(v11 * v10))))
                            + 0.0);
  return result;
}
