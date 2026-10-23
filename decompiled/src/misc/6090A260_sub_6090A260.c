/* sub_6090A260
 * address: 0x6090A260   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall sub_6090A260(int a1, float *a2)
{
  float v2; // s4
  float v3; // s12
  __n64 result; // d0
  float v5; // s7
  float v6; // s8
  float v7; // s10

  result.n64_u32[0] = FIELD_U32(a1, 8);
  v2 = FIELD_F32(a1, 16);
  v3 = FIELD_F32(a1, 32);
  result.n64_u32[1] = FIELD_U32(a1, 36);
  v5 = FIELD_F32(a1, 48);
  v6 = (float)((float)-(float)(v2 * result.n64_f32[0]) - (float)(v3 * FIELD_F32(a1, 24)))
     - (float)(v5 * FIELD_F32(a1, 40));
  v7 = (float)((float)-(float)(v2 * FIELD_F32(a1, 12)) - (float)(v3 * FIELD_F32(a1, 28)))
     - (float)(v5 * FIELD_F32(a1, 44));
  *a2 = (float)((float)-(float)(FIELD_F32(a1, 4) * v2) - (float)(FIELD_F32(a1, 20) * v3))
      - (float)(result.n64_f32[1] * v5);
  a2[1] = v6;
  a2[2] = v7;
  return result;
}
