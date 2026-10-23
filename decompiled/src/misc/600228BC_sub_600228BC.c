/* sub_600228BC
 * address: 0x600228BC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600228BC(float a1, float a2, int a3, int a4, unsigned int a5, int a6)
{
  float v6; // s4
  float v8[5]; // [sp+4h] [bp-14h] BYREF

  v6 = FIELD_F32(a4, 112);
  v8[0] = FIELD_F32(a4, 108) + a1;
  v8[1] = v6 + a2;
  v8[2] = 0.0;
  return sub_600227A0(0, (int)v8, a5, a6);
}
