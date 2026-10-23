/* sub_60201418
 * address: 0x60201418   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60201418(int a1)
{
  float v2; // s2
  float v3; // s4
  float v5[7]; // [sp+4h] [bp-1Ch] BYREF

  v5[0] = -1.0;
  v5[1] = 0.0;
  v5[2] = 0.0;
  sub_601862E0(a1, v5);
  FIELD_U32(a1, 360) = 1117782016;
  FIELD_U32(a1, 200) = 1075894651;
  FIELD_U32(a1, 348) = 21474836;
  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 120) = 0;
  v2 = FIELD_F32(a1, 332);
  v3 = FIELD_F32(a1, 336);
  FIELD_U32(a1, 80) = FIELD_U32(a1, 328);
  FIELD_F32(a1, 84) = v2 + 100.0;
  FIELD_F32(a1, 88) = v3 + -80.0;
  FIELD_U32(a1, 128) = 1076887552;
  FIELD_U32(a1, 132) = 1076887552;
  FIELD_U32(a1, 136) = 1076887552;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 344) = 0;
  return 1076887552;
}
