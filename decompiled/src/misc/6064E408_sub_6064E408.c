/* sub_6064E408
 * address: 0x6064E408   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064E408(int a1)
{
  float v2; // r8
  float v3; // r12
  float v4; // lr
  unsigned int v5; // r3
  unsigned int v6; // r7
  unsigned int v7; // r6
  int v8; // r5
  float *v9; // r0
  float *v10; // r2
  float v11; // s2
  float v12; // s0
  float v13; // s4
  float v14; // s12
  float v15; // s5
  float v16; // s8
  float v17; // s1
  float v18; // s9
  float v19; // s13
  _DWORD **v20; // r7
  int v21; // r5
  float v22; // s16
  float v23; // s18
  int v25; // [sp+0h] [bp-A0h] BYREF
  _BYTE v26[12]; // [sp+4h] [bp-9Ch] BYREF
  float32x2_t v27[5]; // [sp+10h] [bp-90h] BYREF
  int v28; // [sp+3Ch] [bp-64h]
  float v29[24]; // [sp+40h] [bp-60h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v7 = FIELD_U32(a1, 164);
  v8 = (v7 >> 20) & 0xFF0;
  v9 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v11 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v14 = *(float *)((char *)&sinLutTable[2] + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v8));
  v15 = v10[2] + (float)(v12 * v10[3]);
  v16 = *(float *)((char *)sinLutTable + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[1] + v8));
  v17 = *v10 + (float)(v12 * v10[1]);
  v18 = *v9 + (float)(v13 * v9[1]);
  v19 = v9[2] + (float)(v13 * v9[3]);
  v29[0] = (float)(v15 * v14) + (float)(v18 * (float)(v17 * v16));
  v29[4] = v19 * v16;
  v29[8] = (float)(v18 * (float)(v15 * v16)) - (float)(v17 * v14);
  v29[1] = (float)(v18 * (float)(v17 * v14)) - (float)(v15 * v16);
  v29[5] = v19 * v14;
  v29[9] = (float)(v17 * v16) + (float)(v18 * (float)(v15 * v14));
  v29[2] = v19 * v17;
  v29[6] = -v18;
  v29[10] = v19 * v15;
  v29[3] = v2;
  v29[7] = v3;
  v29[11] = v4;
  v20 = (_DWORD **)(a1 + 7256);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 7256) + 60))(**(_DWORD **)(a1 + 7256), v29);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v20 + 68))(**v20, a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7256));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v20 + 52))(**v20);
  v21 = FIELD_U32(a1, 164);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 100))(**v20, 1, v27, v26);
  v25 = v21;
  Mtx34_rotateX(v27, (unsigned int *)&v25);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 96))(**v20, 1, v27, v26);
  v22 = FIELD_F32(a1, 7292);
  v23 = (float)FIELD_S32(a1, 164);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 100))(**v20, 2, v27, v26);
  v25 = -(int)(float)(v23 * v22);
  Mtx34_rotateX(v27, (unsigned int *)&v25);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v20 + 96))(**v20, 2, v27, v26);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v20 + 56))(**v20);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v20 + 108))(**v20, 1, v27);
  v28 = 1162551296;
  return (*(int (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v20 + 104))(**v20, 1, v27);
}
