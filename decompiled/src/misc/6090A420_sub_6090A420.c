/* sub_6090A420
 * address: 0x6090A420   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090A420(float *a1, int a2, float *a3, int a4, int a5)
{
  float v5; // s10
  float v6; // s8
  float v7; // s12
  float v9[5]; // [sp+4h] [bp-14h] BYREF

  v5 = a3[1];
  v6 = *a3;
  v7 = a3[2];
  v9[0] = a1[4] + (float)((float)((float)(v5 * a1[2]) + (float)(*a3 * a1[1])) + (float)(v7 * a1[3]));
  v9[1] = a1[8] + (float)((float)((float)(v5 * a1[6]) + (float)(v6 * a1[5])) + (float)(v7 * a1[7]));
  v9[2] = a1[12] + (float)((float)((float)(v5 * a1[10]) + (float)(v6 * a1[9])) + (float)(v7 * a1[11]));
  return sub_6090C000(a4, a2, v9, a5);
}
