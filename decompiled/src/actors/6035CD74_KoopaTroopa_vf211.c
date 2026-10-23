/* KoopaTroopa_vf211
 * address: 0x6035CD74   size: 672   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall KoopaTroopa_vf211(int a1)
{
  int **v2; // r7
  unsigned int v3; // r0
  unsigned int v4; // r6
  unsigned int v5; // r4
  int v6; // s2
  float *v7; // r2
  float *v8; // r5
  float *v9; // r0
  float v10; // s14
  float v11; // s0
  float v12; // s2
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s1
  float v17; // s13
  float v18; // s9
  int v19; // r5
  int (__fastcall *v20)(int, float32x2_t *); // r2
  int v21; // r6
  __n128 result; // q0
  _BYTE v23[12]; // [sp+4h] [bp-8Ch] BYREF
  float32x2_t v24; // [sp+10h] [bp-80h] BYREF
  float v25; // [sp+1Ch] [bp-74h]
  float v26; // [sp+2Ch] [bp-64h]
  float v27[20]; // [sp+40h] [bp-50h] BYREF

  v2 = (int **)(a1 + 6820);
  sub_604218E0(*(_DWORD **)(a1 + 6820));
  v3 = (unsigned int)*(v2 - 1665);
  v4 = (unsigned int)*(v2 - 1664);
  v5 = (unsigned int)*(v2 - 1666);
  v6 = v3 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v10 = (float)(v5 & 0xFFFFFF);
  v11 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v12 = (float)(unsigned int)v6 * 0.000000059605;
  v13 = v8[2] + (float)(v11 * v8[3]);
  v14 = v7[2] + (float)(v12 * v7[3]);
  v15 = *v8 + (float)(v11 * v8[1]);
  v16 = *v7 + (float)(v12 * v7[1]);
  v17 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
  v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
  v27[0] = v14 * v13;
  v27[4] = v14 * v15;
  v27[8] = -v16;
  v27[1] = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
  v27[5] = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
  v27[9] = v18 * v14;
  v27[2] = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
  v27[6] = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
  v27[10] = v17 * v14;
  LODWORD(v27[3]) = *(v2 - 1678);
  LODWORD(v27[7]) = *(v2 - 1677);
  LODWORD(v27[11]) = *(v2 - 1676);
  v19 = **v2;
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v19 + 60))(v19, v27);
  (*(void (__fastcall **)(int, int **))(*(_DWORD *)v19 + 68))(v19, v2 - 73);
  (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 52))(v19);
  v20 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v19 + 84);
  v24.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v24.n64_u32[1] = (unsigned __int32)"head";
  v21 = v20(v19, &v24);
  if ( v2[164] != (int *)1 )
  {
    (*(void (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)v19 + 100))(v19, v21, &v24, v23);
    Mtx34_rotateX(&v24, (unsigned int *)(a1 + 6864));
    (*(void (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)v19 + 96))(v19, v21, &v24, v23);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 56))(v19);
  (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)v19 + 108))(v19, v21, &v24);
  result.n128_f32[0] = v25 - FIELD_F32(a1, 108);
  result.n128_f32[2] = v26 - FIELD_F32(a1, 112);
  FIELD_U32(a1, 6984) = result.n128_u32[0];
  FIELD_U32(a1, 6988) = result.n128_u32[2];
  return result;
}
