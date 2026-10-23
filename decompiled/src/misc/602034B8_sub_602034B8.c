/* sub_602034B8
 * address: 0x602034B8   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602034B8(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r2
  StateBase *CurrentState; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r5
  float32x2_t v12; // [sp+0h] [bp-40h] BYREF
  int v13; // [sp+8h] [bp-38h]
  int v14; // [sp+Ch] [bp-34h]
  int v15; // [sp+10h] [bp-30h]
  int v16; // [sp+14h] [bp-2Ch]
  int v17; // [sp+18h] [bp-28h]
  int v18; // [sp+1Ch] [bp-24h]
  int v19; // [sp+20h] [bp-20h]
  int v20; // [sp+24h] [bp-1Ch]
  int v21; // [sp+28h] [bp-18h]
  int v22; // [sp+2Ch] [bp-14h]

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 372));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_U32(a1, 80);
    v4 = FIELD_U32(a1, 84);
    v5 = FIELD_U32(a1, 88);
    v12.n64_u64[0] = 1065353216;
    v13 = 0;
    v15 = 0;
    v16 = 1065353216;
    v17 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 1065353216;
    v14 = v3;
    v18 = v4;
    v22 = v5;
    Mtx34_rotateY(&v12, (unsigned int *)(a1 + 180));
    Mtx34_rotateX(&v12, (unsigned int *)(a1 + 176));
    Mtx34_rotateZ(&v12, (unsigned int *)(a1 + 184));
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 372) + 60))(**(_DWORD **)(a1 + 372), &v12);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 372) + 68))(**(_DWORD **)(a1 + 372), a1 + 128);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 372));
    result = sub_60190968(dword_60C8996C);
    if ( !result )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C8C478 + 8))();
      if ( v7 != result )
      {
        v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
        result = (*(int (**)(void))(dword_60C8C598 + 8))();
        if ( v9 != result )
        {
          v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
          result = (*(int (**)(void))(dword_60C8C538 + 8))();
          if ( v11 != result )
            return (int)sub_60177448((_DWORD *)dword_60C88E60, a1 + 324);
        }
      }
    }
  }
  return result;
}
