/* sub_6069E608
 * address: 0x6069E608   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6069E608(int a1, int a2, float a3)
{
  float v5; // s2
  float v7[2]; // [sp+0h] [bp-20h] BYREF
  float v8[6]; // [sp+8h] [bp-18h] BYREF

  FIELD_F32(a1, 696) = a3;
  v7[0] = FIELD_F32(a1, 700);
  v7[1] = 0.0;
  v8[0] = -v7[0];
  v8[1] = a3 + 16.0;
  sub_60165340(a1 + 40, v8, v7);
  v5 = FIELD_F32(a1, 696);
  FIELD_U32(a2, 144) = 1065353216;
  FIELD_F32(a2, 148) = v5 * 0.0625;
  FIELD_U32(a2, 152) = 1065353216;
  return v5 * 0.0625;
}
