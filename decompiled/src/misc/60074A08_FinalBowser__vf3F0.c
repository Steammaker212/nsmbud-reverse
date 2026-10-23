/* FinalBowser__vf3F0
 * address: 0x60074A08   size: 2032   group: misc
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
float *__fastcall FinalBowser__vf3F0(int a1)
{
  float v2; // r0
  float v3; // s10
  float v4; // s8
  float v5; // s2
  int v6; // r0
  int *v7; // r7
  unsigned int v8; // r2
  unsigned int v9; // r7
  int v10; // s0
  float *v11; // r2
  float *v12; // r3
  float *v13; // r0
  float v14; // s13
  float v15; // s15
  float v16; // s9
  float v17; // s11
  float v18; // r0
  float v19; // s2
  float v20; // s0
  float v21; // s4
  float v22; // s6
  float v23; // s12
  float v24; // s5
  float v25; // s8
  float v26; // s1
  float v27; // s2
  float v28; // s10
  float v29; // s14
  float v30; // s13
  float v31; // s9
  _DWORD **v32; // r7
  int v33; // r5
  int v34; // r5
  float v35; // s4
  float v36; // s2
  float v37; // r0
  float v38; // s0
  float v39; // r2
  int v40; // r3
  float v41; // s4
  float v42; // s8
  _DWORD **v43; // r5
  int v44; // r0
  int v46; // [sp+10h] [bp-148h] BYREF
  _BYTE v47[12]; // [sp+14h] [bp-144h] BYREF
  float32x2_t v48[6]; // [sp+20h] [bp-138h] BYREF
  _BYTE v49[12]; // [sp+50h] [bp-108h] BYREF
  float32x2_t v50[6]; // [sp+5Ch] [bp-FCh] BYREF
  _BYTE v51[12]; // [sp+8Ch] [bp-CCh] BYREF
  float32x2_t v52; // [sp+98h] [bp-C0h] BYREF
  int v53; // [sp+A0h] [bp-B8h]
  _BYTE v54[8]; // [sp+C8h] [bp-90h] BYREF
  int v55; // [sp+D0h] [bp-88h] BYREF
  _BYTE v56[8]; // [sp+D4h] [bp-84h] BYREF
  int v57; // [sp+DCh] [bp-7Ch] BYREF
  float32x2_t v58; // [sp+E0h] [bp-78h] BYREF
  float v59; // [sp+E8h] [bp-70h]
  float v60; // [sp+ECh] [bp-6Ch]
  float v61; // [sp+F0h] [bp-68h]
  float v62; // [sp+F4h] [bp-64h]
  float v63; // [sp+F8h] [bp-60h]
  float v64; // [sp+FCh] [bp-5Ch]
  float v65; // [sp+100h] [bp-58h]
  float v66; // [sp+104h] [bp-54h]
  float v67; // [sp+108h] [bp-50h]
  float v68; // [sp+10Ch] [bp-4Ch]
  float v69; // [sp+110h] [bp-48h] BYREF
  float v70; // [sp+114h] [bp-44h]
  float v71; // [sp+118h] [bp-40h]

  v2 = FIELD_F32(a1, 148);
  v71 = FIELD_F32(a1, 152);
  v70 = v2;
  v69 = FIELD_F32(a1, 144);
  v3 = FIELD_F32(a1, 148);
  v4 = FIELD_F32(a1, 6696);
  v5 = FIELD_F32(a1, 6700) - FIELD_F32(a1, 152);
  v69 = v69 + (float)((float)(FIELD_F32(a1, 6692) - FIELD_F32(a1, 144)) * 0.1);
  v70 = v2 + (float)((float)(v4 - v3) * 0.1);
  v71 = v71 + (float)(v5 * 0.1);
  v7 = (int *)(a1 + 7144);
  v6 = FIELD_U32(a1, 7144);
  if ( (v6 & 1) != 0 )
  {
    v8 = FIELD_U32(a1, 160);
    v9 = FIELD_U32(a1, 164);
    v10 = v8 & 0xFFFFFF;
    v11 = (float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0));
    v12 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
    v13 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 156) >> 20) & 0xFF0));
    v14 = v13[2];
    v15 = v13[3];
    v16 = *v13;
    v17 = v13[1];
    v18 = FIELD_F32(a1, 116);
    v19 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
    v20 = (float)(unsigned int)v10 * 0.000000059605;
    v21 = (float)(FIELD_U32(a1, 156) & 0xFFFFFF) * 0.000000059605;
    v22 = FIELD_F32(a1, 112);
    v23 = v12[2] + (float)(v19 * v12[3]);
    v24 = v11[2] + (float)(v20 * v11[3]);
    v25 = *v12 + (float)(v19 * v12[1]);
    v26 = *v11 + (float)(v20 * v11[1]);
    v27 = FIELD_F32(a1, 108);
    v28 = FIELD_F32(a1, 7528);
    v29 = FIELD_F32(a1, 7524);
    v30 = v14 + (float)(v21 * v15);
    v31 = v16 + (float)(v21 * v17);
    v58.n64_f32[0] = v24 * v23;
    v61 = v24 * v25;
    v65 = -v26;
    v58.n64_f32[1] = (float)((float)(v31 * v26) * v23) - (float)(v30 * v25);
    v62 = (float)(v30 * v23) + (float)((float)(v31 * v26) * v25);
    v66 = v31 * v24;
    v59 = (float)(v26 * (float)(v30 * v23)) + (float)(v31 * v25);
    v63 = (float)(v26 * (float)(v30 * v25)) - (float)(v31 * v23);
    v67 = v30 * v24;
    v60 = v27 + v29;
    v64 = v22 + v28;
    v68 = v18;
    v32 = (_DWORD **)(a1 + 7112);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7112) + 60))(**(_DWORD **)(a1 + 7112), &v58);
    (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)**v32 + 68))(**v32, &v69);
    sub_604218E0(*(_DWORD **)(a1 + 7112));
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v32 + 52))(**v32);
    v33 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v32 + 132))(**v32, FIELD_U32(a1, 7532));
    v57 = 0;
    (*(void (__fastcall **)(int, _DWORD, _BYTE *, int *, _DWORD))(*(_DWORD *)v33 + 8))(v33, 0, v56, &v57, 0);
    (*(void (__fastcall **)(int, _DWORD, _BYTE *, int *, int))(*(_DWORD *)v33 + 4))(v33, 0, v56, &v57, a1 + 7496);
    v34 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v32 + 132))(**v32, FIELD_U32(a1, 7536));
    v55 = 0;
    (*(void (__fastcall **)(int, _DWORD, _BYTE *, int *, _DWORD))(*(_DWORD *)v34 + 8))(v34, 0, v54, &v55, 0);
    (*(void (__fastcall **)(int, _DWORD, _BYTE *, int *, int))(*(_DWORD *)v34 + 4))(v34, 0, v54, &v55, a1 + 7488);
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)**v32 + 100))(
      **v32,
      FIELD_U32(a1, 7540),
      &v52,
      v51);
    Mtx34_rotateZ(&v52, (unsigned int *)(a1 + 7484));
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)**v32 + 96))(
      **v32,
      FIELD_U32(a1, 7540),
      &v52,
      v51);
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)**v32 + 100))(
      **v32,
      FIELD_U32(a1, 7544),
      v50,
      v49);
    Mtx34_rotateZ(v50, (unsigned int *)(a1 + 7484));
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)**v32 + 96))(
      **v32,
      FIELD_U32(a1, 7544),
      v50,
      v49);
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)**v32 + 100))(
      **v32,
      FIELD_U32(a1, 7552),
      v48,
      v47);
    v46 = FIELD_U32(a1, 7468) - FIELD_U32(a1, 7484);
    Mtx34_rotateZ(v48, (unsigned int *)&v46);
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)**v32 + 96))(
      **v32,
      FIELD_U32(a1, 7552),
      v48,
      v47);
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)**v32 + 100))(
      **v32,
      FIELD_U32(a1, 7560),
      v48,
      v47);
    v46 = FIELD_U32(a1, 7468) - FIELD_U32(a1, 7484);
    Mtx34_rotateZ(v48, (unsigned int *)&v46);
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *, _BYTE *))(*(_DWORD *)**v32 + 96))(
      **v32,
      FIELD_U32(a1, 7560),
      v48,
      v47);
    v7 = (int *)(a1 + 7144);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 7112) + 56))(**(_DWORD **)(a1 + 7112));
    v6 = FIELD_U32(a1, 7144);
  }
  if ( (v6 & 2) != 0 )
  {
    v58.n64_u64[0] = 1065353216;
    v59 = 0.0;
    v61 = 0.0;
    v62 = 1.0;
    v63 = 0.0;
    v65 = 0.0;
    v66 = 0.0;
    v67 = 1.0;
    v35 = FIELD_F32(a1, 116);
    v36 = FIELD_F32(a1, 112) + 96.0;
    v60 = FIELD_F32(a1, 108) + 0.0;
    v64 = v36;
    v68 = v35 + -10.0;
    Mtx34_rotateY(&v58, (unsigned int *)(a1 + 160));
    Mtx34_rotateX(&v58, (unsigned int *)(a1 + 156));
    v60 = v60 + (float)((float)((float)(v58.n64_f32[0] * 0.0) - (float)(v58.n64_f32[1] * 96.0)) + (float)(v59 * 10.0));
    v64 = v64 + (float)((float)((float)(v61 * 0.0) - (float)(v62 * 96.0)) + (float)(v63 * 10.0));
    v68 = v68 + (float)((float)((float)(v65 * 0.0) - (float)(v66 * 96.0)) + (float)(v67 * 10.0));
    Mtx34_rotateZ(&v58, (unsigned int *)(a1 + 164));
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7116) + 60))(**(_DWORD **)(a1 + 7116), &v58);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 7116) + 68))(**(_DWORD **)(a1 + 7116), &v69);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 7116));
    v6 = *v7;
  }
  if ( (v6 & 4) != 0 )
  {
    v37 = FIELD_F32(a1, 108);
    v38 = FIELD_F32(a1, 112);
    v39 = FIELD_F32(a1, 148);
    v40 = FIELD_U32(a1, 152);
    v52.n64_u32[0] = FIELD_U32(a1, 144);
    v52.n64_f32[1] = v39;
    v53 = v40;
    v52.n64_f32[0] = v52.n64_f32[0] * 0.68;
    v52.n64_f32[1] = v39 * (float)(FIELD_F32(a1, 7124) * 1.25);
    v41 = (float)(0.024541 * 0.0) + 0.0;
    v42 = (float)(-0.00030118 * 0.0) + 1.0;
    v58.n64_f32[0] = v42 * v42;
    v61 = v41 * v42;
    v65 = -v41;
    v58.n64_f32[1] = (float)((float)(v41 * v41) * v42) - (float)(v41 * v42);
    v62 = (float)(v42 * v42) + (float)(v41 * (float)(v41 * v41));
    v66 = v41 * v42;
    v59 = (float)(v41 * v41) + (float)(v41 * (float)(v42 * v42));
    v63 = (float)(v41 * v66) - v66;
    v67 = v42 * v42;
    v60 = v37;
    v64 = v38 + 160.0;
    v68 = -100.0;
    v43 = (_DWORD **)(a1 + 7120);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7120) + 60))(**(_DWORD **)(a1 + 7120), &v58);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v43 + 68))(**v43, &v52);
    v44 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v43 + 132))(**v43, 0);
    (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)v44 + 20))(v44, 0, a1 + 7128);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 7120));
  }
  sub_6007339C((float *)a1, 0);
  sub_6007339C((float *)a1, 1u);
  sub_6007339C((float *)a1, 2u);
  sub_6007339C((float *)a1, 3u);
  sub_6007339C((float *)a1, 4u);
  sub_6007339C((float *)a1, 5u);
  sub_6007339C((float *)a1, 6u);
  return sub_6007339C((float *)a1, 7u);
}
