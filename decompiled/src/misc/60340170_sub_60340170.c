/* sub_60340170
 * address: 0x60340170   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60340170(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r6
  unsigned int v4; // r5
  float v5; // r0
  float v6; // r1
  float v7; // r2
  float v8; // s16
  float *v9; // r4
  _DWORD *v10; // t1
  float v11; // s2
  float v12; // s0
  StateBase *CurrentState; // r0
  int v14; // r5
  float v16[3]; // [sp+4h] [bp-6Ch] BYREF
  float32x2_t v17; // [sp+10h] [bp-60h] BYREF
  float v18; // [sp+18h] [bp-58h]
  float v19; // [sp+1Ch] [bp-54h]
  float v20; // [sp+20h] [bp-50h]
  float v21; // [sp+24h] [bp-4Ch]
  float v22; // [sp+28h] [bp-48h]
  float v23; // [sp+2Ch] [bp-44h]
  float v24; // [sp+30h] [bp-40h]
  float v25; // [sp+34h] [bp-3Ch]
  float v26; // [sp+38h] [bp-38h]
  float v27; // [sp+3Ch] [bp-34h]
  unsigned int v28; // [sp+40h] [bp-30h] BYREF
  unsigned int v29; // [sp+44h] [bp-2Ch] BYREF
  unsigned int v30; // [sp+48h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 116);
  v7 = FIELD_F32(a1, 108);
  v30 = v4;
  v29 = v3;
  v28 = v2;
  v8 = FIELD_F32(a1, 576);
  v17.n64_u64[0] = 1065353216;
  v18 = 0.0;
  v20 = 0.0;
  v21 = 1.0;
  v22 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  v26 = 1.0;
  v19 = v7;
  v23 = v5;
  v27 = v6;
  Mtx34_rotateY(&v17, &v29);
  v19 = v19 + (float)((float)((float)(v8 * v17.n64_f32[1]) + (float)(v17.n64_f32[0] * 0.0)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v8 * v21) + (float)(v20 * 0.0)) + (float)(v22 * 0.0));
  v27 = v27 + (float)((float)((float)(v8 * v25) + (float)(v24 * 0.0)) + (float)(v26 * 0.0));
  Mtx34_rotateX(&v17, &v28);
  v19 = v19 + (float)((float)((float)(v17.n64_f32[0] * 0.0) - (float)(v17.n64_f32[1] * v8)) + (float)(v18 * 0.0));
  v23 = v23 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * v8)) + (float)(v22 * 0.0));
  v27 = v27 + (float)((float)((float)(v24 * 0.0) - (float)(v25 * v8)) + (float)(v26 * 0.0));
  Mtx34_rotateZ(&v17, &v30);
  v10 = *(_DWORD **)(a1 + 6304);
  v9 = (float *)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v10 + 60))(*v10, &v17);
  v11 = (float)(*(v9 - 1539) + v9[30]) + (float)((float)(v9[156] - *(v9 - 1539)) * 0.5);
  v12 = (float)(*(v9 - 1538) + v9[31]) + (float)((float)(v9[157] - *(v9 - 1538)) * 0.5);
  v16[0] = (float)(*(v9 - 1540) + v9[29]) + (float)((float)(v9[155] - *(v9 - 1540)) * 0.5);
  v16[1] = v11;
  v16[2] = v12;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v9 + 68))(**(_DWORD **)v9, v16);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v9 - 55));
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v14 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    j_ModelWrapper_updateAnims(*(_DWORD *)v9);
  return sub_60421880(*(_DWORD *)v9);
}
