/* sub_600EC430
 * address: 0x600EC430   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EC430(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  StateBase *CurrentState; // r0
  int v7; // r5
  int v8; // r5
  StateBase *v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r0
  StateBase *v14; // r0
  int v15; // r5
  int v16; // r5
  StateBase *v17; // r0
  int v18; // r6
  int v19; // r0
  int v20; // r1
  unsigned int v21; // r2
  int v22; // r0
  int *v23; // r0
  int v24; // r0
  _DWORD *v25; // r1
  int v26; // r0
  bool v27; // zf
  int v28; // r0
  bool v29; // zf
  int v30; // r0
  bool v31; // zf
  int v32; // r0
  bool v33; // zf

  KoopalingBase__vf36C((int *)a1);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1);
  if ( result == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1696))(a1);
    v3 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 1708))(v3);
    v4 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 1688))(v4);
    *(_BYTE *)((*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0) + 8344) = 1;
    v5 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v8 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
      v9 = StateMgr__getCurrentState((StateMgr *)(v8 + 6084));
      v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
      if ( v10 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        sub_602F3750(v8 + 6152);
    }
    v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 1708))(v11);
    v12 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
    (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 1688))(v12);
    *(_BYTE *)((*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1) + 8344) = 1;
    v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
    v14 = StateMgr__getCurrentState((StateMgr *)(v13 + 6084));
    v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
    if ( v15 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v16 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
      v17 = StateMgr__getCurrentState((StateMgr *)(v16 + 6084));
      v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
      if ( v18 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        sub_602F3750(v16 + 6152);
    }
    v20 = a1 + 7096;
    v19 = FIELD_U32(a1, 7096);
    v21 = FIELD_U32(v19, 24);
    v22 = FIELD_U32(v19, 28);
    if ( v21 > 1 )
      v22 += 4;
    *(_DWORD *)(*(_DWORD *)v22 + 24) = 0;
    v23 = *(int **)(*(_DWORD *)v20 + 28);
    if ( *(_DWORD *)(*(_DWORD *)v20 + 24) > 1u )
      ++v23;
    v24 = *v23;
    FIELD_U32(v24, 20) = 0;
    FIELD_U32(v24, 28) |= 2u;
    v25 = (_DWORD *)PlayerMgr_instance;
    v26 = FIELD_U32(PlayerMgr_instance, 32);
    v27 = v26 == 0;
    if ( v26 )
      v27 = FIELD_U8(a1, 8200) == 0;
    if ( !v27 )
    {
      sub_607A1FFC(v26);
      v25 = (_DWORD *)PlayerMgr_instance;
    }
    v28 = v25[9];
    v29 = v28 == 0;
    if ( v28 )
      v29 = FIELD_U8(a1, 8201) == 0;
    if ( !v29 )
    {
      sub_607A1FFC(v28);
      v25 = (_DWORD *)PlayerMgr_instance;
    }
    v30 = v25[10];
    v31 = v30 == 0;
    if ( v30 )
      v31 = FIELD_U8(a1, 8202) == 0;
    if ( !v31 )
    {
      sub_607A1FFC(v30);
      v25 = (_DWORD *)PlayerMgr_instance;
    }
    v32 = v25[11];
    v33 = v32 == 0;
    if ( v32 )
      v33 = FIELD_U8(a1, 8203) == 0;
    if ( !v33 )
      sub_607A1FFC(v32);
    return KoopalingBase__vf36C((int *)a1);
  }
  return result;
}
