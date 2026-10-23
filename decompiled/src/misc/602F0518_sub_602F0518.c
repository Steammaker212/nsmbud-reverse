/* sub_602F0518
 * address: 0x602F0518   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F0518(int a1)
{
  float v2; // s16
  float *v3; // r5
  float v4; // s18
  int v5; // r0
  float v6; // s20
  float v7; // s22
  float v8; // s2
  float v9; // s4
  float v11; // r1
  float v12[2]; // [sp+4h] [bp-44h] BYREF
  float v13; // [sp+Ch] [bp-3Ch] BYREF
  float v14; // [sp+10h] [bp-38h]
  int v15; // [sp+14h] [bp-34h]

  v2 = FIELD_F32(a1, 112);
  v3 = (float *)(a1 + 7404);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_U32(a1, 116);
  v6 = FIELD_F32(a1, 572);
  v7 = FIELD_F32(a1, 576);
  v8 = *v3;
  v9 = FIELD_F32(a1, 112);
  v13 = v4;
  v14 = v9 + (float)(v8 * 0.7);
  v15 = v5;
  ((void (__fastcall *)(float *, _DWORD, float *, _DWORD))checkLiquidCollisions)(
    v12,
    0,
    &v13,
    FIELD_U8(a1, 86));
  v13 = v4 + v6;
  v14 = v2 + v7;
  if ( LODWORD(v12[0]) == 1 )
    return sub_602F32F8(a1 + 6784, &v13, 10, 0);
  v11 = *v3;
  v12[0] = FIELD_F32(a1, 7400);
  v12[1] = v11;
  return sub_602F3414(a1 + 6784, &v13, v12, 4);
}
