/* sub_6061D384
 * address: 0x6061D384   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061D384(int a1)
{
  float v1; // s4
  float v2; // s0
  float v3; // s2
  float v4; // s6
  int v6[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(a1, 6772) = 60;
  v1 = FIELD_F32(a1, 148) * 0.016667;
  v2 = FIELD_F32(a1, 152) * 0.016667;
  FIELD_F32(a1, 6760) = FIELD_F32(a1, 144) * 0.016667;
  FIELD_F32(a1, 6764) = v1;
  FIELD_F32(a1, 6768) = v2;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 576);
  *(float *)v6 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  *(float *)&v6[1] = v3 + v4;
  return sub_602F32F8((_BYTE *)(a1 + 6776), v6, 5u, 0);
}
