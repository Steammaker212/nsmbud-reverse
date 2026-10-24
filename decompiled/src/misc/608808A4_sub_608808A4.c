/* sub_608808A4
 * address: 0x608808A4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float32x4_t *__fastcall sub_608808A4(
        float32x4_t *result,
        float *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        double a15)
{
  unsigned __int32 v15; // r12
  unsigned __int32 v16; // r3
  float v17; // s4
  float v18; // s0
  float v19; // s0
  float v20; // s0
  float v21; // s2
  float v22; // s0

  v15 = result[8].n128_u32[2];
  v16 = FIELD_U32(result + (9) * 16, 0x0)[0];
  LODWORD(v17) = (FIELD_S32(v15, 2060) * (unsigned __int64)v16) >> 32;
  v18 = (float)FIELD_S32(v15, 2056) + 1.0;
  FIELD_U32(result + (9) * 16, 0x0)[0] = 1103515245 * v16 + 12345;
  v19 = v18 + (float)SLODWORD(v17);
  *a2 = v19;
  v20 = FIELD_F32(result + (6) * 16, 0x0)[0] * v19;
  *a2 = v20;
  v21 = *(float *)(FIELD_U32(result + (7) * 16, 0x0)[1] + 72);
  v22 = v21 * v20;
  *a2 = v22;
  if ( *(_BYTE *)(result[8].n128_u32[2] + 1880) )
    return sub_60880330(result, v22, a4, v21, a6, v17, a8, a9, a10, a11, a12, a13, a14, a15);
  return result;
}
