/* sub_6090C2F8
 * address: 0x6090C2F8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090C2F8(int a1, float a2)
{
  float v3; // s16
  float v4; // s0

  FIELD_F32(a1, 156) = a2;
  v3 = a2 * 0.5;
  FIELD_F32(a1, 160) = sinf(a2 * 0.5);
  FIELD_F32(a1, 164) = cosf(v3);
  v4 = tanf(v3);
  FIELD_F32(a1, 168) = v4;
  FIELD_U8(a1, 4) = 1;
  return 1;
}
