/* sub_6070D740
 * address: 0x6070D740   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070D740(int a1)
{
  unsigned int v2; // r0
  int v3; // r5
  float v4; // s2
  float v5; // s2

  v2 = (FIELD_U32(a1, 20) >> 8) & 0xF;
  if ( v2 > 0xC )
    v2 = 0;
  v3 = sub_6070E920(v2);
  sub_6070D81C(a1, v3);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) - FIELD_F32(v3, 40);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - FIELD_F32(v3, 44);
  FIELD_U32(a1, 6552) = FIELD_U32(v3, 40);
  v4 = FIELD_F32(v3, 44) + FIELD_F32(v3, 44);
  FIELD_F32(a1, 508) = FIELD_F32(v3, 40) * -2.0;
  FIELD_F32(a1, 512) = v4;
  v5 = (float)(FIELD_F32(v3, 44) + FIELD_F32(v3, 44)) + 64.0;
  FIELD_F32(a1, 6536) = 64.0 - (float)(FIELD_F32(v3, 40) + FIELD_F32(v3, 40));
  FIELD_F32(a1, 6540) = v5;
  sub_60161BEC((_DWORD *)(a1 + 6128), a1, (_DWORD *)(v3 + 16), FIELD_U8(v3, 48), 0);
  return 1;
}
