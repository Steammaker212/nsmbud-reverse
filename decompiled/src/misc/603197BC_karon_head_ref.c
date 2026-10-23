/* karon_head_ref
 * address: 0x603197BC   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall karon_head_ref(int a1)
{
  float v2; // s0
  unsigned int *v3; // r7
  float v4; // r0
  float v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r7
  float v9; // s0
  float v10; // s8
  StateBase *CurrentState; // r0
  int **v12; // r7
  StateBase *v13; // r0
  int v14; // r5
  int v15; // r0
  int (__fastcall *v16)(int, _DWORD *); // r2
  unsigned __int8 v17; // r0
  _DWORD v19[2]; // [sp+0h] [bp-68h] BYREF
  unsigned int v20; // [sp+8h] [bp-60h] BYREF
  unsigned int v21; // [sp+Ch] [bp-5Ch] BYREF
  unsigned int v22; // [sp+10h] [bp-58h] BYREF
  float32x2_t v23; // [sp+18h] [bp-50h] BYREF
  float v24; // [sp+20h] [bp-48h]
  float v25; // [sp+24h] [bp-44h]
  float v26; // [sp+28h] [bp-40h]
  float v27; // [sp+2Ch] [bp-3Ch]
  float v28; // [sp+30h] [bp-38h]
  float v29; // [sp+34h] [bp-34h]
  float v30; // [sp+38h] [bp-30h]
  float v31; // [sp+3Ch] [bp-2Ch]
  float v32; // [sp+40h] [bp-28h]
  float v33; // [sp+44h] [bp-24h]

  v2 = FIELD_F32(a1, 112);
  v3 = (unsigned int *)(a1 + 156);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_F32(a1, 108);
  v6 = *v3;
  v7 = v3[1];
  v8 = v3[2];
  v20 = v6;
  v21 = v7;
  v22 = v8;
  v23.n64_u64[0] = 1065353216;
  v24 = 0.0;
  v26 = 0.0;
  v27 = 1.0;
  v28 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 1.0;
  v25 = v5;
  v29 = v2 + -2.0;
  v33 = v4;
  Mtx34_rotateY(&v23, &v21);
  v9 = FIELD_F32(a1, 6384);
  v25 = v25 + (float)((float)((float)(v9 * v23.n64_f32[1]) + (float)(v23.n64_f32[0] * 0.0)) + (float)(v24 * 0.0));
  v29 = v29 + (float)((float)((float)(v9 * v27) + (float)(v26 * 0.0)) + (float)(v28 * 0.0));
  v33 = v33 + (float)((float)((float)(v9 * v31) + (float)(v30 * 0.0)) + (float)(v32 * 0.0));
  Mtx34_rotateX(&v23, &v20);
  v10 = FIELD_F32(a1, 6384);
  v25 = v25 + (float)((float)((float)(v23.n64_f32[0] * 0.0) - (float)(v23.n64_f32[1] * v10)) + (float)(v24 * 0.0));
  v29 = v29 + (float)((float)((float)(v26 * 0.0) - (float)(v27 * v10)) + (float)(v28 * 0.0));
  v33 = v33 + (float)((float)((float)(v30 * 0.0) - (float)(v31 * v10)) + (float)(v32 * 0.0));
  Mtx34_rotateZ(&v23, &v22);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  (*((void (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  (*(void (**)(void))(dword_60C935C0 + 8))();
  v12 = (int **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), &v23);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v12 + 68))(**v12, a1 + 6776);
  v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
  if ( v14 == (*(int (**)(void))(dword_60C935A0 + 8))() )
    j_ModelWrapper_updateAnims(*v12);
  sub_60421880(*v12);
  v15 = **v12;
  v16 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v15 + 84);
  v19[0] = &sead__SafeStringBase__vtable;
  v19[1] = "karon_head";
  v17 = v16(v15, v19);
  return (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)**v12 + 108))(**v12, v17, a1 + 6336);
}
