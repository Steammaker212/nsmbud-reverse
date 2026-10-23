/* sub_601B04A4
 * address: 0x601B04A4   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B04A4(int a1)
{
  int result; // r0
  float v3; // s0
  float v4; // r0
  float v5; // r1
  StateBase *CurrentState; // r0
  int v7; // r5
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r6
  StateBase *v12; // r0
  int v13; // r5
  _BYTE v14[48]; // [sp+0h] [bp-78h] BYREF
  float32x2_t v15; // [sp+30h] [bp-48h] BYREF
  float v16; // [sp+38h] [bp-40h]
  float v17; // [sp+3Ch] [bp-3Ch]
  float v18; // [sp+40h] [bp-38h]
  float v19; // [sp+44h] [bp-34h]
  float v20; // [sp+48h] [bp-30h]
  float v21; // [sp+4Ch] [bp-2Ch]
  float v22; // [sp+50h] [bp-28h]
  float v23; // [sp+54h] [bp-24h]
  float v24; // [sp+58h] [bp-20h]
  float v25; // [sp+5Ch] [bp-1Ch]

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 372));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_F32(a1, 84);
    v4 = FIELD_F32(a1, 88);
    v5 = FIELD_F32(a1, 80);
    v15.n64_u64[0] = 1065353216;
    v16 = 0.0;
    v18 = 0.0;
    v19 = 1.0;
    v20 = 0.0;
    v22 = 0.0;
    v23 = 0.0;
    v24 = 1.0;
    v17 = v5;
    v21 = v3 + 15.0;
    v25 = v4;
    Mtx34_rotateY(&v15, (unsigned int *)(a1 + 180));
    Mtx34_rotateX(&v15, (unsigned int *)(a1 + 176));
    Mtx34_rotateZ(&v15, (unsigned int *)(a1 + 184));
    v17 = v17 + (float)((float)((float)(v15.n64_f32[0] * 0.0) - (float)(v15.n64_f32[1] * 15.0)) + (float)(v16 * 0.0));
    v21 = v21 + (float)((float)((float)(v18 * 0.0) - (float)(v19 * 15.0)) + (float)(v20 * 0.0));
    v25 = v25 + (float)((float)((float)(v22 * 0.0) - (float)(v23 * 15.0)) + (float)(v24 * 0.0));
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 372) + 60))(**(_DWORD **)(a1 + 372), &v15);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 372) + 68))(**(_DWORD **)(a1 + 372), a1 + 128);
    sub_60421880(FIELD_U32(a1, 372));
    (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 372) + 108))(
      **(_DWORD **)(a1 + 372),
      FIELD_U32(a1, 584),
      v14);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(***(_DWORD ***)(a1 + 376) + 60))(**(_DWORD **)(a1 + 376), v14);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 376) + 56))(**(_DWORD **)(a1 + 376));
    if ( FIELD_U32(a1, 352) == 3 && sub_60190968(dword_60C8996C) && sub_601916EC(dword_60C8996C) == 39 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v7 != (*(int (**)(void))(dword_60C8A80C + 8))() )
        return (int)sub_60177448((_DWORD *)dword_60C88E60, a1 + 324);
    }
    result = sub_60190968(dword_60C8996C);
    if ( !result )
    {
      v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      result = (*(int (**)(void))(dword_60C8A76C + 8))();
      if ( v9 != result )
      {
        v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
        result = (*(int (**)(void))(dword_60C8A86C + 8))();
        if ( v11 != result )
        {
          v12 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
          result = (*(int (**)(void))(dword_60C8A80C + 8))();
          if ( v13 != result )
            return (int)sub_60177448((_DWORD *)dword_60C88E60, a1 + 324);
        }
      }
    }
  }
  return result;
}
