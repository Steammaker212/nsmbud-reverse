/* sub_60315140
 * address: 0x60315140   size: 1152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60315140(float *a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // r5
  float v5; // r0
  float v6; // r1
  float v7; // r2
  float v8; // s0
  float v9; // s8
  float *v10; // r4
  StateBase *CurrentState; // r0
  int v12; // r5
  int v13; // r0
  int (__fastcall *v14)(int, float32x2_t *); // r2
  int v15; // r5
  int v16; // r0
  int (__fastcall *v17)(int, float32x2_t *); // r2
  int v18; // r0
  int v19; // r0
  int (__fastcall *v20)(int, float32x2_t *); // r2
  int v21; // r0
  int v22; // r0
  int (__fastcall *v23)(int, float32x2_t *); // r2
  int v24; // r0
  int v25; // r0
  int (__fastcall *v26)(int, float32x2_t *); // r2
  int v27; // r0
  _BYTE v29[12]; // [sp+4h] [bp-ACh] BYREF
  float32x2_t v30; // [sp+10h] [bp-A0h] BYREF
  int v31; // [sp+1Ch] [bp-94h]
  int v32; // [sp+2Ch] [bp-84h]
  int v33; // [sp+3Ch] [bp-74h]
  float32x2_t v34; // [sp+40h] [bp-70h] BYREF
  float v35; // [sp+48h] [bp-68h]
  float v36; // [sp+4Ch] [bp-64h]
  float v37; // [sp+50h] [bp-60h]
  float v38; // [sp+54h] [bp-5Ch]
  float v39; // [sp+58h] [bp-58h]
  float v40; // [sp+5Ch] [bp-54h]
  float v41; // [sp+60h] [bp-50h]
  float v42; // [sp+64h] [bp-4Ch]
  float v43; // [sp+68h] [bp-48h]
  float v44; // [sp+6Ch] [bp-44h]
  unsigned int v45; // [sp+70h] [bp-40h] BYREF
  unsigned int v46; // [sp+74h] [bp-3Ch] BYREF
  unsigned int v47; // [sp+78h] [bp-38h] BYREF

  v2 = *((_DWORD *)a1 + 39);
  v3 = *((_DWORD *)a1 + 40);
  v4 = *((_DWORD *)a1 + 41);
  v5 = a1[28];
  v6 = a1[29];
  v7 = a1[27];
  v47 = v4;
  v46 = v3;
  v45 = v2;
  v34.n64_u64[0] = 1065353216;
  v35 = 0.0;
  v37 = 0.0;
  v38 = 1.0;
  v39 = 0.0;
  v41 = 0.0;
  v42 = 0.0;
  v43 = 1.0;
  v36 = v7;
  v40 = v5;
  v44 = v6;
  Mtx34_rotateY(&v34, &v46);
  v8 = a1[1900];
  v36 = v36 + (float)((float)((float)(v8 * v34.n64_f32[1]) + (float)(v34.n64_f32[0] * 0.0)) + (float)(v35 * 0.0));
  v40 = v40 + (float)((float)((float)(v8 * v38) + (float)(v37 * 0.0)) + (float)(v39 * 0.0));
  v44 = v44 + (float)((float)((float)(v8 * v42) + (float)(v41 * 0.0)) + (float)(v43 * 0.0));
  Mtx34_rotateX(&v34, &v45);
  Mtx34_rotateZ(&v34, &v47);
  v9 = a1[1900];
  v36 = v36 + (float)((float)((float)(v34.n64_f32[0] * 0.0) - (float)(v34.n64_f32[1] * v9)) + (float)(v35 * 0.0));
  v40 = v40 + (float)((float)((float)(v37 * 0.0) - (float)(v38 * v9)) + (float)(v39 * 0.0));
  v44 = v44 + (float)((float)((float)(v41 * 0.0) - (float)(v42 * v9)) + (float)(v43 * 0.0));
  v10 = a1 + 1575;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***((_DWORD ***)a1 + 1575) + 60))(**((_DWORD **)a1 + 1575), &v34);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v10 + 68))(**(_DWORD **)v10, a1 + 1942);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 1521));
  v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v12 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() && !*((_BYTE *)a1 + 7666) )
    j_ModelWrapper_updateAnims(*(_DWORD *)v10);
  sub_604218E0(*(_DWORD **)v10);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v10 + 52))(**(_DWORD **)v10);
  v13 = **(_DWORD **)v10;
  v14 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v13 + 84);
  v30.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v30.n64_u32[1] = (unsigned __int32)"head";
  v15 = v14(v13, &v30);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(***(_DWORD ***)v10 + 100))(
    **(_DWORD **)v10,
    v15,
    &v30,
    v29);
  Mtx34_rotateX(&v30, (unsigned int *)a1 + 1907);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, _BYTE *))(***(_DWORD ***)v10 + 96))(
    **(_DWORD **)v10,
    v15,
    &v30,
    v29);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)v10 + 56))(**(_DWORD **)v10);
  v16 = **(_DWORD **)v10;
  v17 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v16 + 84);
  v30.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v30.n64_u32[1] = (unsigned __int32)"head";
  v18 = v17(v16, &v30);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)v10 + 108))(**(_DWORD **)v10, v18, &v30);
  *((_DWORD *)a1 + 1588) = v31;
  *((_DWORD *)a1 + 1589) = v32;
  *((_DWORD *)a1 + 1590) = v33;
  v19 = **(_DWORD **)v10;
  v20 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v19 + 84);
  v30.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v30.n64_u32[1] = (unsigned __int32)"foot_l";
  v21 = v20(v19, &v30);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)v10 + 108))(**(_DWORD **)v10, v21, &v30);
  *((_DWORD *)a1 + 1582) = v31;
  *((_DWORD *)a1 + 1583) = v32;
  *((_DWORD *)a1 + 1584) = v33;
  v22 = **(_DWORD **)v10;
  v23 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v22 + 84);
  v30.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v30.n64_u32[1] = (unsigned __int32)"foot_r";
  v24 = v23(v22, &v30);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)v10 + 108))(**(_DWORD **)v10, v24, &v30);
  *((_DWORD *)a1 + 1585) = v31;
  *((_DWORD *)a1 + 1586) = v32;
  *((_DWORD *)a1 + 1587) = v33;
  v25 = **(_DWORD **)v10;
  v26 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v25 + 84);
  v30.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v30.n64_u32[1] = (unsigned __int32)"skl_root";
  v27 = v26(v25, &v30);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)v10 + 108))(**(_DWORD **)v10, v27, &v30);
  *((_DWORD *)a1 + 1594) = v31;
  *((_DWORD *)a1 + 1595) = v32;
  *((_DWORD *)a1 + 1596) = v33;
  return ((int (__fastcall *)(float *))loc_603155DC)(a1);
}
