/* skl_root_ref_32C46C
 * address: 0x6032C46C   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall skl_root_ref_32C46C(int a1)
{
  ModelWrapper **v2; // r6
  StateBase *CurrentState; // r0
  int v4; // r5
  int *animations; // r0
  int *v6; // r0
  void *model; // r0
  int (__fastcall *v8)(void *, float32x2_t *); // r2
  int v9; // r0
  float v10; // s5
  float v11; // s7
  float v12; // s6
  float v13; // s14
  float v14; // s2
  float v15; // s8
  float v16; // s10
  int v17; // r0
  int (__fastcall *v18)(int, float *); // r2
  int v19; // r5
  _DWORD *v20; // r0
  float v21; // s2
  float v22; // s6
  float v23; // s4
  float v24; // s8
  float v25; // s10
  float result; // s0
  float v27; // [sp+0h] [bp-88h] BYREF
  float v28; // [sp+4h] [bp-84h]
  float v29; // [sp+8h] [bp-80h]
  float v30; // [sp+Ch] [bp-7Ch]
  float v31; // [sp+10h] [bp-78h]
  float v32; // [sp+14h] [bp-74h]
  float v33; // [sp+18h] [bp-70h]
  float v34; // [sp+1Ch] [bp-6Ch]
  float v35; // [sp+20h] [bp-68h]
  float v36; // [sp+24h] [bp-64h]
  float v37; // [sp+28h] [bp-60h]
  float v38; // [sp+2Ch] [bp-5Ch]
  float32x2_t v39; // [sp+30h] [bp-58h] BYREF
  float v40; // [sp+38h] [bp-50h]
  float v41; // [sp+3Ch] [bp-4Ch]
  float v42; // [sp+40h] [bp-48h]
  float v43; // [sp+44h] [bp-44h]
  float v44; // [sp+48h] [bp-40h]
  float v45; // [sp+4Ch] [bp-3Ch]
  float v46; // [sp+50h] [bp-38h]
  float v47; // [sp+54h] [bp-34h]
  float v48; // [sp+58h] [bp-30h]
  float v49; // [sp+5Ch] [bp-2Ch]

  v39.n64_u64[0] = 1065353216;
  v40 = 0.0;
  v42 = 0.0;
  v43 = 1.0;
  v44 = 0.0;
  v46 = 0.0;
  v47 = 0.0;
  v48 = 1.0;
  v41 = FIELD_F32(a1, 108);
  v45 = FIELD_F32(a1, 112);
  v49 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v39, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v39, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v39, (unsigned int *)(a1 + 164));
  v2 = (ModelWrapper **)(a1 + 13064);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 13064) + 60))(**(_DWORD **)(a1 + 13064), &v39);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)(*v2)->model + 68))((*v2)->model, a1 + 144);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    animations = (int *)(*v2)->texAnims.animations;
    if ( (*v2)->texAnims.count > 1u )
      ++animations;
    Animation_update(*animations);
    Animation_update((int)*(*v2)->shuAnims.animations);
    v6 = (int *)(*v2)->shuAnims.animations;
    if ( (*v2)->shuAnims.count > 1u )
      ++v6;
    Animation_update(*v6);
  }
  ModelWrapper_updateModel(*v2);
  model = (*v2)->model;
  v8 = *(int (__fastcall **)(void *, float32x2_t *))(*(_DWORD *)model + 84);
  v39.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v39.n64_u32[1] = (unsigned __int32)"skl_root";
  v9 = v8(model, &v39);
  (*(void (__fastcall **)(void *, int, float32x2_t *))(*(_DWORD *)(*v2)->model + 108))((*v2)->model, v9, &v39);
  v10 = v49;
  v11 = (float)((float)(v47 * 0.0) + (float)(v46 * 0.0)) + (float)(v48 * 4.0);
  v12 = v41 + (float)((float)((float)(v39.n64_f32[1] * 0.0) + (float)(v39.n64_f32[0] * 0.0)) + (float)(v40 * 4.0));
  v13 = v45 + (float)((float)((float)(v43 * 0.0) + (float)(v42 * 0.0)) + (float)(v44 * 4.0));
  v14 = (float)((float)(v39.n64_f32[1] * 0.0) + (float)(v39.n64_f32[0] * 0.0)) + (float)(v40 * 6.0);
  v15 = (float)((float)(v43 * 0.0) + (float)(v42 * 0.0)) + (float)(v44 * 6.0);
  v16 = (float)((float)(v47 * 0.0) + (float)(v46 * 0.0)) + (float)(v48 * 6.0);
  FIELD_F32(a1, 13232) = v12;
  FIELD_F32(a1, 13236) = v13;
  FIELD_F32(a1, 13240) = v10 + v11;
  v41 = v12 + v14;
  v45 = v13 + v15;
  v49 = (float)(v10 + v11) + v16;
  FIELD_F32(a1, 13244) = v12 + v14;
  FIELD_F32(a1, 13248) = v13 + v15;
  FIELD_F32(a1, 13252) = (float)(v10 + v11) + v16;
  v17 = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1);
  v18 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v17 + 84);
  v27 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v28 = COERCE_FLOAT("skl_root");
  v19 = v18(v17, &v27);
  v20 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1);
  (*(void (__fastcall **)(_DWORD, int, float *))(*(_DWORD *)*v20 + 108))(*v20, v19, &v27);
  v30 = v30 + (float)((float)((float)(v28 * 0.0) + (float)(v27 * 0.0)) - (float)(v29 * 4.0));
  v34 = v34 + (float)((float)((float)(v32 * 0.0) + (float)(v31 * 0.0)) - (float)(v33 * 4.0));
  v21 = v34;
  v22 = v36;
  v23 = v35;
  v24 = v37;
  v25 = v38;
  FIELD_F32(a1, 7632) = v30;
  FIELD_F32(a1, 7636) = v21;
  result = v25 + (float)((float)((float)(v22 * 0.0) + (float)(v23 * 0.0)) - (float)(v24 * 4.0));
  FIELD_F32(a1, 7640) = result;
  return result;
}
