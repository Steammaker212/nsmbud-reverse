/* hand_R_paipo_ref
 * address: 0x603032A8   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall hand_R_paipo_ref(int a1)
{
  int **v1; // r4
  unsigned int v2; // r2
  float v3; // lr
  unsigned int v4; // r1
  float v5; // s0
  int v6; // s4
  int v7; // s3
  float *v8; // r2
  int v9; // r3
  float *v10; // r6
  float v11; // r0
  float v12; // s3
  float v13; // s2
  float v14; // s4
  float v15; // s14
  float v16; // s9
  float v17; // s10
  float v18; // s5
  float v19; // s16
  float v20; // s13
  int *v21; // t1
  int v22; // r0
  int (__fastcall *v23)(int, _DWORD *); // r2
  int v24; // r0
  _DWORD *result; // r0
  _DWORD v26[11]; // [sp+0h] [bp-80h] BYREF
  _DWORD *v27; // [sp+2Ch] [bp-54h]
  float v28[20]; // [sp+30h] [bp-50h] BYREF

  v1 = (int **)a1;
  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_F32(a1, 116);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 112) + FIELD_F32(a1, 7004);
  v6 = FIELD_U32(a1, 160) & 0xFFFFFF;
  v7 = v2 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v9 = (FIELD_U32(a1, 160) >> 20) & 0xFF0;
  v10 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v11 = FIELD_F32(a1, 108);
  v12 = (float)(unsigned int)v7;
  v13 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(unsigned int)v6 * 0.000000059605;
  v15 = v10[2] + (float)(v13 * v10[3]);
  v16 = *(float *)((char *)&sinLutTable[2] + v9) + (float)(v14 * *(float *)((char *)&sinLutTable[3] + v9));
  v17 = *v10 + (float)(v13 * v10[1]);
  v18 = *(float *)((char *)sinLutTable + v9) + (float)(v14 * *(float *)((char *)&sinLutTable[1] + v9));
  v19 = v8[2] + (float)((float)(v12 * 0.000000059605) * v8[3]);
  v20 = *v8 + (float)((float)(v12 * 0.000000059605) * v8[1]);
  v28[0] = v16 * v15;
  v28[4] = v16 * v17;
  v28[8] = -v18;
  v28[1] = (float)((float)(v20 * v18) * v15) - (float)(v19 * v17);
  v28[5] = (float)(v19 * v15) + (float)((float)(v20 * v18) * v17);
  v28[9] = v20 * v16;
  v28[2] = (float)(v18 * (float)(v19 * v15)) + (float)(v20 * v17);
  v28[6] = (float)(v18 * (float)(v19 * v17)) - (float)(v20 * v15);
  v28[10] = v19 * v16;
  v28[3] = v11;
  v28[7] = v5;
  v28[11] = v3;
  v21 = v1[1738];
  v1 += 1738;
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)*v21 + 60))(*v21, v28);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v1 + 68))(**v1, v1 - 1702);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 52))(**v1);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v1 + 56))(**v1);
  v22 = **v1;
  v23 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v22 + 84);
  v26[0] = &sead__SafeStringBase__vtable;
  v26[1] = "hand_R_paipo";
  v24 = v23(v22, v26);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v1 + 108))(**v1, v24, v26);
  v1[1] = (int *)v26[3];
  v1[2] = (int *)v26[7];
  result = v27;
  v1[3] = v27;
  return result;
}
