/* sub_6059892C
 * address: 0x6059892C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059892C(int a1)
{
  unsigned __int32 v2; // r3
  float v3; // r4
  int v4; // r5
  float v5; // r6
  float v6; // r7
  int v7; // r3
  float v8; // r4
  float v9; // r5
  float v10; // r6
  int v11; // r7
  float v12; // s2
  float v13; // s0
  float v15; // [sp+4h] [bp-54h] BYREF
  float v16; // [sp+8h] [bp-50h]
  float v17; // [sp+Ch] [bp-4Ch]
  float32x2_t v18; // [sp+10h] [bp-48h] BYREF
  float v19; // [sp+18h] [bp-40h]
  int v20; // [sp+1Ch] [bp-3Ch]
  float v21; // [sp+20h] [bp-38h]
  float v22; // [sp+24h] [bp-34h]
  float v23; // [sp+28h] [bp-30h]
  int v24; // [sp+2Ch] [bp-2Ch]
  float v25; // [sp+30h] [bp-28h]
  float v26; // [sp+34h] [bp-24h]
  float v27; // [sp+38h] [bp-20h]
  int v28; // [sp+3Ch] [bp-1Ch]

  if ( (FIELD_U8(a1, 6262) & 8) == 0 )
    JUMPOUT(0x605D84C8);
  sub_605D862C();
  v2 = FIELD_U32(a1, 6676);
  v3 = FIELD_F32(a1, 6680);
  v4 = FIELD_U32(a1, 6684);
  v5 = FIELD_F32(a1, 6688);
  v6 = FIELD_F32(a1, 6692);
  v18.n64_u32[0] = FIELD_U32(a1, 6672);
  v18.n64_u32[1] = v2;
  v19 = v3;
  v20 = v4;
  v21 = v5;
  v22 = v6;
  v7 = FIELD_U32(a1, 6700);
  v8 = FIELD_F32(a1, 6704);
  v9 = FIELD_F32(a1, 6708);
  v10 = FIELD_F32(a1, 6712);
  v11 = FIELD_U32(a1, 6716);
  v23 = FIELD_F32(a1, 6696);
  v24 = v7;
  v25 = v8;
  v26 = v9;
  v27 = v10;
  v28 = v11;
  if ( sub_605DBD64(a1) == 1 )
  {
    v12 = (float)((float)((float)FIELD_S32(a1, 160) * 1.0) / 2147500000.0) / 0.375;
    v13 = 1.0;
    if ( v12 <= 1.0 )
    {
      if ( v12 >= -1.0 )
        v13 = -v12;
    }
    else
    {
      v13 = -1.0;
    }
    LODWORD(v15) = (int)(float)(v13 * 357910000.0);
    Mtx34_rotateY(&v18, (unsigned int *)&v15);
  }
  sub_605D8818(a1, &v15);
  v18.n64_f32[0] = v18.n64_f32[0] * v15;
  v21 = v15 * v21;
  v25 = v25 * v15;
  v18.n64_f32[1] = v18.n64_f32[1] * v16;
  v22 = v16 * v22;
  v26 = v26 * v16;
  v19 = v19 * v17;
  v23 = v17 * v23;
  v27 = v27 * v17;
  sub_6059B974(a1 + 8036, &v18);
  return sub_6059BDC4(a1 + 8036, a1 + 144);
}
