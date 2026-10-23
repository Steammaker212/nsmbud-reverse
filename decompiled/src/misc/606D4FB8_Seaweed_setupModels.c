/* Seaweed_setupModels
 * address: 0x606D4FB8   size: 896   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Seaweed_setupModels(Seaweed *this)
{
  int *v2; // r1
  _DWORD *v3; // r3
  unsigned int z; // r2
  unsigned int y; // r5
  int v6; // r7
  int v7; // r3
  bool v8; // zf
  signed int result; // r0
  float v10; // s16
  float v11; // s18
  unsigned int v12; // r10
  int v13; // s2
  float *v14; // r7
  int v15; // r1
  int v16; // r5
  float *v17; // r11
  float *v18; // r8
  float *v19; // r9
  float v20; // s20
  float v21; // s22
  float v22; // s24
  unsigned int v23; // r0
  float v24; // s0
  int *v25; // r6
  int v26; // r0
  int v27; // r1
  float v28; // s2
  int v29; // r1
  float x; // s4
  float v31; // s0
  int v32; // r0
  float v33; // s6
  float v34; // s8
  float v35; // s2
  float v36; // s6
  float v37; // s8
  float v38; // s14
  float v39; // s3
  float v40; // s9
  float v41; // s7
  float v42; // s11
  float v43; // s10
  float *v44; // [sp+Ch] [bp-BCh]
  float *v45; // [sp+10h] [bp-B8h]
  float *v46; // [sp+14h] [bp-B4h]
  float *v47; // [sp+20h] [bp-A8h]
  float *v48; // [sp+24h] [bp-A4h]
  float v49; // [sp+30h] [bp-98h]
  float v50[3]; // [sp+34h] [bp-94h] BYREF
  float v51[34]; // [sp+40h] [bp-88h] BYREF

  v2 = dword_606D5338;
  v3 = FIELD_U32(this, 0x284)[0];
  z = FIELD_U32(this, 0xA4);
  y = FIELD_U32(this, 0xA0);
  v6 = v3[3];
  v7 = v3[7];
  v8 = FIELD_U8(this, 0x56) == 0;
  result = FIELD_U32(this, 0x9C);
  if ( v8 )
    v2 = &dword_606D5338[1];
  v10 = *(float *)(*(_DWORD *)v7 + 20);
  v11 = *(float *)(*(_DWORD *)v6 + 20);
  LODWORD(FIELD_F32(this, 0x74)) = *v2;
  if ( FIELD_U32(this, 0x294) >= 1 )
  {
    v12 = 0;
    v49 = FIELD_F32(this, 0x70);
    v13 = y & 0xFFFFFF;
    v14 = (float *)((char *)sinLutTable + ((z >> 20) & 0xFF0));
    v15 = (y >> 20) & 0xFF0;
    v16 = -1;
    v48 = (float *)((char *)sinLutTable + (((unsigned int)result >> 20) & 0xFF0));
    v47 = (float *)((char *)sinLutTable + v15);
    v17 = (float *)&unk_60B08DDC;
    v18 = (float *)&unk_60B08DE8;
    v46 = (float *)((char *)&sinLutTable[3] + v15);
    v45 = (float *)((char *)&sinLutTable[2] + v15);
    v44 = (float *)((char *)&sinLutTable[1] + v15);
    v19 = (float *)&unk_60B08DD0;
    v20 = (float)(z & 0xFFFFFF) * 0.000000059605;
    v21 = (float)(unsigned int)v13 * 0.000000059605;
    v22 = (float)(result & 0xFFFFFF) * 0.000000059605;
    do
    {
      v23 = 0;
      v24 = *v18;
      if ( v12 < 3 )
        v23 = v12;
      v25 = &FIELD_U32(this, 0x0) + v23;
      v26 = v25[161];
      v27 = **(_DWORD **)(v26 + 12);
      v28 = *(float *)(**(_DWORD **)(v26 + 28) + 8);
      FIELD_F32(v27, 20) = (float)((int)(float)(v11 + v24) % (int)FIELD_F32(v27, 8));
      FIELD_U32(v27, 28) |= 2u;
      v29 = **(_DWORD **)(v25[161] + 28);
      FIELD_F32(v29, 20) = (float)((int)(float)(v10 + v24) % (int)v28);
      FIELD_U32(v29, 28) |= 2u;
      x = FIELD_F32(this, 0x90);
      v31 = FIELD_F32(this, 0x74);
      v32 = v16 + FIELD_U32(this, 0x294);
      v33 = *v17 * FIELD_F32(this, 0x94);
      v34 = *v17 * FIELD_F32(this, 0x98);
      v35 = FIELD_F32(this, 0x6C) + (float)(*v19 * x);
      v50[0] = *v17 * x;
      v50[1] = v33;
      v36 = v14[3];
      v50[2] = v34;
      v37 = v14[2] + (float)(v20 * v36);
      v38 = *v45 + (float)(v21 * *v46);
      v39 = *v14 + (float)(v20 * v14[1]);
      v40 = v48[1];
      v41 = *v47 + (float)(v21 * *v44);
      v51[0] = v38 * v37;
      v42 = *v48 + (float)(v22 * v40);
      v43 = v48[2] + (float)(v22 * v48[3]);
      v51[4] = v38 * v39;
      v51[8] = -v41;
      v51[1] = (float)((float)(v42 * v41) * v37) - (float)(v43 * v39);
      v51[5] = (float)(v43 * v37) + (float)((float)(v42 * v41) * v39);
      v51[9] = v42 * v38;
      v51[2] = (float)(v41 * (float)(v43 * v37)) + (float)(v42 * v39);
      v51[6] = (float)(v41 * (float)(v43 * v39)) - (float)(v42 * v37);
      v51[10] = v43 * v38;
      v51[3] = v35;
      v51[7] = v49;
      v51[11] = v31 + (float)(x * (float)((float)v32 * -100.0));
      (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)v25[161] + 60))(*(_DWORD *)v25[161], v51);
      (*(void (__fastcall **)(_DWORD, float *))(**(_DWORD **)v25[161] + 68))(*(_DWORD *)v25[161], v50);
      ModelWrapper_updateModel((ModelWrapper *)v25[161]);
      result = FIELD_U32(this, 0x294);
      ++v12;
      ++v17;
      ++v19;
      ++v18;
      --v16;
    }
    while ( (int)v12 < result );
  }
  return result;
}
