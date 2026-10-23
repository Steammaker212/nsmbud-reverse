/* sub_60801F98
 * address: 0x60801F98   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60801F98(float *a1, int a2)
{
  float *v2; // r5
  float *v3; // r6

  v2 = *(float **)a2;
  v3 = *(float **)(a2 + 12);
  sub_608009D4((int)a1, FIELD_U32(a2, 8));
  sub_608009AC(a1);
  a1[7] = (float)((float)(v3[11] + v3[12]) * 0.5) - (float)(a1[5] * 0.5);
  a1[8] = (float)((float)((float)(v3[13] + v3[14]) * 0.5) + 16.0) + (float)(a1[6] * 0.5);
  sub_60800A24((int)a1, v2);
  return sub_60800A5C((int)a1, (int)v2);
}
