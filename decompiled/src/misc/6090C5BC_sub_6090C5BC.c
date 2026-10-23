/* sub_6090C5BC
 * address: 0x6090C5BC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090C5BC(float *a1, int a2, float *a3)
{
  float result; // s0

  FIELD_F32(a2, 8) = -a1[37];
  *(_DWORD *)a2 = 0;
  FIELD_U32(a2, 4) = 0;
  FIELD_F32(a2, 4) = (float)((float)((float)(a1[37] + a1[37]) * a1[42]) * 0.5)
                     * (float)(a3[1] + (float)(a1[45] + a1[45]));
  result = (float)((float)((float)((float)(a1[37] + a1[37]) * a1[42]) * a1[43]) * 0.5)
         * (float)(*a3 + (float)(a1[44] + a1[44]));
  *(float *)a2 = result;
  return result;
}
