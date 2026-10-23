/* sub_6020C04C
 * address: 0x6020C04C   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020C04C(int a1)
{
  int result; // r0
  float v3; // s0
  float v4; // r0
  float v5; // r1
  StateBase *CurrentState; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r5
  float32x2_t v10; // [sp+0h] [bp-48h] BYREF
  float v11; // [sp+8h] [bp-40h]
  float v12; // [sp+Ch] [bp-3Ch]
  float v13; // [sp+10h] [bp-38h]
  float v14; // [sp+14h] [bp-34h]
  float v15; // [sp+18h] [bp-30h]
  float v16; // [sp+1Ch] [bp-2Ch]
  float v17; // [sp+20h] [bp-28h]
  float v18; // [sp+24h] [bp-24h]
  float v19; // [sp+28h] [bp-20h]
  float v20; // [sp+2Ch] [bp-1Ch]

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 408));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_F32(a1, 84);
    v4 = FIELD_F32(a1, 88);
    v5 = FIELD_F32(a1, 80);
    v10.n64_u64[0] = 1065353216;
    v11 = 0.0;
    v13 = 0.0;
    v14 = 1.0;
    v15 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
    v19 = 1.0;
    v12 = v5;
    v16 = v3 + 40.0;
    v20 = v4;
    Mtx34_rotateY(&v10, (unsigned int *)(a1 + 180));
    Mtx34_rotateX(&v10, (unsigned int *)(a1 + 176));
    Mtx34_rotateZ(&v10, (unsigned int *)(a1 + 184));
    v12 = v12 + (float)((float)((float)(v10.n64_f32[0] * 0.0) - (float)(v10.n64_f32[1] * 40.0)) + (float)(v11 * 0.0));
    v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * 40.0)) + (float)(v15 * 0.0));
    v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * 40.0)) + (float)(v19 * 0.0));
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 408) + 60))(**(_DWORD **)(a1 + 408), &v10);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 408) + 68))(**(_DWORD **)(a1 + 408), a1 + 128);
    sub_60421880(FIELD_U32(a1, 408));
    result = sub_60190968(dword_60C8996C);
    if ( !result )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C8CBB8 + 8))();
      if ( v7 != result )
      {
        v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
        result = (*(int (**)(void))(dword_60C8CB98 + 8))();
        if ( v9 != result )
          return (int)sub_60177448((_DWORD *)dword_60C88E60, a1 + 324);
      }
    }
  }
  return result;
}
