/* sub_60022760
 * address: 0x60022760   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60022760(float a1, float a2, int a3, int a4, unsigned int a5, int a6)
{
  float v6; // s4
  float v7[5]; // [sp+4h] [bp-14h] BYREF

  v6 = FIELD_F32(a4, 112);
  v7[0] = FIELD_F32(a4, 108) + a1;
  v7[1] = v6 + a2;
  v7[2] = 0.0;
  sub_60022540(1, (int)v7, a5, a6, 1);
}
