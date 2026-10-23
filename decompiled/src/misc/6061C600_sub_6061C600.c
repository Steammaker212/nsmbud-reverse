/* sub_6061C600
 * address: 0x6061C600   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061C600(int a1, float a2, float a3)
{
  int v4; // r5
  float *v5; // r8
  unsigned int v6; // r6
  int v7; // r0
  float v8; // r1

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 88) = 0;
  v4 = a1 + 88;
  FIELD_F32(a1, 6872) = a3;
  FIELD_F32(a1, 6100) = a3;
  v5 = (float *)(a1 + 6864);
  v6 = FIELD_U32(a1, 20);
  FIELD_F32(a1, 6864) = a2 * -0.5;
  FIELD_F32(a1, 6868) = a3;
  FIELD_U32(a1, 6852) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6856) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6860) = FIELD_U32(a1, 116);
  v7 = sub_607D7FBC(a1 + 6808, a1 + 6852, a1 + 120, a1 + 88, (v6 >> 20) & 0xF, HIBYTE(v6), HIWORD(v6) & 1);
  FIELD_U8(v4, 6825) = v7;
  v8 = FIELD_F32(v4, 6764);
  FIELD_F32(v4, 20) = v8;
  FIELD_U32(v4, 24) = FIELD_U32(v4, 6768);
  FIELD_U32(v4, 28) = FIELD_U32(v4, 6772);
  if ( v7 == 1 )
    FIELD_F32(a1, 108) = v8 - *v5;
  FIELD_U8(a1, 6912) = (v6 & 0x10) != 0;
  return sub_6061C4A0(a1);
}
