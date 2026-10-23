/* sub_6069E178
 * address: 0x6069E178   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_6069E178(int a1, _DWORD *a2)
{
  _DWORD *v4; // r2
  float v5; // s18
  unsigned int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r2
  float v9; // r0
  float v10; // r1
  float v11; // r2
  float v12; // r1
  int v13; // r2
  char v14; // r12
  __n128 result; // q0
  void (__fastcall ***v16)(_DWORD, _DWORD, _DWORD *, int *, _DWORD *); // r0
  float v17; // r0
  float v18; // r1
  float v19; // r2
  int v20; // r0
  void (__fastcall *v21)(int, int *); // r2
  float v22; // s6
  float v23; // s4
  float v24; // s10
  float v25; // s12
  _DWORD v26[2]; // [sp+8h] [bp-50h] BYREF
  _DWORD v27[2]; // [sp+10h] [bp-48h] BYREF
  int v28; // [sp+18h] [bp-40h] BYREF
  float v29; // [sp+1Ch] [bp-3Ch]
  int v30; // [sp+20h] [bp-38h]
  float32x2_t v31; // [sp+28h] [bp-30h] BYREF
  float v32; // [sp+30h] [bp-28h]
  float v33; // [sp+34h] [bp-24h]
  float v34; // [sp+38h] [bp-20h]
  float v35; // [sp+3Ch] [bp-1Ch]
  float v36; // [sp+40h] [bp-18h]
  float v37; // [sp+44h] [bp-14h]
  float v38; // [sp+48h] [bp-10h]
  float v39; // [sp+4Ch] [bp-Ch]
  float v40; // [sp+50h] [bp-8h]
  float v41; // [sp+54h] [bp-4h]
  unsigned int v42; // [sp+58h] [bp+0h] BYREF
  unsigned int v43; // [sp+5Ch] [bp+4h] BYREF
  unsigned int v44[8]; // [sp+60h] [bp+8h] BYREF

  v4 = a2 + 39;
  v5 = FIELD_F32(a1, 696);
  v6 = a2[39];
  v7 = a2[40];
  v8 = v4[2];
  v42 = v6;
  v43 = v7;
  v44[0] = v8;
  v9 = *((float *)a2 + 27);
  v10 = *((float *)a2 + 28);
  v11 = *((float *)a2 + 29);
  v31.n64_u64[0] = 1065353216;
  v32 = 0.0;
  v34 = 0.0;
  v35 = 1.0;
  v36 = 0.0;
  v38 = 0.0;
  v39 = 0.0;
  v40 = 1.0;
  v33 = v9;
  v37 = v10;
  v41 = v11;
  Mtx34_rotateY(&v31, &v43);
  Mtx34_rotateX(&v31, &v42);
  Mtx34_rotateZ(&v31, v44);
  v33 = v33
      + (float)((float)((float)((float)(v5 * 0.5) * v31.n64_f32[1]) + (float)(v31.n64_f32[0] * 0.0)) + (float)(v32 * 0.0));
  v37 = v37 + (float)((float)((float)((float)(v5 * 0.5) * v35) + (float)(v34 * 0.0)) + (float)(v36 * 0.0));
  v41 = v41 + (float)((float)((float)((float)(v5 * 0.5) * v39) + (float)(v38 * 0.0)) + (float)(v40 * 0.0));
  v12 = *((float *)a2 + 37);
  v13 = a2[38];
  v28 = a2[36];
  v29 = v12;
  v30 = v13;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 8) + 60))(**(_DWORD **)(a1 + 8), &v31);
  (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 8) + 68))(**(_DWORD **)(a1 + 8), &v28);
  if ( FIELD_U8(a1, 708) == 4 )
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 8));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 8));
  if ( FIELD_U8(a1, 708) == 1 )
  {
    if ( ((unsigned int)algn_60CB9734 & ~(1617552136 << v14) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60CB9734) )
    {
      dword_60CB9730[0] = 0;
      _cxa_guard_release((__guard *)algn_60CB9734);
    }
    v16 = (void (__fastcall ***)(_DWORD, _DWORD, _DWORD *, int *, _DWORD *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 8) + 132))(
                                                                              **(_DWORD **)(a1 + 8),
                                                                              0);
    v26[0] = 0;
    v27[0] = 1065353216;
    *(float *)&v27[1] = v29;
    *(float *)&v26[1] = (float)(1.0 - v29) * 0.5;
    (**v16)(v16, 0, v27, dword_60CB9730, v26);
  }
  if ( FIELD_U8(a1, 710) )
  {
    v17 = *((float *)a2 + 27);
    v18 = *((float *)a2 + 28);
    v19 = *((float *)a2 + 29);
    v31.n64_u64[0] = 1065353216;
    v32 = 0.0;
    v36 = 0.0;
    v38 = 0.0;
    v39 = 0.0;
    v40 = 1.0;
    v33 = v17;
    v34 = 0.0;
    v35 = 1.0;
    v37 = v18;
    v41 = v19;
    Mtx34_rotateY(&v31, &v43);
    Mtx34_rotateX(&v31, &v42);
    Mtx34_rotateZ(&v31, v44);
    v33 = v33 + (float)((float)((float)(v5 * v31.n64_f32[1]) + (float)(v31.n64_f32[0] * 0.0)) + (float)(v32 * 0.0));
    v37 = v37 + (float)((float)((float)(v5 * v35) + (float)(v34 * 0.0)) + (float)(v36 * 0.0));
    v41 = v41 + (float)((float)((float)(v5 * v39) + (float)(v38 * 0.0)) + (float)(v40 * 0.0));
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 4) + 60))(**(_DWORD **)(a1 + 4), &v31);
    v20 = **(_DWORD **)(a1 + 4);
    v21 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v20 + 68);
    v28 = 1065353216;
    v29 = 1.0;
    v30 = 1065353216;
    v21(v20, &v28);
    if ( FIELD_U8(a1, 708) == 4 )
      ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 4));
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 4));
    result.n128_f32[0] = v33
                       + (float)((float)((float)(v31.n64_f32[1] * 16.0) + (float)(v31.n64_f32[0] * 0.0))
                               + (float)(v32 * 0.0));
    v37 = v37 + (float)((float)((float)(v35 * 16.0) + (float)(v34 * 0.0)) + (float)(v36 * 0.0));
    result.n128_f32[2] = v37;
    v22 = v39;
    v23 = v38;
    v24 = v40;
    v25 = v41;
    FIELD_U32(a1, 712) = result.n128_u32[0];
    FIELD_U32(a1, 716) = result.n128_u32[2];
    FIELD_F32(a1, 720) = v25 + (float)((float)((float)(v22 * 16.0) + (float)(v23 * 0.0)) + (float)(v24 * 0.0));
  }
  return result;
}
