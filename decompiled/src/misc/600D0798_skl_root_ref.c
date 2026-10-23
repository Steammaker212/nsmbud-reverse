/* skl_root_ref
 * address: 0x600D0798   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r7
  unsigned int v4; // r6
  float v5; // r0
  float v6; // r1
  float v7; // r2
  float v8; // s0
  float v9; // s8
  _DWORD **v10; // r6
  int v11; // r0
  int (__fastcall *v12)(int, float32x2_t *); // r2
  int v13; // r0
  ModelWrapper **v14; // r6
  StateBase *CurrentState; // r0
  int v16; // r5
  int v17; // r1
  int v18; // r0
  float v19; // s0
  float v20; // s2
  bool v21; // fzf
  bool v22; // fnf
  int v23; // r0
  unsigned int v25; // [sp+0h] [bp-A0h] BYREF
  _DWORD v26[3]; // [sp+4h] [bp-9Ch] BYREF
  float32x2_t v27[6]; // [sp+10h] [bp-90h] BYREF
  float32x2_t v28; // [sp+40h] [bp-60h] BYREF
  float v29; // [sp+48h] [bp-58h]
  float v30; // [sp+4Ch] [bp-54h]
  float v31; // [sp+50h] [bp-50h]
  float v32; // [sp+54h] [bp-4Ch]
  float v33; // [sp+58h] [bp-48h]
  float v34; // [sp+5Ch] [bp-44h]
  float v35; // [sp+60h] [bp-40h]
  float v36; // [sp+64h] [bp-3Ch]
  float v37; // [sp+68h] [bp-38h]
  float v38; // [sp+6Ch] [bp-34h]
  unsigned int v39; // [sp+70h] [bp-30h] BYREF
  unsigned int v40; // [sp+74h] [bp-2Ch] BYREF
  unsigned int v41; // [sp+78h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 108);
  v28.n64_u64[0] = 1065353216;
  v41 = v4;
  v40 = v3;
  v39 = v2;
  v29 = 0.0;
  v33 = 0.0;
  v35 = 0.0;
  v36 = 0.0;
  v37 = 1.0;
  v30 = v7;
  v31 = 0.0;
  v32 = 1.0;
  v34 = v5;
  v38 = v6;
  Mtx34_rotateY(&v28, &v40);
  Mtx34_rotateX(&v28, &v39);
  v8 = FIELD_F32(a1, 6940);
  v30 = v30 + (float)((float)((float)(v8 * v28.n64_f32[1]) + (float)(v28.n64_f32[0] * 0.0)) + (float)(v29 * 0.0));
  v34 = v34 + (float)((float)((float)(v8 * v32) + (float)(v31 * 0.0)) + (float)(v33 * 0.0));
  v38 = v38 + (float)((float)((float)(v8 * v36) + (float)(v35 * 0.0)) + (float)(v37 * 0.0));
  Mtx34_rotateZ(&v28, &v41);
  v9 = FIELD_F32(a1, 6940);
  v30 = v30 + (float)((float)((float)(v28.n64_f32[0] * 0.0) - (float)(v28.n64_f32[1] * v9)) + (float)(v29 * 0.0));
  v34 = v34 + (float)((float)((float)(v31 * 0.0) - (float)(v32 * v9)) + (float)(v33 * 0.0));
  v38 = v38 + (float)((float)((float)(v35 * 0.0) - (float)(v36 * v9)) + (float)(v37 * 0.0));
  v10 = (_DWORD **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), &v28);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v10 + 68))(**v10, a1 + 7320);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v10 + 52))(**v10);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v10 + 56))(**v10);
  v26[0] = 1065353216;
  v26[1] = 1065353216;
  v26[2] = 1065353216;
  v11 = **(_DWORD **)(a1 + 6304);
  v12 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v11 + 84);
  v27[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
  v27[0].n64_u32[1] = (unsigned __int32)"skl_root";
  v13 = v12(v11, v27);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(*(_DWORD *)**v10 + 108))(**v10, v13, v27);
  v25 = 0x40000000;
  Mtx34_rotateY(v27, &v25);
  v25 = 0x40000000;
  Mtx34_rotateX(v27, &v25);
  v14 = (ModelWrapper **)(a1 + 6320);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6320) + 60))(**(_DWORD **)(a1 + 6320), v27);
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)(*v14)->model + 68))((*v14)->model, v26);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v17 = (*(int (**)(void))(dword_60C8422C + 8))();
  v18 = FIELD_U32(a1, 6328);
  v19 = FIELD_F32(a1, 6992);
  v20 = FIELD_F32(v18, 20);
  v21 = v20 == v19;
  v22 = v20 < v19;
  if ( v16 == v17 )
  {
    if ( FIELD_U8(a1, 6996) )
    {
      if ( v22 || v21 )
        goto LABEL_12;
    }
    else if ( v20 >= v19 )
    {
LABEL_12:
      v23 = FIELD_U32(a1, 6324);
LABEL_15:
      Animation_update(v23);
      return ModelWrapper_updateModel(*v14);
    }
    Animation_update(v18);
    goto LABEL_12;
  }
  if ( FIELD_U8(a1, 6996) )
  {
    if ( v22 || v21 )
      return ModelWrapper_updateModel(*v14);
    goto LABEL_14;
  }
  if ( v20 < v19 )
  {
LABEL_14:
    Animation_update(FIELD_U32(a1, 6324));
    v23 = FIELD_U32(a1, 6328);
    goto LABEL_15;
  }
  return ModelWrapper_updateModel(*v14);
}
