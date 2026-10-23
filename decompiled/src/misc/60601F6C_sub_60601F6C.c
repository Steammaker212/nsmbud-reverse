/* sub_60601F6C
 * address: 0x60601F6C   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60601F6C(int a1)
{
  ModelWrapper **v2; // r5
  float v3; // s6
  float v4; // s12
  int v5; // r0
  float v6; // s2
  float v7; // s8
  float v8; // s4
  void (__fastcall *v9)(int, float *); // r2
  float v10; // s10
  int result; // r0
  int v12; // r3
  int v13; // r1
  unsigned int v14; // r5
  unsigned int v15; // r0
  unsigned int v16; // r1
  unsigned int v17; // r2
  int v18; // r6
  int v19; // r1
  int v20; // s4
  float *v21; // r6
  float *v22; // r3
  unsigned int v23; // r0
  float *v24; // r7
  _DWORD *v25; // r0
  float v26; // s0
  float v27; // s2
  float v28; // s4
  float v29; // s10
  float v30; // s3
  float v31; // s6
  float v32; // s14
  float v33; // s7
  float v34; // s11
  unsigned int v35; // r0
  ModelWrapper *v36; // r6
  int v37; // [sp+8h] [bp-70h]
  int v38; // [sp+Ch] [bp-6Ch]
  int v39; // [sp+10h] [bp-68h]
  int v40; // [sp+14h] [bp-64h]
  float v41; // [sp+18h] [bp-60h] BYREF
  float v42; // [sp+1Ch] [bp-5Ch]
  float v43; // [sp+20h] [bp-58h]
  int v44; // [sp+24h] [bp-54h]
  float v45; // [sp+28h] [bp-50h]
  float v46; // [sp+2Ch] [bp-4Ch]
  float v47; // [sp+30h] [bp-48h]
  int v48; // [sp+34h] [bp-44h]
  float v49; // [sp+38h] [bp-40h]
  float v50; // [sp+3Ch] [bp-3Ch]
  float v51; // [sp+40h] [bp-38h]
  int v52; // [sp+44h] [bp-34h]

  v2 = (ModelWrapper **)(a1 + 27212);
  v3 = FIELD_F32(a1, 6132);
  v4 = FIELD_F32(a1, 27216);
  v5 = **(_DWORD **)(a1 + 27212);
  v6 = FIELD_F32(a1, 6128) - FIELD_F32(a1, 148);
  v7 = FIELD_F32(a1, 27224);
  v8 = v3 - FIELD_F32(a1, 152);
  v9 = *(void (__fastcall **)(int, float *))(*(_DWORD *)v5 + 68);
  v10 = FIELD_F32(a1, 27220);
  v41 = (float)(FIELD_F32(a1, 6124) - FIELD_F32(a1, 144)) + v4;
  v42 = v6 + v10;
  v43 = v8 + v7;
  v9(v5, &v41);
  ModelWrapper_updateModel(*v2);
  result = FIELD_U8(a1, 6101);
  if ( FIELD_U8(a1, 6101) )
  {
    v12 = 0;
    do
    {
      v13 = 0;
      if ( (unsigned int)v12 < 4 )
        v13 = v12;
      v40 = *(_DWORD *)(a1 + 220 * v13 + 6868);
      if ( v40 >= 1 )
      {
        v14 = 0;
        v37 = v12;
        v38 = a1 + 220 * v13;
        v39 = v40 * v12;
        do
        {
          v15 = FIELD_U32(a1, 156);
          v16 = FIELD_U32(a1, 160);
          v17 = FIELD_U32(a1, 164);
          v18 = (v16 >> 20) & 0xFF0;
          v19 = v16 & 0xFFFFFF;
          v20 = v15 & 0xFFFFFF;
          v21 = (float *)((char *)sinLutTable + v18);
          v22 = (float *)((char *)sinLutTable + ((v15 >> 20) & 0xFF0));
          v23 = 0;
          v24 = (float *)((char *)sinLutTable + ((v17 >> 20) & 0xFF0));
          if ( v14 < 0x10 )
            v23 = v14;
          v25 = (_DWORD *)(v38 + 12 * v23);
          v26 = (float)(v17 & 0xFFFFFF) * 0.000000059605;
          v27 = (float)(unsigned int)v19 * 0.000000059605;
          v28 = (float)(unsigned int)v20 * 0.000000059605;
          v29 = v24[2] + (float)(v26 * v24[3]);
          v30 = v21[2] + (float)(v27 * v21[3]);
          v31 = *v24 + (float)(v26 * v24[1]);
          v32 = *v21 + (float)(v27 * v21[1]);
          v33 = *v22 + (float)(v28 * v22[1]);
          v34 = v22[2] + (float)(v28 * v22[3]);
          v41 = (float)(v30 * v29) + (float)(v33 * (float)(v32 * v31));
          v45 = v34 * v31;
          v49 = (float)(v33 * (float)(v30 * v31)) - (float)(v32 * v29);
          v42 = (float)(v33 * (float)(v32 * v29)) - (float)(v30 * v31);
          v46 = v34 * v29;
          v50 = (float)(v32 * v31) + (float)(v33 * (float)(v30 * v29));
          v43 = v34 * v32;
          v47 = -v33;
          v51 = v34 * v30;
          v44 = v25[1721];
          v48 = v25[1722];
          v52 = v25[1723];
          v35 = v39 + v14;
          if ( v39 + v14 >= 0x40 )
            v35 = 0;
          v36 = *(ModelWrapper **)(a1 + 4 * v35 + 27228);
          ModelWrapper_updateAnims(v36);
          (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v36, 0x0) + 60))(FIELD_U32(v36, 0x0), &v41);
          ModelWrapper_updateModel(v36);
          ++v14;
        }
        while ( v40 != v14 );
        v12 = v37;
        result = FIELD_U8(a1, 6101);
      }
      ++v12;
    }
    while ( v12 < (unsigned __int8)result );
  }
  return result;
}
