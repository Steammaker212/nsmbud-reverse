/* sub_60288D08
 * address: 0x60288D08   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60288D08(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r7
  StateBase *v4; // r0
  int v5; // r7
  StateBase *v6; // r0
  int v7; // r5
  int **v8; // r5
  int v9; // r3
  int v10; // r0
  void (__fastcall *v11)(int, _DWORD *); // r2
  int v12; // r1
  _DWORD v14[3]; // [sp+4h] [bp-64h] BYREF
  float32x2_t v15; // [sp+10h] [bp-58h] BYREF
  float v16; // [sp+18h] [bp-50h]
  float v17; // [sp+1Ch] [bp-4Ch]
  float v18; // [sp+20h] [bp-48h]
  float v19; // [sp+24h] [bp-44h]
  float v20; // [sp+28h] [bp-40h]
  float v21; // [sp+2Ch] [bp-3Ch]
  float v22; // [sp+30h] [bp-38h]
  float v23; // [sp+34h] [bp-34h]
  float v24; // [sp+38h] [bp-30h]
  float v25; // [sp+3Ch] [bp-2Ch]

  v15.n64_u64[0] = 1065353216;
  v16 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v20 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v24 = 1.0;
  v17 = FIELD_F32(a1, 108);
  v21 = FIELD_F32(a1, 112);
  v25 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v15, (unsigned int *)(a1 + 160));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C8F30C + 8))()
    || (v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4),
        v5 == (*(int (**)(void))(dword_60C8F2CC + 8))()) )
  {
    v17 = v17 + (float)((float)((float)(v15.n64_f32[1] * 12.0) + (float)(v15.n64_f32[0] * 0.0)) + (float)(v16 * 0.0));
    v21 = v21 + (float)((float)((float)(v19 * 12.0) + (float)(v18 * 0.0)) + (float)(v20 * 0.0));
    v25 = v25 + (float)((float)((float)(v23 * 12.0) + (float)(v22 * 0.0)) + (float)(v24 * 0.0));
    Mtx34_rotateX(&v15, (unsigned int *)(a1 + 156));
    v17 = v17 + (float)((float)((float)(v15.n64_f32[0] * 0.0) - (float)(v15.n64_f32[1] * 12.0)) + (float)(v16 * 0.0));
    v21 = v21 + (float)((float)((float)(v18 * 0.0) - (float)(v19 * 12.0)) + (float)(v20 * 0.0));
    v25 = v25 + (float)((float)((float)(v22 * 0.0) - (float)(v23 * 12.0)) + (float)(v24 * 0.0));
  }
  else
  {
    Mtx34_rotateX(&v15, (unsigned int *)(a1 + 156));
  }
  Mtx34_rotateZ(&v15, (unsigned int *)(a1 + 164));
  v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    v8 = (int **)(a1 + 6300);
  }
  else
  {
    ActorScaler_execute((ActorScaler *)(a1 + 6352));
    v8 = (int **)(a1 + 6300);
    j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  }
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)**v8 + 60))(**v8, &v15);
  v9 = FIELD_U32(a1, 6360);
  v10 = **v8;
  v11 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v10 + 68);
  v12 = FIELD_U32(a1, 6364);
  v14[0] = FIELD_U32(a1, 6356);
  v14[1] = v9;
  v14[2] = v12;
  v11(v10, v14);
  return sub_60421880(*v8);
}
