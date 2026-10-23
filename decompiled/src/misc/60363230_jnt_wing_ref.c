/* jnt_wing_ref
 * address: 0x60363230   size: 912   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jnt_wing_ref(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r7
  unsigned int v4; // r6
  float v5; // r0
  float v6; // r1
  float v7; // r2
  float v8; // s16
  int **v9; // r7
  StateBase *CurrentState; // r0
  int v11; // r6
  int result; // r0
  int v13; // r0
  int (__fastcall *v14)(int, _DWORD *); // r2
  int v15; // r0
  int **v16; // r7
  int v17; // r0
  void (__fastcall *v18)(int, int *); // r2
  StateBase *v19; // r0
  int v20; // r5
  int v21; // r0
  int (__fastcall *v22)(int, int *); // r2
  int v23; // r0
  int v24; // [sp+0h] [bp-C8h] BYREF
  int v25; // [sp+4h] [bp-C4h]
  int v26; // [sp+8h] [bp-C0h]
  int v27; // [sp+Ch] [bp-BCh]
  int v28; // [sp+1Ch] [bp-ACh]
  int v29; // [sp+2Ch] [bp-9Ch]
  _DWORD v30[12]; // [sp+30h] [bp-98h] BYREF
  float32x2_t v31; // [sp+60h] [bp-68h] BYREF
  float v32; // [sp+68h] [bp-60h]
  float v33; // [sp+6Ch] [bp-5Ch]
  float v34; // [sp+70h] [bp-58h]
  float v35; // [sp+74h] [bp-54h]
  float v36; // [sp+78h] [bp-50h]
  float v37; // [sp+7Ch] [bp-4Ch]
  float v38; // [sp+80h] [bp-48h]
  float v39; // [sp+84h] [bp-44h]
  float v40; // [sp+88h] [bp-40h]
  float v41; // [sp+8Ch] [bp-3Ch]
  unsigned int v42; // [sp+90h] [bp-38h] BYREF
  unsigned int v43; // [sp+94h] [bp-34h] BYREF
  unsigned int v44; // [sp+98h] [bp-30h] BYREF

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 108);
  v44 = v4;
  v43 = v3;
  v42 = v2;
  v31.n64_u64[0] = 1065353216;
  v32 = 0.0;
  v34 = 0.0;
  v35 = 1.0;
  v36 = 0.0;
  v38 = 0.0;
  v39 = 0.0;
  v40 = 1.0;
  v33 = v7;
  v37 = v5;
  v41 = v6;
  Mtx34_rotateY(&v31, &v43);
  v8 = FIELD_F32(a1, 576);
  v33 = v33 + (float)((float)((float)(v8 * v31.n64_f32[1]) + (float)(v31.n64_f32[0] * 0.0)) + (float)(v32 * 0.0));
  v37 = v37 + (float)((float)((float)(v8 * v35) + (float)(v34 * 0.0)) + (float)(v36 * 0.0));
  v41 = v41 + (float)((float)((float)(v8 * v39) + (float)(v38 * 0.0)) + (float)(v40 * 0.0));
  Mtx34_rotateX(&v31, &v42);
  v33 = v33 + (float)((float)((float)(v31.n64_f32[0] * 0.0) - (float)(v31.n64_f32[1] * v8)) + (float)(v32 * 0.0));
  v37 = v37 + (float)((float)((float)(v34 * 0.0) - (float)(v35 * v8)) + (float)(v36 * 0.0));
  v41 = v41 + (float)((float)((float)(v38 * 0.0) - (float)(v39 * v8)) + (float)(v40 * 0.0));
  Mtx34_rotateZ(&v31, &v44);
  v9 = (int **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), &v31);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v9 + 68))(**v9, a1 + 6792);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v11 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    j_ModelWrapper_updateAnims(*v9);
  sub_604218E0(*v9);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v9 + 52))(**v9);
  (*(void (__fastcall **)(int))(*(_DWORD *)**v9 + 56))(**v9);
  result = FIELD_U8(a1, 6843);
  if ( FIELD_U8(a1, 6843) )
  {
    v13 = **v9;
    v14 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v13 + 84);
    v30[0] = &sead__SafeStringBase__vtable;
    v30[1] = "jnt_wing";
    v15 = v14(v13, v30);
    (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v9 + 108))(**v9, v15, v30);
    v16 = (int **)(a1 + 6824);
    (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 6824) + 60))(**(_DWORD **)(a1 + 6824), v30);
    v17 = **(_DWORD **)(a1 + 6824);
    v18 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v17 + 68);
    v24 = 1065353216;
    v25 = 1065353216;
    v26 = 1065353216;
    v18(v17, &v24);
    v19 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
    if ( v20 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      j_ModelWrapper_updateAnims(*v16);
    sub_60421880(*v16);
    v21 = **v16;
    v22 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v21 + 84);
    v24 = (int)&sead__SafeStringBase__vtable;
    v25 = (int)"wing_root";
    v23 = v22(v21, &v24);
    (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)**v16 + 108))(**v16, v23, &v24);
    FIELD_U32(a1, 6828) = v27;
    FIELD_U32(a1, 6832) = v28;
    result = v29;
    FIELD_U32(a1, 6836) = v29;
  }
  return result;
}
