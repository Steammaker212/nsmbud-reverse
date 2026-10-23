/* sub_602096EC
 * address: 0x602096EC   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602096EC(int a1)
{
  __int64 v1; // d8
  _DWORD *v2; // r1
  _DWORD *v3; // r5
  int result; // r0
  float v6; // s0
  float v7; // r0
  float v8; // r1
  StateBase *CurrentState; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r5
  float32x2_t v13; // [sp+0h] [bp-48h] BYREF
  float v14; // [sp+8h] [bp-40h]
  float v15; // [sp+Ch] [bp-3Ch]
  float v16; // [sp+10h] [bp-38h]
  float v17; // [sp+14h] [bp-34h]
  float v18; // [sp+18h] [bp-30h]
  float v19; // [sp+1Ch] [bp-2Ch]
  float v20; // [sp+20h] [bp-28h]
  float v21; // [sp+24h] [bp-24h]
  float v22; // [sp+28h] [bp-20h]
  float v23; // [sp+2Ch] [bp-1Ch]
  __int64 v24; // [sp+30h] [bp-18h]

  v2 = *(_DWORD **)(a1 + 408);
  v24 = v1;
  v3 = v2;
  j_ModelWrapper_updateAnims(v2);
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v6 = FIELD_F32(a1, 84);
    v7 = FIELD_F32(a1, 88);
    v8 = FIELD_F32(a1, 80);
    v13.n64_u64[0] = 1065353216;
    v14 = 0.0;
    v16 = 0.0;
    v17 = 1.0;
    v18 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
    v22 = 1.0;
    v15 = v8;
    v19 = v6 + 40.0;
    v23 = v7;
    Mtx34_rotateY(&v13, (unsigned int *)(a1 + 180));
    Mtx34_rotateX(&v13, (unsigned int *)(a1 + 176));
    Mtx34_rotateZ(&v13, (unsigned int *)(a1 + 184));
    v15 = v15 + (float)((float)((float)(v13.n64_f32[0] * 0.0) - (float)(v13.n64_f32[1] * 40.0)) + (float)(v14 * 0.0));
    v19 = v19 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * 40.0)) + (float)(v18 * 0.0));
    v23 = v23 + (float)((float)((float)(v20 * 0.0) - (float)(v21 * 40.0)) + (float)(v22 * 0.0));
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v3 + 60))(*v3, &v13);
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v3 + 68))(*v3, a1 + 128);
    sub_60421880(v3);
    result = sub_60190968(dword_60C8996C);
    if ( !result )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C8C9BC + 8))();
      if ( v10 != result )
      {
        v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
        result = (*(int (**)(void))(stru_60C8C950 + 8))();
        if ( v12 != result )
          return (int)sub_60177448((_DWORD *)dword_60C88E60, a1 + 324);
      }
    }
  }
  return result;
}
