/* sub_606356DC
 * address: 0x606356DC   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606356DC(int a1)
{
  int v2; // r0
  _QWORD *v3; // r9
  int v4; // r6
  int v5; // r7
  int v6; // r8
  int v7; // r0
  int (__fastcall *v8)(int, float *); // r2
  __int64 v9; // d17
  __int64 v10; // d17
  __int64 v11; // d17
  float *v12; // r0
  float v13; // s0
  float v14; // s10
  float v15; // s14
  float v16; // s2
  float v17; // s6
  int32x4_t v18; // q15
  int result; // r0
  int v20; // r7
  _BYTE *v21; // r5
  int v22; // r0
  int (__fastcall *v23)(int, float *); // r2
  char *v24; // r1
  int v25; // r0
  int v26; // [sp+28h] [bp-418h]
  _QWORD v27[6]; // [sp+68h] [bp-3D8h] BYREF
  float v28; // [sp+98h] [bp-3A8h] BYREF
  float v29; // [sp+9Ch] [bp-3A4h]
  float v30; // [sp+A0h] [bp-3A0h]
  int v31; // [sp+A4h] [bp-39Ch]
  float v32; // [sp+A8h] [bp-398h]
  float v33; // [sp+ACh] [bp-394h]
  float v34; // [sp+B0h] [bp-390h]
  int v35; // [sp+B4h] [bp-38Ch]
  float v36; // [sp+B8h] [bp-388h]
  float v37; // [sp+BCh] [bp-384h]
  int32x2_t v38; // [sp+C0h] [bp-380h]
  _BYTE v39[768]; // [sp+C8h] [bp-378h] BYREF
  _DWORD v40[30]; // [sp+3C8h] [bp-78h] BYREF
  int32x4_t v41; // 0:q2.16

  v40[0] = 1065353216;
  v40[1] = 0;
  v40[2] = 0;
  v40[4] = 0;
  v40[5] = 1065353216;
  v40[6] = 0;
  v40[8] = 0;
  v40[9] = 0;
  v40[10] = 1065353216;
  v40[3] = FIELD_U32(a1, 108);
  v40[7] = FIELD_U32(a1, 112);
  v40[11] = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 644) + 68))(**(_DWORD **)(a1 + 644), a1 + 144);
  (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 644) + 60))(**(_DWORD **)(a1 + 644), v40);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 644));
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 644) + 52))(**(_DWORD **)(a1 + 644));
  if ( FIELD_U8(a1, 1276) )
  {
    v2 = FIELD_U32(a1, 1080);
    v3 = v39;
    v4 = 0;
    v5 = v2;
    while ( 1 )
    {
      v6 = v2;
      v7 = **(_DWORD **)(a1 + 644);
      v8 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v7 + 84);
      v28 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
      v29 = *(float *)&off_60C12B38[v4];
      v26 = v8(v7, &v28);
      (*(void (__fastcall **)(_DWORD, int, _QWORD *, _DWORD))(***(_DWORD ***)(a1 + 644) + 100))(
        **(_DWORD **)(a1 + 644),
        v26,
        v27,
        0);
      v9 = v27[1];
      *v3 = v27[0];
      v3[1] = v9;
      v10 = v27[3];
      v3[2] = v27[2];
      v3[3] = v10;
      v11 = v27[5];
      v3[4] = v27[4];
      v3[5] = v11;
      v12 = (float *)((char *)sinLutTable + (((unsigned int)(v6 - v5) >> 20) & 0xFF0));
      v13 = (float)((v6 - v5) & 0xFFFFFF) * 0.000000059605;
      v14 = (float)(0.024541 * 0.0) + 0.0;
      v15 = (float)(-0.00030118 * 0.0) + 1.0;
      v16 = *v12 + (float)(v13 * v12[1]);
      v17 = v12[2] + (float)(v13 * v12[3]);
      v28 = v15 * v17;
      v32 = v15 * v16;
      v36 = -v14;
      v29 = (float)((float)(v14 * v14) * v17) - (float)(v15 * v16);
      v33 = (float)(v15 * v17) + (float)((float)(v14 * v14) * v16);
      v37 = v14 * v15;
      v30 = (float)(v14 * (float)(v15 * v17)) + (float)(v14 * v16);
      v34 = (float)(v14 * (float)(v15 * v16)) - (float)(v14 * v17);
      v38.n64_f32[0] = v15 * v15;
      v31 = 0;
      v35 = 0;
      v38.n64_u32[1] = 0;
      v18 = vdupq_lane_s32(v38, 1);
      v41 = vzipq_s32(v18, v18).val[1];
      (*(void (__fastcall **)(_DWORD, int, float, float, float, float, float, float, float, float, float, float, float, float))(***(_DWORD ***)(a1 + 644) + 96))(
        **(_DWORD **)(a1 + 644),
        v26,
        v36,
        v37,
        v15 * v15,
        0.0,
        v15 * v16,
        v33,
        v34,
        0.0,
        v41.n128_f32[0],
        v41.n128_f32[1],
        v41.n128_f32[2],
        v41.n128_f32[3]);
      if ( v4 + 1 >= FIELD_U8(a1, 1276) )
        break;
      v3 += 6;
      v5 = v6;
      v2 = *(_DWORD *)(a1 + 1084 + 4 * v4++);
    }
  }
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 644) + 56))(**(_DWORD **)(a1 + 644));
  result = FIELD_U8(a1, 1276);
  if ( FIELD_U8(a1, 1276) )
  {
    v20 = 0;
    v21 = v39;
    do
    {
      v22 = **(_DWORD **)(a1 + 644);
      v23 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v22 + 84);
      v24 = off_60C12B38[v20];
      v28 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
      v29 = *(float *)&v24;
      v25 = v23(v22, &v28);
      v28 = 1.0;
      v29 = 1.0;
      v30 = 1.0;
      (*(void (__fastcall **)(_DWORD, int, _BYTE *, float *))(***(_DWORD ***)(a1 + 644) + 96))(
        **(_DWORD **)(a1 + 644),
        v25,
        v21,
        &v28);
      result = FIELD_U8(a1, 1276);
      ++v20;
      v21 += 48;
    }
    while ( v20 < result );
  }
  return result;
}
