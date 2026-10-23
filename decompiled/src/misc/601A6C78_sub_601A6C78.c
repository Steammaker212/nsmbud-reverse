/* sub_601A6C78
 * address: 0x601A6C78   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A6C78(int a1)
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
  int v14; // r5
  unsigned int v15; // [sp+0h] [bp-50h] BYREF
  unsigned int v16; // [sp+4h] [bp-4Ch] BYREF
  unsigned int v17; // [sp+8h] [bp-48h] BYREF
  float32x2_t v18; // [sp+10h] [bp-40h] BYREF
  int v19; // [sp+18h] [bp-38h]
  int v20; // [sp+1Ch] [bp-34h]
  int v21; // [sp+20h] [bp-30h]
  int v22; // [sp+24h] [bp-2Ch]
  int v23; // [sp+28h] [bp-28h]
  int v24; // [sp+2Ch] [bp-24h]
  int v25; // [sp+30h] [bp-20h]
  int v26; // [sp+34h] [bp-1Ch]
  int v27; // [sp+38h] [bp-18h]
  int v28; // [sp+3Ch] [bp-14h]

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 408));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v3 = FIELD_U32(a1, 180);
    v4 = FIELD_U32(a1, 184);
    v15 = FIELD_U32(a1, 176);
    v16 = v3;
    v17 = v4;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 116))(a1) == 1 )
    {
      ((void (__fastcall *)(int))loc_601A6E78)(a1);
      v16 = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 180);
      v5 = (int *)(a1 + 416);
    }
    else
    {
      v5 = (int *)(a1 + 80);
    }
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v18.n64_u64[0] = 1065353216;
    v19 = 0;
    v21 = 0;
    v22 = 1065353216;
    v23 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 1065353216;
    v20 = v6;
    v24 = v7;
    v28 = v8;
    Mtx34_rotateY(&v18, &v16);
    Mtx34_rotateX(&v18, &v15);
    Mtx34_rotateZ(&v18, &v17);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 408) + 60))(**(_DWORD **)(a1 + 408), &v18);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 408) + 68))(**(_DWORD **)(a1 + 408), a1 + 128);
    sub_60421880(FIELD_U32(a1, 408));
    result = sub_60190968(dword_60C8996C);
    if ( !result )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*((int (**)(void))stru_60C8A1CC.vtable + 2))();
      if ( v10 != result )
      {
        v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
        result = (*((int (**)(void))stru_60C8A1EC.vtable + 2))();
        if ( v12 != result )
        {
          v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 284));
          v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
          result = (*(int (**)(void))(dword_60C8A20C + 8))();
          if ( v14 != result )
            return (int)sub_60177448((_DWORD *)dword_60C88E60, a1 + 324);
        }
      }
    }
  }
  return result;
}
