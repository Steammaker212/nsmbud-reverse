/* sub_6008CF14
 * address: 0x6008CF14   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008CF14(int a1)
{
  int v1; // r1
  float v2; // s0
  float v3; // s4
  int v4; // r1

  v1 = dword_60CC6484;
  v2 = FIELD_F32(dword_60CC6484, 112) + -64.0;
  FIELD_F32(a1, 108) = v2;
  v3 = FIELD_F32(v1, 132);
  FIELD_F32(a1, 108) = v2;
  FIELD_F32(a1, 112) = v3 + 192.0;
  v4 = FIELD_U32(a1, 116);
  FIELD_F32(a1, 584) = v2;
  FIELD_F32(a1, 588) = v3 + 192.0;
  FIELD_U32(a1, 592) = v4;
  FIELD_U32(a1, 616) = v4;
  FIELD_F32(a1, 608) = v2;
  FIELD_F32(a1, 612) = v3 + 192.0;
  return sub_600D17F4(a1);
}
