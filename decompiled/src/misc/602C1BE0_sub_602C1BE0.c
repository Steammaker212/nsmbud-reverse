/* sub_602C1BE0
 * address: 0x602C1BE0   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C1BE0(int a1, int a2)
{
  float v4; // s0
  float v5; // s2
  float v6; // s4
  unsigned int v7; // r1
  unsigned int v8; // r2
  float v9; // s6
  float v10; // s8
  float v11; // s8
  _DWORD **v12; // r7
  StateBase *CurrentState; // r0
  int v14; // r6
  int result; // r0
  float32x2_t v16; // [sp+ACh] [bp-30h] BYREF
  float v17; // [sp+B4h] [bp-28h]
  float v18; // [sp+B8h] [bp-24h]
  float v19; // [sp+BCh] [bp-20h]
  float v20; // [sp+C0h] [bp-1Ch]
  float v21; // [sp+C4h] [bp-18h]
  float v22; // [sp+C8h] [bp-14h]
  float v23; // [sp+CCh] [bp-10h]
  float v24; // [sp+D0h] [bp-Ch]
  float v25; // [sp+D4h] [bp-8h]
  float v26; // [sp+D8h] [bp-4h]
  unsigned int v27; // [sp+DCh] [bp+0h] BYREF
  unsigned int v28; // [sp+E0h] [bp+4h] BYREF
  unsigned int v29[4]; // [sp+E4h] [bp+8h] BYREF

  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 116);
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_U32(a1, 160);
  v8 = FIELD_U32(a1, 164);
  v27 = FIELD_U32(a1, 156);
  v28 = v7;
  v29[0] = v8;
  v16.n64_u64[0] = 1065353216;
  v17 = 0.0;
  v19 = 0.0;
  v20 = 1.0;
  v21 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  v25 = 1.0;
  v9 = FIELD_F32(a1, 576);
  v10 = (float)(v9 * 0.0) + 0.0;
  v18 = v6 + v10;
  v22 = v4 + (float)(v9 + 0.0);
  v26 = v5 + v10;
  Mtx34_rotateZ(&v16, v29);
  v11 = FIELD_F32(a1, 576);
  v18 = v18 + (float)((float)((float)(v16.n64_f32[0] * 0.0) - (float)(v16.n64_f32[1] * v11)) + (float)(v17 * 0.0));
  v22 = v22 + (float)((float)((float)(v19 * 0.0) - (float)(v20 * v11)) + (float)(v21 * 0.0));
  v26 = v26 + (float)((float)((float)(v23 * 0.0) - (float)(v24 * v11)) + (float)(v25 * 0.0));
  Mtx34_rotateY(&v16, &v28);
  Mtx34_rotateX(&v16, &v27);
  v12 = (_DWORD **)(a1 + 6304);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6304) + 60))(**(_DWORD **)(a1 + 6304), &v16);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v12 + 68))(**v12, a1 + 6616);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v14 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() && !a2 )
    j_ModelWrapper_updateAnims(*v12);
  sub_604218E0(*v12);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v12 + 52))(**v12);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v12 + 56))(**v12);
  (*(void (__fastcall **)(_DWORD, _DWORD, int))(*(_DWORD *)**v12 + 108))(**v12, 0, a1 + 6360);
  FIELD_U32(a1, 6408) = FIELD_U32(a1, 6372);
  FIELD_U32(a1, 6412) = FIELD_U32(a1, 6388);
  result = FIELD_U32(a1, 6404);
  FIELD_U32(a1, 6416) = result;
  return result;
}
