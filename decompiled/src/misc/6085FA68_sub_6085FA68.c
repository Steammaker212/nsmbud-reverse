/* sub_6085FA68
 * address: 0x6085FA68   size: 1308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085FA68(_DWORD *a1)
{
  float32x2_t v1; // d10
  int v3; // r0
  float32x2_t v4; // d0
  float32x2_t v5; // d1
  int v6; // r4
  int v7; // r0
  int v8; // r8
  float v9; // s30
  float v10; // s26
  float v11; // s24
  float v12; // s28
  int v13; // r6
  float v14; // s17
  float *v15; // r0
  float v16; // s23
  float v17; // s25
  float v18; // s16
  float v19; // s18
  float v20; // s16
  int v21; // r7
  float v22; // s29
  float v23; // s18
  float v24; // s16
  float v25; // s18
  int i; // r6
  float v27; // s30
  float v28; // s18
  float v29; // s30
  float v30; // s16

  v3 = sub_608A7E0C(a1);
  v4.n64_u32[0] = a1[11];
  v5.n64_u32[0] = a1[10];
  v1.n64_u32[0] = 1.0;
  v6 = v3;
  v7 = a1[12];
  v8 = v7 + 1;
  v9 = vmin_f32(v5, v1).n64_f32[0];
  v10 = vmin_f32(v4, v1).n64_f32[0];
  v11 = 1.0 - v10;
  v12 = 1.0 - v9;
  if ( v7 == -1 )
  {
    if ( (sub_608A7E48(a1) & 1) != 0 )
    {
      FIELD_U32(v6, 8) = 0;
      *(float *)v6 = v12;
      FIELD_F32(v6, 4) = v11;
      v6 += 12;
    }
    if ( (sub_608A7E48(a1) & 4) != 0 )
    {
      *(float *)v6 = (float)(v12 * 0.5) + 0.5;
      FIELD_F32(v6, 4) = 1.0 - (float)((float)(v11 * 0.5) + 0.5);
      v6 += 8;
    }
    v24 = -v12;
    if ( (sub_608A7E48(a1) & 1) != 0 )
    {
      FIELD_U32(v6, 8) = 0;
      *(float *)v6 = v24;
      FIELD_F32(v6, 4) = v11;
      v6 += 12;
    }
    if ( (sub_608A7E48(a1) & 4) != 0 )
    {
      *(float *)v6 = (float)(v12 * -0.5) + 0.5;
      FIELD_F32(v6, 4) = 1.0 - (float)((float)(v11 * 0.5) + 0.5);
      v6 += 8;
    }
    v25 = -v11;
    if ( (sub_608A7E48(a1) & 1) != 0 )
    {
      FIELD_U32(v6, 8) = 0;
      *(float *)v6 = v24;
      FIELD_F32(v6, 4) = v25;
      v6 += 12;
    }
    if ( (sub_608A7E48(a1) & 4) != 0 )
    {
      *(float *)v6 = (float)(v12 * -0.5) + 0.5;
      FIELD_F32(v6, 4) = 1.0 - (float)((float)(v11 * -0.5) + 0.5);
      v6 += 8;
    }
    if ( (sub_608A7E48(a1) & 1) != 0 )
    {
      FIELD_U32(v6, 8) = 0;
      *(float *)v6 = v12;
      FIELD_F32(v6, 4) = v25;
      v6 += 12;
    }
    if ( (sub_608A7E48(a1) & 4) != 0 )
    {
      *(float *)v6 = (float)(v12 * 0.5) + 0.5;
      FIELD_F32(v6, 4) = 1.0 - (float)((float)(v11 * -0.5) + 0.5);
      v6 += 8;
    }
  }
  else
  {
    v13 = 0;
    v14 = nn__util__FloatPi * 0.5;
    do
    {
      v15 = (float *)((char *)&unk_60AF4F90 + 8 * v13);
      v16 = *v15;
      v17 = v15[1];
      v18 = v11 * v17;
      v19 = v12 * *v15;
      if ( (sub_608A7E48(a1) & 1) != 0 )
      {
        FIELD_U32(v6, 8) = 0;
        *(float *)v6 = v19;
        FIELD_F32(v6, 4) = v18;
        v6 += 12;
      }
      if ( (sub_608A7E48(a1) & 4) != 0 )
      {
        *(float *)v6 = (float)(v19 * 0.5) + 0.5;
        FIELD_F32(v6, 4) = 1.0 - (float)((float)(v18 * 0.5) + 0.5);
        v6 += 8;
      }
      v20 = 0.0;
      v21 = v8;
      do
      {
        v22 = (float)(v12 + (float)(v9 * cosf(v20))) * v16;
        v23 = (float)(v11 + (float)(v10 * sinf(v20))) * v17;
        if ( (sub_608A7E48(a1) & 1) != 0 )
        {
          FIELD_U32(v6, 8) = 0;
          *(float *)v6 = v22;
          FIELD_F32(v6, 4) = v23;
          v6 += 12;
        }
        if ( (sub_608A7E48(a1) & 4) != 0 )
        {
          *(float *)v6 = (float)(v22 * 0.5) + 0.5;
          FIELD_F32(v6, 4) = 1.0 - (float)((float)(v23 * 0.5) + 0.5);
          v6 += 8;
        }
        --v21;
        v20 = v20 + (float)(v14 * (float)(1.0 / (float)(unsigned int)a1[12]));
      }
      while ( v21 );
      ++v13;
    }
    while ( v13 != 4 );
  }
  if ( (float)(v9 + v9) < 2.0 )
  {
    for ( i = 0; i != 32; i += 8 )
    {
      v27 = *(float *)((char *)&unk_60AF4F90 + i + 4);
      v28 = v12 * *(float *)((char *)&unk_60AF4F90 + i);
      if ( (sub_608A7E48(a1) & 1) != 0 )
      {
        FIELD_U32(v6, 8) = 0;
        *(float *)v6 = v28;
        FIELD_F32(v6, 4) = v27;
        v6 += 12;
      }
      if ( (sub_608A7E48(a1) & 4) != 0 )
      {
        *(float *)v6 = (float)(v28 * 0.5) + 0.5;
        FIELD_F32(v6, 4) = 1.0 - (float)((float)(v27 * 0.5) + 0.5);
        v6 += 8;
      }
      v29 = v11 * v27;
      if ( (sub_608A7E48(a1) & 1) != 0 )
      {
        FIELD_U32(v6, 8) = 0;
        *(float *)v6 = v28;
        FIELD_F32(v6, 4) = v29;
        v6 += 12;
      }
      if ( (sub_608A7E48(a1) & 4) != 0 )
      {
        *(float *)v6 = (float)(v28 * 0.5) + 0.5;
        FIELD_F32(v6, 4) = 1.0 - (float)((float)(v29 * 0.5) + 0.5);
        v6 += 8;
      }
    }
  }
  if ( (float)(v10 + v10) < 2.0 )
  {
    if ( (sub_608A7E48(a1) & 1) != 0 )
    {
      *(_DWORD *)v6 = 1065353216;
      FIELD_F32(v6, 4) = v11;
      FIELD_U32(v6, 8) = 0;
      v6 += 12;
    }
    if ( (sub_608A7E48(a1) & 4) != 0 )
    {
      *(_DWORD *)v6 = 1065353216;
      FIELD_F32(v6, 4) = 1.0 - (float)((float)(v11 * 0.5) + 0.5);
      v6 += 8;
    }
    if ( (sub_608A7E48(a1) & 1) != 0 )
    {
      *(_DWORD *)v6 = -1082130432;
      FIELD_F32(v6, 4) = v11;
      FIELD_U32(v6, 8) = 0;
      v6 += 12;
    }
    if ( (sub_608A7E48(a1) & 4) != 0 )
    {
      *(_DWORD *)v6 = 0;
      FIELD_F32(v6, 4) = 1.0 - (float)((float)(v11 * 0.5) + 0.5);
      v6 += 8;
    }
    v30 = -v11;
    if ( (sub_608A7E48(a1) & 1) != 0 )
    {
      *(_DWORD *)v6 = -1082130432;
      FIELD_F32(v6, 4) = v30;
      FIELD_U32(v6, 8) = 0;
      v6 += 12;
    }
    if ( (sub_608A7E48(a1) & 4) != 0 )
    {
      *(_DWORD *)v6 = 0;
      FIELD_F32(v6, 4) = 1.0 - (float)((float)(v11 * -0.5) + 0.5);
      v6 += 8;
    }
    if ( (sub_608A7E48(a1) & 1) != 0 )
    {
      *(_DWORD *)v6 = 1065353216;
      FIELD_F32(v6, 4) = v30;
      FIELD_U32(v6, 8) = 0;
      v6 += 12;
    }
    if ( (sub_608A7E48(a1) & 4) != 0 )
    {
      *(_DWORD *)v6 = 1065353216;
      FIELD_F32(v6, 4) = 1.0 - (float)((float)(v11 * -0.5) + 0.5);
      v6 += 8;
    }
  }
  return v6;
}
