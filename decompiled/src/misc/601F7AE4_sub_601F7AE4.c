/* sub_601F7AE4
 * address: 0x601F7AE4   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F7AE4(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r2
  _BYTE v13[48]; // [sp+0h] [bp-80h] BYREF
  float32x2_t v14; // [sp+30h] [bp-50h] BYREF
  int v15; // [sp+38h] [bp-48h]
  int v16; // [sp+3Ch] [bp-44h]
  int v17; // [sp+40h] [bp-40h]
  int v18; // [sp+44h] [bp-3Ch]
  int v19; // [sp+48h] [bp-38h]
  int v20; // [sp+4Ch] [bp-34h]
  int v21; // [sp+50h] [bp-30h]
  int v22; // [sp+54h] [bp-2Ch]
  int v23; // [sp+58h] [bp-28h]
  int v24; // [sp+5Ch] [bp-24h]
  _DWORD v25[8]; // [sp+60h] [bp-20h] BYREF

  v2 = (StateMgr *)(a1 + 288);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 288));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C8BC8C + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60C8BCAC + 8))() )
    {
      j_ModelWrapper_updateAnims(FIELD_U32(a1, 304));
      if ( FIELD_U8(a1, 933) )
        ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 768));
    }
  }
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    v8 = FIELD_U32(a1, 180);
    v9 = FIELD_U32(a1, 184);
    v25[0] = FIELD_U32(a1, 176);
    v25[1] = v8;
    v25[2] = v9;
    v10 = FIELD_U32(a1, 80);
    v11 = FIELD_U32(a1, 84);
    v12 = FIELD_U32(a1, 88);
    v14.n64_u64[0] = 1065353216;
    v15 = 0;
    v17 = 0;
    v18 = 1065353216;
    v19 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 1065353216;
    v16 = v10;
    v20 = v11;
    v24 = v12;
    sub_60832C3C(&v14, v25);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 304) + 60))(**(_DWORD **)(a1 + 304), &v14);
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 304) + 68))(**(_DWORD **)(a1 + 304), a1 + 128);
    sub_60421880(FIELD_U32(a1, 304));
    result = FIELD_U8(a1, 933);
    if ( FIELD_U8(a1, 933) )
    {
      (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 304) + 108))(
        **(_DWORD **)(a1 + 304),
        FIELD_U32(a1, 924),
        v13);
      (*(void (__fastcall **)(_DWORD, _BYTE *))(***(_DWORD ***)(a1 + 768) + 60))(**(_DWORD **)(a1 + 768), v13);
      (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 768) + 68))(**(_DWORD **)(a1 + 768), a1 + 128);
      return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 768));
    }
  }
  return result;
}
