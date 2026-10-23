/* sub_60650090
 * address: 0x60650090   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60650090(int a1)
{
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r6
  unsigned int v7; // r5
  float *v8; // r2
  float *v9; // r0
  float *v10; // r1
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s9
  float v19; // s13
  _DWORD **v20; // r6
  unsigned int v21; // r5
  unsigned int v22; // r7
  int v23; // r1
  int v24; // r2
  unsigned int v26; // [sp+0h] [bp-88h] BYREF
  _BYTE v27[12]; // [sp+4h] [bp-84h] BYREF
  float32x2_t v28; // [sp+10h] [bp-78h] BYREF
  int v29; // [sp+1Ch] [bp-6Ch]
  int v30; // [sp+2Ch] [bp-5Ch]
  int v31; // [sp+3Ch] [bp-4Ch]
  float v32[18]; // [sp+40h] [bp-48h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v14 = v9[2] + (float)(v11 * v9[3]);
  v15 = v8[2] + (float)(v12 * v8[3]);
  v16 = *v9 + (float)(v11 * v9[1]);
  v17 = *v8 + (float)(v12 * v8[1]);
  v18 = *v10 + (float)(v13 * v10[1]);
  v19 = v10[2] + (float)(v13 * v10[3]);
  v32[0] = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v32[4] = v19 * v16;
  v32[8] = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v32[1] = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v32[5] = v19 * v14;
  v32[9] = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v32[2] = v19 * v17;
  v32[6] = -v18;
  v32[10] = v19 * v15;
  v32[3] = v2;
  v32[7] = v3;
  v32[11] = v4;
  v20 = (_DWORD **)(a1 + 7256);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 7256) + 60))(**(_DWORD **)(a1 + 7256), v32);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v20 + 68))(**v20, a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7256));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v20 + 52))(**v20);
  v21 = FIELD_U32(a1, 164);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 100))(**v20, 1, &v28, v27);
  v26 = v21;
  Mtx34_rotateX(&v28, &v26);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 96))(**v20, 1, &v28, v27);
  v22 = FIELD_U32(a1, 7552);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 100))(**v20, 2, &v28, v27);
  v26 = v22;
  Mtx34_rotateX(&v28, &v26);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 96))(**v20, 2, &v28, v27);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v20 + 56))(**v20);
  (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(*(_DWORD *)**v20 + 108))(**v20, 0, &v28);
  v23 = v30;
  v24 = v31;
  FIELD_U32(a1, 7368) = v29;
  FIELD_U32(a1, 7372) = v23;
  FIELD_U32(a1, 7376) = v24;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v20 + 108))(**v20, 1, &v28);
  v31 = 1162551296;
  return (*(int (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v20 + 104))(**v20, 1, &v28);
}
