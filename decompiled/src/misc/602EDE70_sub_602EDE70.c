/* sub_602EDE70
 * address: 0x602EDE70   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EDE70(int a1)
{
  float v2; // r0
  float v3; // r1
  float v4; // r2
  float v5; // s18
  float v6; // s2
  float32x2_t v8; // [sp+0h] [bp-48h] BYREF
  float v9; // [sp+8h] [bp-40h]
  float v10; // [sp+Ch] [bp-3Ch]
  float v11; // [sp+10h] [bp-38h]
  float v12; // [sp+14h] [bp-34h]
  float v13; // [sp+18h] [bp-30h]
  float v14; // [sp+1Ch] [bp-2Ch]
  float v15; // [sp+20h] [bp-28h]
  float v16; // [sp+24h] [bp-24h]
  float v17; // [sp+28h] [bp-20h]
  float v18; // [sp+2Ch] [bp-1Ch]

  v8.n64_u64[0] = 1065353216;
  v9 = 0.0;
  v11 = 0.0;
  v12 = 1.0;
  v13 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 1.0;
  v2 = FIELD_F32(a1, 7384);
  v10 = v2;
  v3 = FIELD_F32(a1, 7388);
  v14 = v3;
  v4 = FIELD_F32(a1, 7392);
  v18 = v4;
  if ( FIELD_U8(a1, 7534) == 8 )
  {
    Mtx34_rotateZ(&v8, (unsigned int *)(a1 + 7396));
  }
  else
  {
    v5 = FIELD_F32(a1, 7404) * 0.5;
    v6 = (float)(v5 * 0.0) + 0.0;
    v10 = v2 + v6;
    v14 = v3 + (float)(v5 + 0.0);
    v18 = v4 + v6;
    Mtx34_rotateZ(&v8, (unsigned int *)(a1 + 7396));
    v10 = v10 + (float)((float)((float)(v8.n64_f32[0] * 0.0) - (float)(v8.n64_f32[1] * v5)) + (float)(v9 * 0.0));
    v14 = v14 + (float)((float)((float)(v11 * 0.0) - (float)(v12 * v5)) + (float)(v13 * 0.0));
    v18 = v18 + (float)((float)((float)(v15 * 0.0) - (float)(v16 * v5)) + (float)(v17 * 0.0));
  }
  return sub_602F296C(a1 + 7348, &v8);
}
