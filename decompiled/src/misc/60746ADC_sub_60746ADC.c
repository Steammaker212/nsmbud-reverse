/* sub_60746ADC
 * address: 0x60746ADC   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60746ADC(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r2
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r6
  int v7; // r0
  float v8; // s2
  float *v9; // r3
  float *v10; // r0
  float v11; // s0
  float v12; // s14
  float v13; // s2
  float v14; // s10
  float v15; // s5
  float v16; // s6
  float v17; // s1
  float v18; // s13
  float v19; // s9
  float v20; // r0
  float v21; // s0
  float v22; // s2
  float v23; // s0
  int (__fastcall *v24)(int, float32x2_t *); // r2
  int v25; // r6
  _BYTE v27[12]; // [sp+0h] [bp-A8h] BYREF
  float32x2_t v28; // [sp+Ch] [bp-9Ch] BYREF
  float v29; // [sp+14h] [bp-94h]
  float v30; // [sp+18h] [bp-90h]
  float v31; // [sp+1Ch] [bp-8Ch]
  float v32; // [sp+20h] [bp-88h]
  float v33; // [sp+24h] [bp-84h]
  float v34; // [sp+28h] [bp-80h]
  float v35; // [sp+2Ch] [bp-7Ch]
  float v36; // [sp+30h] [bp-78h]
  float v37; // [sp+34h] [bp-74h]
  float v38; // [sp+38h] [bp-70h]
  float v39[3]; // [sp+3Ch] [bp-6Ch] BYREF
  float v40[24]; // [sp+48h] [bp-60h] BYREF

  v2 = FIELD_U32(a1, 164);
  v3 = FIELD_U32(a1, 156);
  v4 = **(_DWORD **)(a1 + 644);
  v5 = FIELD_U32(a1, 160);
  v6 = (v3 >> 20) & 0xFF0;
  v7 = (v5 >> 20) & 0xFF0;
  v8 = (float)(v5 & 0xFFFFFF);
  v9 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + v7);
  v11 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v3 & 0xFFFFFF);
  v13 = v8 * 0.000000059605;
  v14 = v9[2] + (float)(v11 * v9[3]);
  v15 = v10[2] + (float)(v13 * v10[3]);
  v16 = *v9 + (float)(v11 * v9[1]);
  v17 = *v10 + (float)(v13 * v10[1]);
  v18 = *(float *)((char *)&sinLutTable[2] + v6)
      + (float)((float)(v12 * 0.000000059605) * *(float *)((char *)&sinLutTable[3] + v6));
  v19 = *(float *)((char *)sinLutTable + v6)
      + (float)((float)(v12 * 0.000000059605) * *(float *)((char *)&sinLutTable[1] + v6));
  v40[0] = v15 * v14;
  v40[4] = v15 * v16;
  v40[8] = -v17;
  v40[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
  v40[5] = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
  v40[9] = v19 * v15;
  v40[2] = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
  v40[6] = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
  v40[10] = v18 * v15;
  v40[3] = FIELD_F32(a1, 108);
  v40[7] = FIELD_F32(a1, 112);
  v40[11] = FIELD_F32(a1, 116);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v4 + 60))(v4, v40);
  v20 = FIELD_F32(a1, 152);
  v21 = FIELD_F32(a1, 704) + 1.0;
  v22 = FIELD_F32(a1, 144) * v21;
  v23 = v21 * FIELD_F32(a1, 148);
  v39[0] = v22;
  v39[1] = v23;
  v39[2] = v20;
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v4 + 68))(v4, v39);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 52))(v4);
  v24 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v4 + 84);
  v28.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v28.n64_u32[1] = (unsigned __int32)"ABC";
  v25 = v24(v4, &v28);
  (*(void (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)v4 + 100))(v4, v25, &v28, v27);
  v30 = v30 + (float)((float)((float)(v28.n64_f32[1] * 0.0) + (float)(v28.n64_f32[0] * 0.0)) + (float)(v29 * 4.0));
  v34 = v34 + (float)((float)((float)(v32 * 0.0) + (float)(v31 * 0.0)) + (float)(v33 * 4.0));
  v38 = v38 + (float)((float)((float)(v36 * 0.0) + (float)(v35 * 0.0)) + (float)(v37 * 4.0));
  Mtx34_rotateY(&v28, (unsigned int *)(a1 + 716));
  v30 = v30 + (float)((float)((float)(v28.n64_f32[1] * 0.0) + (float)(v28.n64_f32[0] * 0.0)) - (float)(v29 * 4.0));
  v34 = v34 + (float)((float)((float)(v32 * 0.0) + (float)(v31 * 0.0)) - (float)(v33 * 4.0));
  v38 = v38 + (float)((float)((float)(v36 * 0.0) + (float)(v35 * 0.0)) - (float)(v37 * 4.0));
  (*(void (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)v4 + 96))(v4, v25, &v28, v27);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 56))(v4);
}
