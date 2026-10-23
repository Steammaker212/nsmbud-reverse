/* sub_60989190
 * address: 0x60989190   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60989190(int a1, int a2, int *a3, int a4, int a5)
{
  float v5; // s2
  float v6; // s4
  int v7; // r0
  float v8; // s0

  a3[1] = a5;
  v5 = FIELD_F32(a1, 32);
  v6 = FIELD_F32(a1, 36);
  v7 = *a3;
  v8 = (float)FIELD_U16(a2, 8) / 100.0;
  FIELD_F32(v7, 12) = v5 * v8;
  FIELD_F32(v7, 16) = v8 * v6;
  return 0;
}
