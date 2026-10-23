/* sub_606AEC9C
 * address: 0x606AEC9C   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AEC9C(int a1)
{
  int v2; // r7
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r7
  int v6; // s2
  int v7; // s14
  float *v8; // r3
  float *v9; // r1
  float *v10; // r0
  float v11; // s14
  float v12; // s0
  float v13; // s2
  float v14; // s10
  float v15; // s5
  float v16; // s6
  float v17; // s1
  float v18; // s13
  float v19; // s9
  int v20; // r0
  void (__fastcall *v21)(int, _DWORD *); // r2
  int v22; // r7
  int v23; // r0
  void (__fastcall *v24)(int, int, _DWORD *, int *); // r5
  int v25; // r7
  int v26; // r0
  void (__fastcall *v27)(int, int, _DWORD *, int *); // r5
  int v28; // r7
  int v29; // r0
  void (__fastcall *v30)(int, int, _DWORD *, int *); // r6
  int v32; // [sp+4h] [bp-8Ch] BYREF
  int v33; // [sp+8h] [bp-88h]
  int v34; // [sp+Ch] [bp-84h]
  _DWORD v35[12]; // [sp+10h] [bp-80h] BYREF
  float v36[20]; // [sp+40h] [bp-50h] BYREF

  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = FIELD_U32(v2, 8);
  v6 = v4 & 0xFFFFFF;
  v7 = v3 & 0xFFFFFF;
  v8 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v9 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v11 = (float)(unsigned int)v7;
  v12 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(unsigned int)v6 * 0.000000059605;
  v14 = v8[2] + (float)(v12 * v8[3]);
  v15 = v9[2] + (float)(v13 * v9[3]);
  v16 = *v8 + (float)(v12 * v8[1]);
  v17 = *v9 + (float)(v13 * v9[1]);
  v18 = v10[2] + (float)((float)(v11 * 0.000000059605) * v10[3]);
  v19 = *v10 + (float)((float)(v11 * 0.000000059605) * v10[1]);
  v36[0] = v15 * v14;
  v36[4] = v15 * v16;
  v36[8] = -v17;
  v36[1] = (float)((float)(v19 * v17) * v14) - (float)(v18 * v16);
  v36[5] = (float)(v18 * v14) + (float)((float)(v19 * v17) * v16);
  v36[9] = v19 * v15;
  v36[2] = (float)(v17 * (float)(v18 * v14)) + (float)(v19 * v16);
  v36[6] = (float)(v17 * (float)(v18 * v16)) - (float)(v19 * v14);
  v36[10] = v18 * v15;
  v36[3] = FIELD_F32(a1, 108);
  v36[7] = FIELD_F32(a1, 112);
  v36[11] = FIELD_F32(a1, 116);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), v36);
  if ( (FIELD_U8(a1, 21) & 0x10) != 0 )
  {
    v20 = **(_DWORD **)(a1 + 644);
    v21 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v20 + 68);
    v35[0] = -1082130432;
    v35[1] = 1065353216;
    v35[2] = 1065353216;
    v21(v20, v35);
  }
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 644) + 52))(**(_DWORD **)(a1 + 644));
  v22 = (*(int (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 644) + 84))(
          **(_DWORD **)(a1 + 644),
          &dword_60CBA254);
  sub_604302C8(**(_DWORD **)(a1 + 644), v22, (int)v35);
  v23 = **(_DWORD **)(a1 + 644);
  v24 = *(void (__fastcall **)(int, int, _DWORD *, int *))(*(_DWORD *)v23 + 96);
  v32 = FIELD_U32(a1, 1272);
  v33 = 1065353216;
  v34 = 1065353216;
  v24(v23, v22, v35, &v32);
  v25 = (*(int (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 644) + 84))(
          **(_DWORD **)(a1 + 644),
          &dword_60CBA25C);
  sub_604302C8(**(_DWORD **)(a1 + 644), v25, (int)v35);
  v26 = **(_DWORD **)(a1 + 644);
  v27 = *(void (__fastcall **)(int, int, _DWORD *, int *))(*(_DWORD *)v26 + 96);
  v32 = FIELD_U32(a1, 1272);
  v33 = 1065353216;
  v34 = 1065353216;
  v27(v26, v25, v35, &v32);
  v28 = (*(int (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 644) + 84))(
          **(_DWORD **)(a1 + 644),
          &dword_60CBA264);
  sub_604302C8(**(_DWORD **)(a1 + 644), v28, (int)v35);
  v29 = **(_DWORD **)(a1 + 644);
  v30 = *(void (__fastcall **)(int, int, _DWORD *, int *))(*(_DWORD *)v29 + 96);
  v32 = FIELD_U32(a1, 1272);
  v33 = 1065353216;
  v34 = 1065353216;
  v30(v29, v28, v35, &v32);
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 644) + 56))(**(_DWORD **)(a1 + 644));
}
