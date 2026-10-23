/* sub_603F4BF4
 * address: 0x603F4BF4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603F4BF4(int a1, float *a2, int *a3)
{
  float result; // s0
  float v4; // s14

  result = (float)(FIELD_F32(a1, 2564) / 1280.0) + (float)((float)((float)*a3 / 1280.0) + -0.5);
  v4 = FIELD_F32(dword_60CC6484, 124)
     - (float)(FIELD_F32(dword_60CC6484, 108)
             * (float)((float)((float)((float)a3[1] / 720.0) + -0.5)
                     + (float)(1.0 - (float)(FIELD_F32(a1, 2568) / 720.0))));
  *a2 = FIELD_F32(dword_60CC6484, 112) + (float)(FIELD_F32(dword_60CC6484, 104) * result);
  a2[1] = v4;
  return result;
}
