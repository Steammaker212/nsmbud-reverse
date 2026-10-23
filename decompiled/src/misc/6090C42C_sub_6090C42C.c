/* sub_6090C42C
 * address: 0x6090C42C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6090C42C(int a1, float a2, float a3, float a4, float a5)
{
  float v7; // s18

  FIELD_F32(a1, 148) = a2;
  FIELD_F32(a1, 152) = a3;
  FIELD_U8(a1, 4) = 1;
  FIELD_F32(a1, 156) = a4;
  v7 = a4 * 0.5;
  FIELD_F32(a1, 160) = sinf(a4 * 0.5);
  FIELD_F32(a1, 164) = cosf(v7);
  FIELD_F32(a1, 168) = tanf(v7);
  FIELD_F32(a1, 172) = a5;
  FIELD_U8(a1, 4) = 1;
}
