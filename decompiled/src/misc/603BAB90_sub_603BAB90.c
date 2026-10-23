/* sub_603BAB90
 * address: 0x603BAB90   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BAB90(int a1)
{
  int v1; // lr
  float *v2; // r1
  float v3; // r12
  float v4; // s16
  float v5; // r2
  float v6; // r1
  float v7; // s2
  float v8; // s22
  float v9; // s20
  float v10; // s0
  Vec3 v12; // [sp+4h] [bp-34h] BYREF

  v1 = FIELD_U8(a1, 22613);
  v2 = (float *)(a1 + 6456);
  v3 = FIELD_F32(a1, 6452);
  if ( FIELD_U8(a1, 22613) )
  {
    v4 = v3 + FIELD_F32(a1, 22624);
    v12.x = v4;
    v5 = *v2;
    v6 = *v2 + FIELD_F32(a1, 22628);
  }
  else
  {
    v12.x = FIELD_F32(a1, 6452);
    v4 = v3;
    v5 = *v2;
    v6 = *v2;
  }
  v12.y = v6;
  v12.z = 4500.0;
  if ( v1 )
  {
    v7 = v3 + FIELD_F32(a1, 22624);
    v5 = v5 + FIELD_F32(a1, 22628);
  }
  else
  {
    v7 = v3;
  }
  v8 = FIELD_F32(a1, 108) - v7;
  v9 = FIELD_F32(a1, 112) - v5;
  v10 = sqrtf((float)(v9 * v9) + (float)(v8 * v8));
  v12.x = v4 + (float)((float)(v8 / v10) * 5.0);
  v12.y = v6 + (float)((float)(v9 / v10) * 5.0);
  return EffectData_create(1231, &v12, 0, 0);
}
