/* sub_6090A384
 * address: 0x6090A384   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6090A384(int a1, int a2, float *a3)
{
  float v3; // s4
  float v4; // s12
  float v5; // s9
  float v6; // s15
  float v7; // s16
  __n64 result; // d0
  float v9; // s11
  float v10; // s12

  result.n64_u32[0] = FIELD_U32(a1, 8);
  v3 = FIELD_F32(a1, 16);
  v4 = FIELD_F32(a1, 32);
  v5 = FIELD_F32(a1, 48);
  v6 = a3[1];
  v7 = a3[2];
  result.n64_f32[1] = (float)((float)((float)((float)((float)-(float)(FIELD_F32(a1, 4) * v3)
                                                    - (float)(FIELD_F32(a1, 20) * v4))
                                            - (float)(FIELD_F32(a1, 36) * v5))
                                    + (float)(FIELD_F32(a1, 20) * v6))
                            + (float)(FIELD_F32(a1, 36) * v7))
                    + (float)(FIELD_F32(a1, 4) * *a3);
  v9 = (float)((float)((float)((float)((float)-(float)(v3 * result.n64_f32[0]) - (float)(v4 * FIELD_F32(a1, 24)))
                             - (float)(v5 * FIELD_F32(a1, 40)))
                     + (float)(FIELD_F32(a1, 24) * v6))
             + (float)(FIELD_F32(a1, 40) * v7))
     + (float)(result.n64_f32[0] * *a3);
  v10 = (float)((float)((float)((float)((float)-(float)(v3 * FIELD_F32(a1, 12)) - (float)(v4 * FIELD_F32(a1, 28)))
                              - (float)(v5 * FIELD_F32(a1, 44)))
                      + (float)(FIELD_F32(a1, 28) * v6))
              + (float)(FIELD_F32(a1, 44) * v7))
      + (float)(FIELD_F32(a1, 12) * *a3);
  *(_DWORD *)a2 = result.n64_u32[1];
  FIELD_F32(a2, 4) = v9;
  FIELD_F32(a2, 8) = v10;
  return result;
}
