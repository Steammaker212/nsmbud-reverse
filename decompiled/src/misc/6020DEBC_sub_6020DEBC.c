/* sub_6020DEBC
 * address: 0x6020DEBC   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020DEBC(int a1)
{
  int result; // r0
  unsigned int v3; // r1
  unsigned int v4; // r2
  int *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r0
  StateBase *CurrentState; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r6
  StateBase *v13; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r5
  unsigned int v17; // [sp+0h] [bp-50h] BYREF
  unsigned int v18; // [sp+4h] [bp-4Ch] BYREF
  unsigned int v19; // [sp+8h] [bp-48h] BYREF
  float32x2_t v20; // [sp+10h] [bp-40h] BYREF
  int v21; // [sp+18h] [bp-38h]
  int v22; // [sp+1Ch] [bp-34h]
  int v23; // [sp+20h] [bp-30h]
  int v24; // [sp+24h] [bp-2Ch]
  int v25; // [sp+28h] [bp-28h]
  int v26; // [sp+2Ch] [bp-24h]
  int v27; // [sp+30h] [bp-20h]
  int v28; // [sp+34h] [bp-1Ch]
  int v29; // [sp+38h] [bp-18h]
  int v30; // [sp+3Ch] [bp-14h]

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 372));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_U32(a1, 180);
    v4 = FIELD_U32(a1, 184);
    v17 = FIELD_U32(a1, 176);
    v18 = v3;
    v19 = v4;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 116))(a1) == 1 )
    {
      ((void (__fastcall *)(int))loc_6020E0F4)(a1);
      v18 = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 180);
      v5 = (int *)(a1 + 404);
    }
    else
    {
      v5 = (int *)(a1 + 80);
    }
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v20.n64_u64[0] = 1065353216;
    v21 = 0;
    v23 = 0;
    v24 = 1065353216;
    v25 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 1065353216;
    v22 = v6;
    v26 = v7;
    v30 = v8;
    Mtx34_rotateY(&v20, &v18);
    Mtx34_rotateX(&v20, &v17);
    Mtx34_rotateZ(&v20, &v19);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 372) + 60))(**(_DWORD **)(a1 + 372), &v20);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 372) + 68))(**(_DWORD **)(a1 + 372), a1 + 128);
    sub_60421880(FIELD_U32(a1, 372));
    result = sub_60190968(dword_60C8996C);
    if ( !result )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C8CD0C + 8))();
      if ( v10 != result )
      {
        v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
        result = (*(int (**)(void))(dword_60C8CD2C + 8))();
        if ( v12 != result )
        {
          v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
          v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
          result = (*(int (**)(void))(dword_60C8CD4C + 8))();
          if ( v14 != result )
          {
            v15 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
            v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
            result = (*(int (**)(void))(dword_60C8CD6C + 8))();
            if ( v16 != result )
              return (int)sub_60177448((_DWORD *)dword_60C88E60, a1 + 324);
          }
        }
      }
    }
  }
  return result;
}
