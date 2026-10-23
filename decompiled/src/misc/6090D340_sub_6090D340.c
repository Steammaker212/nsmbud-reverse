/* sub_6090D340
 * address: 0x6090D340   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090D340(int a1, float *a2, float *a3)
{
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float result; // s0
  float v10[20]; // [sp+0h] [bp-50h] BYREF

  sub_6042E898(v10, (float *)(a1 + 148));
  v5 = *a3;
  v6 = a3[1];
  v7 = a3[2];
  v8 = 1.0 / (float)(v10[15] + (float)((float)((float)(v6 * v10[13]) + (float)(*a3 * v10[12])) + (float)(v7 * v10[14])));
  *a2 = v8 * (float)(v10[3] + (float)((float)((float)(v6 * v10[1]) + (float)(*a3 * v10[0])) + (float)(v7 * v10[2])));
  a2[1] = v8 * (float)(v10[7] + (float)((float)((float)(v6 * v10[5]) + (float)(v5 * v10[4])) + (float)(v7 * v10[6])));
  result = v8 * (float)(v10[11] + (float)((float)((float)(v6 * v10[9]) + (float)(v5 * v10[8])) + (float)(v7 * v10[10])));
  a2[2] = result;
  return result;
}
