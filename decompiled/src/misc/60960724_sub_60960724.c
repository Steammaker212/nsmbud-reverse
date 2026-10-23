/* sub_60960724
 * address: 0x60960724   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60960724(int a1, float *a2)
{
  float v2; // s2
  float v3; // s4
  float v4; // s6
  float v6[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a2[1];
  v3 = a2[2];
  v4 = a2[3];
  v6[0] = -*a2;
  v6[1] = -v2;
  v6[2] = -v3;
  v6[3] = -v4;
  return sub_609630E0(a1 + 68, v6);
}
