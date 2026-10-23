/* sub_606E8194
 * address: 0x606E8194   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606E8194(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r1

  sub_606E8220(a1);
  sub_606E832C(a1);
  sub_606E84F8(a1);
  LightMask__init((RevealMaskRelated *)(a1 + 648), 0, 2);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 652) = 1124204544;
  FIELD_U32(a1, 660) = v4;
  FIELD_F32(a1, 664) = v2 + 4.0;
  FIELD_U32(a1, 668) = v3;
  LightMask__update((LightMask *)(a1 + 648));
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0x40000000;
  FIELD_U32(a1, 500) = 1132462080;
  FIELD_U32(a1, 504) = 1132462080;
  return 1;
}
