/* SE_EMY_KERONPA_FIRE_ref_2_helper_helper_31D334
 * address: 0x6031D334   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n64 __fastcall SE_EMY_KERONPA_FIRE_ref_2_helper_helper_31D334(int a1)
{
  unsigned int v1; // r1
  int v2; // r2
  float *v3; // r2
  __n64 result; // d0

  v1 = FIELD_U32(a1, 12584);
  v2 = (v1 >> 20) & 0xFF0;
  v1 &= 0xFFFFFFu;
  v3 = (float *)((char *)sinLutTable + v2);
  result.n64_f32[0] = FIELD_F32(a1, 108)
                    + (float)((float)(v3[2] + (float)((float)((float)v1 * v3[3]) * 0.000000059605)) * 4.0);
  result.n64_f32[1] = FIELD_F32(a1, 112)
                    + (float)((float)(*v3 + (float)((float)((float)v1 * v3[1]) * 0.000000059605)) * 4.0);
  return result;
}
