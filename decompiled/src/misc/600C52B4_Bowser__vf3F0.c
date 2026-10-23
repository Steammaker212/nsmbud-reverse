/* Bowser__vf3F0
 * address: 0x600C52B4   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BE8
// 
// Overridden by: None
_DWORD *__fastcall Bowser__vf3F0(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s4
  float v5; // s10
  float v6; // s8
  float v7; // s6
  int v8; // r6
  int (__fastcall *v9)(int, float32x2_t *); // r2
  int v10; // r5
  float v11; // r0
  float v12; // s2
  float v13; // s6
  float v14; // s0
  _DWORD **v15; // r5
  int v16; // r0
  int i; // r9
  _DWORD *result; // r0
  bool v19; // zf
  float v20; // s0
  float v21; // s2
  float v22; // s4
  float v23; // s8
  float v24; // s6
  float v25; // s10
  int v26; // r5
  float v27[3]; // [sp+8h] [bp-90h] BYREF
  float32x2_t v28; // [sp+14h] [bp-84h] BYREF
  float v29; // [sp+1Ch] [bp-7Ch]
  float v30; // [sp+20h] [bp-78h]
  float v31; // [sp+24h] [bp-74h]
  float v32; // [sp+28h] [bp-70h]
  float v33; // [sp+2Ch] [bp-6Ch]
  float v34; // [sp+30h] [bp-68h]
  float v35; // [sp+34h] [bp-64h]
  float v36; // [sp+38h] [bp-60h]
  float v37; // [sp+3Ch] [bp-5Ch]
  float v38; // [sp+40h] [bp-58h]
  float32x2_t v39; // [sp+44h] [bp-54h] BYREF
  int v40; // [sp+4Ch] [bp-4Ch]
  float v41; // [sp+50h] [bp-48h]
  int v42; // [sp+54h] [bp-44h]
  int v43; // [sp+58h] [bp-40h]
  int v44; // [sp+5Ch] [bp-3Ch]
  float v45; // [sp+60h] [bp-38h]
  int v46; // [sp+64h] [bp-34h]
  int v47; // [sp+68h] [bp-30h]
  int v48; // [sp+6Ch] [bp-2Ch]
  float v49; // [sp+70h] [bp-28h]

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_F32(a1, 7744);
  v6 = FIELD_F32(a1, 7748);
  v7 = FIELD_F32(a1, 7752);
  v39.n64_u64[0] = 1065353216;
  v40 = 0;
  v42 = 0;
  v43 = 1065353216;
  v44 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 1065353216;
  v41 = v2 + v5;
  v45 = v3 + v6;
  v49 = v4 + v7;
  Mtx34_rotateY(&v39, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v39, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v39, (unsigned int *)(a1 + 164));
  v8 = **(_DWORD **)(a1 + 7100);
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v8 + 60))(v8, &v39);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v8 + 68))(v8, a1 + 7768);
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 52))(v8);
  v9 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v8 + 84);
  v28.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v28.n64_u32[1] = (unsigned __int32)"Face";
  v10 = v9(v8, &v28);
  (*(void (__fastcall **)(int, int, float32x2_t *, float *))(*(_DWORD *)v8 + 100))(v8, v10, &v28, v27);
  Mtx34_rotateZ(&v28, (unsigned int *)(a1 + 7140));
  (*(void (__fastcall **)(int, int, float32x2_t *, float *))(*(_DWORD *)v8 + 96))(v8, v10, &v28, v27);
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 56))(v8);
  v11 = FIELD_F32(a1, 108);
  v12 = (float)(0.024541 * 0.0) + 0.0;
  v13 = (float)(-0.00030118 * 0.0) + 1.0;
  v14 = FIELD_F32(a1, 112);
  v28.n64_f32[0] = v13 * v13;
  v31 = v12 * v13;
  v35 = -v12;
  v28.n64_f32[1] = (float)((float)(v12 * v12) * v13) - (float)(v12 * v13);
  v32 = (float)(v13 * v13) + (float)(v12 * (float)(v12 * v12));
  v36 = v12 * v13;
  v29 = (float)(v12 * v12) + (float)(v12 * (float)(v13 * v13));
  v33 = (float)(v12 * v36) - v36;
  v37 = v13 * v13;
  v30 = v11;
  v34 = v14 + 40.0;
  v38 = -64.0;
  v15 = (_DWORD **)(a1 + 7104);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7104) + 60))(**(_DWORD **)(a1 + 7104), &v28);
  v27[0] = FIELD_F32(a1, 144) * *(float *)&dword_60C83C64;
  v27[1] = FIELD_F32(a1, 148) * *(float *)&dword_60C83C68;
  v27[2] = FIELD_F32(a1, 152) * *(float *)&dword_60C83C6C;
  (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v15 + 68))(**v15, v27);
  v16 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v15 + 132))(**v15, 0);
  (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v16 + 20))(v16, 0, a1 + 7796);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 7104));
  for ( i = 0; i != 256; i += 32 )
  {
    result = *(_DWORD **)(a1 + 8012 + i);
    v19 = result == 0;
    if ( result )
    {
      result = *(_DWORD **)(a1 + 7984 + i);
      v19 = result == 0;
    }
    if ( !v19 )
    {
      v20 = FIELD_F32(a1, 108);
      v21 = FIELD_F32(a1, 112);
      v22 = FIELD_F32(a1, 116);
      v23 = *(float *)(a1 + 7992 + i);
      v24 = *(float *)(a1 + 7996 + i);
      v25 = *(float *)(a1 + 7988 + i);
      v28.n64_u64[0] = 1065353216;
      v29 = 0.0;
      v31 = 0.0;
      v32 = 1.0;
      v33 = 0.0;
      v35 = 0.0;
      v36 = 0.0;
      v37 = 1.0;
      v30 = v20 + v25;
      v34 = v21 + v23;
      v38 = v22 + v24;
      v26 = *result;
      (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*result + 60))(*result, &v28);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v26 + 68))(v26, a1 + 8000 + i);
      (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 52))(v26);
      result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v26 + 56))(v26);
    }
  }
  return result;
}
