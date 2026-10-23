/* sub_602C0948
 * address: 0x602C0948   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602C0948(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  _BYTE *v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r2
  int v9; // r1
  int v11; // r0
  unsigned int v12; // r0
  float *v13; // r1
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float v17; // s6
  float v18; // s8
  float v19; // s12
  float32x2_t v20; // d0
  float32x2_t v21; // d2
  int v22; // r1
  int v23; // r0
  _DWORD *v24; // r1
  int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r1
  _DWORD *v28; // r0
  int v29; // r1
  unsigned int v30; // r2
  unsigned int v31; // r0
  float v32; // r1
  Vec3 v34; // [sp+0h] [bp-20h] BYREF

  v4 = FIELD_U32(a1, 6504);
  v2 = (_DWORD *)(a1 + 6504);
  v3 = v4;
  if ( v4 >= 1 )
    *v2 = v3 - 1;
  v5 = (_BYTE *)(a1 + 6485);
  v6 = FIELD_U8(a1, 6485);
  if ( !FIELD_U8(a1, 6485) )
  {
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) == 0 )
      goto LABEL_10;
    v6 = 32;
    *v5 = 32;
  }
  v7 = v6 - 1;
  if ( v7 )
    v8 = FIELD_U32(a1, 160) + dword_60C911E4;
  else
    v8 = 0;
  FIELD_U32(a1, 160) = v8;
  *v5 = v7;
LABEL_10:
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  v9 = FIELD_U32(a1, 6500);
  if ( v9 == 2 )
  {
    v12 = FIELD_U32(a1, 164) + 0x40000000;
    v13 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v18 = (float)(v12 & 0xFFFFFF);
    v19 = FIELD_F32(a1, 88);
    FIELD_U32(a1, 128) = 0;
    FIELD_F32(a1, 120) = v19 * (float)(v16 + (float)((float)(v18 * v17) * 0.000000059605));
    FIELD_F32(a1, 124) = v19 * (float)(v14 + (float)((float)(v18 * v15) * 0.000000059605));
    CollisionActor__sub_600034C8((CollisionActor *)a1);
    nullsub_7();
    v22 = FIELD_U32(a1, 2872);
    if ( (v22 & 0x10400) == 0x400 || (v23 = FIELD_U32(a1, 8904), (v23 & 0x10400) == 0x400) )
    {
      FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
      FIELD_U32(a1, 124) = 0;
    }
    else if ( (v22 & 0x440000) != 0 && (v22 & 0x10000000) == 0
           || (v22 & 0x880000) != 0 && (v22 & 0x20000000) == 0
           || (v23 & 0x440000) != 0 && (v23 & 0x10000000) == 0
           || (v23 & 0x880000) != 0 && (v23 & 0x20000000) == 0 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
      FIELD_U32(a1, 120) = 0;
    }
    v21.n64_u32[0] = 0;
    v20.n64_f32[0] = FIELD_F32(a1, 88) - FIELD_F32(a1, 6348);
    FIELD_U32(a1, 88) = vmax_f32(v20, v21).n64_u32[0];
    v28 = *(_DWORD **)(a1 + 6304);
    v29 = v28[3];
    v30 = v28[2];
    v31 = v28[17];
    if ( v30 > v31 )
      v29 += 4 * v31;
    if ( (*(_BYTE *)(*(_DWORD *)v29 + 28) & 0x20) != 0 )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C9147C);
  }
  else if ( v9 == 1 )
  {
    if ( --FIELD_U8(a1, 6481) == 0 )
    {
      v24 = *(_DWORD **)(a1 + 6304);
      v25 = v24[3];
      v26 = v24[2];
      v27 = v24[17];
      if ( v26 > v27 )
        v25 += 4 * v27;
      *(_DWORD *)(*(_DWORD *)v25 + 24) = 1065353216;
      FIELD_U32(a1, 116) = FIELD_U32(a1, 6428);
      FIELD_U32(a1, 6500) = 2;
    }
    else
    {
      nullsub_7();
      v11 = FIELD_U32(a1, 8904);
      if ( (v11 & 0x10400) == 0x400 )
      {
        FIELD_U32(a1, 112) = FIELD_U32(a1, 588);
        FIELD_U32(a1, 124) = 0;
      }
      else if ( (v11 & 0x440000) != 0 && (v11 & 0x10000000) == 0 || (v11 & 0x880000) != 0 && (v11 & 0x20000000) == 0 )
      {
        FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
        FIELD_U32(a1, 120) = 0;
      }
    }
  }
  v32 = FIELD_F32(a1, 112);
  v34.x = FIELD_F32(a1, 108);
  v34.y = v32;
  v34.z = 4500.0;
  return sub_60237208(a1 + 6508, &v34, (Vec3i *)(a1 + 156), 0);
}
