/* skl_root_ref_63F258
 * address: 0x6063F258   size: 1248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_63F258(int a1)
{
  float *v2; // r5
  unsigned int v3; // r3
  unsigned int v4; // r7
  unsigned int v5; // r6
  float v6; // r8
  float v7; // r12
  float v8; // lr
  int v9; // r4
  float *v10; // r1
  float *v11; // r0
  float v12; // s2
  float v13; // s0
  float v14; // s4
  float v15; // s10
  float v16; // s5
  float v17; // s6
  float v18; // s13
  float v19; // s1
  float v20; // s9
  int result; // r0
  _DWORD **v22; // r7
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r0
  int (__fastcall *v27)(int, int (***)()); // r2
  int v28; // r0
  int v29; // r0
  int (__fastcall *v30)(int, int (***)()); // r2
  int v31; // r0
  int v32; // r0
  int (__fastcall *v33)(int, int (***)()); // r2
  int v34; // r0
  int v35; // r0
  int (__fastcall *v36)(int, int (***)()); // r2
  int v37; // r0
  int v38; // r5
  int (**v39)(); // [sp+0h] [bp-C0h] BYREF
  const char *v40; // [sp+4h] [bp-BCh]
  int v41; // [sp+8h] [bp-B8h]
  int v42; // [sp+Ch] [bp-B4h]
  int v43; // [sp+1Ch] [bp-A4h]
  int v44; // [sp+2Ch] [bp-94h]
  unsigned int v45; // [sp+30h] [bp-90h] BYREF
  unsigned int v46; // [sp+34h] [bp-8Ch] BYREF
  unsigned int v47; // [sp+38h] [bp-88h] BYREF
  float32x2_t v48; // [sp+40h] [bp-80h] BYREF
  int v49; // [sp+48h] [bp-78h]
  int v50; // [sp+4Ch] [bp-74h]
  int v51; // [sp+50h] [bp-70h]
  int v52; // [sp+54h] [bp-6Ch]
  int v53; // [sp+58h] [bp-68h]
  int v54; // [sp+5Ch] [bp-64h]
  int v55; // [sp+60h] [bp-60h]
  int v56; // [sp+64h] [bp-5Ch]
  int v57; // [sp+68h] [bp-58h]
  int v58; // [sp+6Ch] [bp-54h]
  float v59[20]; // [sp+70h] [bp-50h] BYREF

  v2 = (float *)(a1 + 6104);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
  v3 = *((_DWORD *)v2 + 38);
  v4 = *((_DWORD *)v2 + 39);
  v5 = *((_DWORD *)v2 + 40);
  v6 = v2[5];
  v7 = v2[6];
  v8 = v2[7];
  v9 = (v3 >> 20) & 0xFF0;
  v10 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v12 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v15 = v11[2] + (float)(v12 * v11[3]);
  v16 = v10[2] + (float)(v13 * v10[3]);
  v17 = *v11 + (float)(v12 * v11[1]);
  v18 = *(float *)((char *)&sinLutTable[2] + v9) + (float)(v14 * *(float *)((char *)&sinLutTable[3] + v9));
  v19 = *v10 + (float)(v13 * v10[1]);
  v20 = *(float *)((char *)sinLutTable + v9) + (float)(v14 * *(float *)((char *)&sinLutTable[1] + v9));
  v59[0] = v16 * v15;
  v59[4] = v16 * v17;
  v59[8] = -v19;
  v59[1] = (float)((float)(v20 * v19) * v15) - (float)(v18 * v17);
  v59[5] = (float)(v18 * v15) + (float)((float)(v20 * v19) * v17);
  v59[9] = v20 * v16;
  v59[2] = (float)(v19 * (float)(v18 * v15)) + (float)(v20 * v17);
  v59[6] = (float)(v19 * (float)(v18 * v17)) - (float)(v20 * v15);
  v59[10] = v18 * v16;
  v59[3] = v6;
  v59[7] = v7;
  v59[11] = v8;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v2 + 60))(**(_DWORD **)v2, v59);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(***(_DWORD ***)v2 + 68))(**(_DWORD **)v2, (_DWORD **)v2 + 8);
  ModelWrapper_updateModel(*(ModelWrapper **)v2);
  result = *((unsigned __int8 *)v2 + 56);
  if ( *((_BYTE *)v2 + 56) )
  {
    v22 = (_DWORD **)(a1 + 6108);
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6108));
    v23 = FIELD_U32(a1, 108);
    v24 = FIELD_U32(a1, 112);
    v25 = FIELD_U32(a1, 116);
    v47 = FIELD_U32(a1, 6276);
    v46 = FIELD_U32(a1, 6272);
    v45 = FIELD_U32(a1, 6268);
    v45 += FIELD_U32(a1, 6244);
    v48.n64_u64[0] = 1065353216;
    v49 = 0;
    v51 = 0;
    v52 = 1065353216;
    v53 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 1065353216;
    v50 = v23;
    v54 = v24;
    v58 = v25;
    Mtx34_rotateX(&v48, &v45);
    Mtx34_rotateY(&v48, &v46);
    Mtx34_rotateZ(&v48, &v47);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v22 + 60))(**v22, &v48);
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v22 + 68))(**v22, a1 + 6148);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v22 + 52))(**v22);
    sub_6063FF74(a1);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v22 + 56))(**v22);
    v26 = **(_DWORD **)(a1 + 6108);
    v27 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v26 + 84);
    v39 = &sead__SafeStringBase__vtable;
    v40 = "skl_root";
    v28 = v27(v26, &v39);
    (*(void (__fastcall **)(_DWORD, int, int (***)()))(*(_DWORD *)**v22 + 108))(**v22, v28, &v39);
    FIELD_U32(a1, 6296) = v42;
    FIELD_U32(a1, 6300) = v43;
    FIELD_U32(a1, 6304) = v44;
    v29 = **(_DWORD **)(a1 + 6108);
    v30 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v29 + 84);
    v39 = &sead__SafeStringBase__vtable;
    v40 = "leaf2";
    v31 = v30(v29, &v39);
    (*(void (__fastcall **)(_DWORD, int, int (***)()))(*(_DWORD *)**v22 + 108))(**v22, v31, &v39);
    FIELD_U32(a1, 6308) = v42;
    FIELD_U32(a1, 6312) = v43;
    FIELD_U32(a1, 6316) = v44;
    v32 = **(_DWORD **)(a1 + 6108);
    v33 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v32 + 84);
    v39 = &sead__SafeStringBase__vtable;
    v40 = "leaf3";
    v34 = v33(v32, &v39);
    (*(void (__fastcall **)(_DWORD, int, int (***)()))(*(_DWORD *)**v22 + 108))(**v22, v34, &v39);
    FIELD_U32(a1, 6320) = v42;
    FIELD_U32(a1, 6324) = v43;
    FIELD_U32(a1, 6328) = v44;
    v35 = **(_DWORD **)(a1 + 6108);
    v36 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v35 + 84);
    v39 = &sead__SafeStringBase__vtable;
    v40 = "leaf4";
    v37 = v36(v35, &v39);
    (*(void (__fastcall **)(_DWORD, int, int (***)()))(*(_DWORD *)**v22 + 108))(**v22, v37, &v39);
    FIELD_U32(a1, 6332) = v42;
    FIELD_U32(a1, 6336) = v43;
    FIELD_U32(a1, 6340) = v44;
    result = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v22 + 132))(**v22, 0);
    v38 = result;
    if ( result )
    {
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 1065353216;
      (*(void (__fastcall **)(int, _DWORD, int (***)()))(*(_DWORD *)result + 24))(result, 0, &v39);
      v42 = FIELD_U32(a1, 6228);
      return (*(int (__fastcall **)(int, _DWORD, int (***)()))(*(_DWORD *)v38 + 20))(v38, 0, &v39);
    }
  }
  return result;
}
