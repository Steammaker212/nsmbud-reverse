/* sub_60960688
 * address: 0x60960688   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60960688(int a1, float *a2, float *a3)
{
  float v3; // s0
  float v4; // s6
  float v5; // s2
  float v6; // s4
  float v8[8]; // [sp+0h] [bp-20h] BYREF

  v3 = *a3;
  v4 = a3[3];
  v5 = a3[1];
  v6 = a3[2];
  v8[0] = *a3 - v4;
  v8[1] = v5 - v4;
  v8[2] = v6 - v4;
  v8[3] = v4 + v3;
  v8[4] = v4 + v5;
  v8[5] = v4 + v6;
  return sub_6096030C(a1, a2, v8);
}
