/* sub_6033D008
 * address: 0x6033D008   size: 1380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033D008(int a1, _DWORD *a2)
{
  float v4; // r3
  float v5; // r7
  float v6; // r6
  float v7; // r0
  float v8; // r1
  float v9; // r2
  float v10; // s16
  StateBase *CurrentState; // r0
  int v12; // r6
  int v13; // r0
  int (__fastcall *v14)(int, float32x2_t *); // r2
  int v15; // r6
  float *v16; // r5
  int v17; // t1
  float v18; // s0
  int v19; // r0
  int (__fastcall *v20)(int, float32x2_t *); // r2
  int v21; // r6
  float v22; // s0
  int v23; // r0
  int (__fastcall *v24)(int, float32x2_t *); // r2
  int v25; // r6
  float v26; // s0
  int v27; // r0
  int (__fastcall *v28)(int, float32x2_t *); // r2
  int v29; // r6
  float v30; // s0
  int v32; // [sp+4h] [bp-34h] BYREF
  float32x2_t v33; // [sp+8h] [bp-30h] BYREF
  float v34; // [sp+10h] [bp-28h]
  float v35; // [sp+14h] [bp-24h]
  float v36; // [sp+18h] [bp-20h]
  float v37; // [sp+1Ch] [bp-1Ch]
  float v38; // [sp+20h] [bp-18h]
  float v39; // [sp+24h] [bp-14h]
  float v40; // [sp+28h] [bp-10h]
  float v41; // [sp+2Ch] [bp-Ch]
  float v42; // [sp+30h] [bp-8h]
  float v43; // [sp+34h] [bp-4h]
  float v44; // [sp+38h] [bp+0h] BYREF
  float v45; // [sp+3Ch] [bp+4h] BYREF
  unsigned int v46[7]; // [sp+40h] [bp+8h] BYREF

  v4 = FIELD_F32(a1, 156);
  v5 = FIELD_F32(a1, 160);
  v6 = FIELD_F32(a1, 164);
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_F32(a1, 116);
  v9 = FIELD_F32(a1, 108);
  *(float *)v46 = v6;
  v45 = v5;
  v44 = v4;
  v33.n64_u64[0] = 1065353216;
  v34 = 0.0;
  v36 = 0.0;
  v37 = 1.0;
  v38 = 0.0;
  v40 = 0.0;
  v41 = 0.0;
  v42 = 1.0;
  v35 = v9;
  v39 = v7;
  v43 = v8;
  Mtx34_rotateY(&v33, (unsigned int *)&v45);
  v10 = FIELD_F32(a1, 576);
  v35 = v35 + (float)((float)((float)(v10 * v33.n64_f32[1]) + (float)(v33.n64_f32[0] * 0.0)) + (float)(v34 * 0.0));
  v39 = v39 + (float)((float)((float)(v10 * v37) + (float)(v36 * 0.0)) + (float)(v38 * 0.0));
  v43 = v43 + (float)((float)((float)(v10 * v41) + (float)(v40 * 0.0)) + (float)(v42 * 0.0));
  Mtx34_rotateX(&v33, (unsigned int *)&v44);
  v35 = v35 + (float)((float)((float)(v33.n64_f32[0] * 0.0) - (float)(v33.n64_f32[1] * v10)) + (float)(v34 * 0.0));
  v39 = v39 + (float)((float)((float)(v36 * 0.0) - (float)(v37 * v10)) + (float)(v38 * 0.0));
  v43 = v43 + (float)((float)((float)(v40 * 0.0) - (float)(v41 * v10)) + (float)(v42 * 0.0));
  Mtx34_rotateZ(&v33, v46);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*a2 + 60))(*a2, &v33);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v12 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*a2 + 68))(*a2, a1 + 144);
  }
  else
  {
    j_ModelWrapper_updateAnims(a2);
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*a2 + 68))(*a2, a1 + 6792);
  }
  if ( FIELD_U8(a1, 6706) == 1 )
  {
    sub_6040EB64(a1 + 6312);
  }
  else if ( !FIELD_U8(a1, 6706) )
  {
    sub_604218E0(a2);
  }
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*a2 + 52))(*a2);
  if ( FIELD_U8(a1, 6706) == 1 )
  {
    v44 = 0.0;
    v45 = 0.0;
    *(float *)v46 = 0.0;
    v13 = *a2;
    v14 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*a2 + 84);
    v33.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v33.n64_u32[1] = (unsigned __int32)"ha_1";
    v15 = v14(v13, &v33);
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)*a2 + 100))(*a2, v15, &v33, &v44);
    v17 = FIELD_U32(a1, 6696);
    v16 = (float *)(a1 + 6696);
    v32 = -v17;
    Mtx34_rotateZ(&v33, (unsigned int *)&v32);
    v18 = *(v16 - 1);
    v44 = v18 * v44;
    v45 = v18 * v45;
    *(float *)v46 = v18 * *(float *)v46;
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)*a2 + 96))(*a2, v15, &v33, &v44);
    v44 = 0.0;
    v45 = 0.0;
    *(float *)v46 = 0.0;
    v19 = *a2;
    v20 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*a2 + 84);
    v33.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v33.n64_u32[1] = (unsigned __int32)"ha_2";
    v21 = v20(v19, &v33);
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)*a2 + 100))(*a2, v21, &v33, &v44);
    v32 = -*(_DWORD *)v16;
    Mtx34_rotateZ(&v33, (unsigned int *)&v32);
    v22 = *(v16 - 1);
    v44 = v22 * v44;
    v45 = v22 * v45;
    *(float *)v46 = v22 * *(float *)v46;
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)*a2 + 96))(*a2, v21, &v33, &v44);
    v44 = 0.0;
    v45 = 0.0;
    *(float *)v46 = 0.0;
    v23 = *a2;
    v24 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*a2 + 84);
    v33.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v33.n64_u32[1] = (unsigned __int32)"ha_3";
    v25 = v24(v23, &v33);
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)*a2 + 100))(*a2, v25, &v33, &v44);
    v32 = -*(_DWORD *)v16;
    Mtx34_rotateZ(&v33, (unsigned int *)&v32);
    v26 = *(v16 - 1);
    v44 = v26 * v44;
    v45 = v26 * v45;
    *(float *)v46 = v26 * *(float *)v46;
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)*a2 + 96))(*a2, v25, &v33, &v44);
    v44 = 0.0;
    v45 = 0.0;
    *(float *)v46 = 0.0;
    v27 = *a2;
    v28 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)*a2 + 84);
    v33.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v33.n64_u32[1] = (unsigned __int32)"ha_4";
    v29 = v28(v27, &v33);
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)*a2 + 100))(*a2, v29, &v33, &v44);
    v32 = -*(_DWORD *)v16;
    Mtx34_rotateZ(&v33, (unsigned int *)&v32);
    v30 = *(v16 - 1);
    v44 = v30 * v44;
    v45 = v30 * v45;
    *(float *)v46 = v30 * *(float *)v46;
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(*(_DWORD *)*a2 + 96))(*a2, v29, &v33, &v44);
    sub_6040EC24(v16 - 96, *a2);
  }
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a2 + 56))(*a2);
}
