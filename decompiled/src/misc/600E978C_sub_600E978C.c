/* sub_600E978C
 * address: 0x600E978C   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E978C(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  StateBase *CurrentState; // r0
  int v6; // r5
  int v7; // r5
  StateBase *v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r0
  StateBase *v13; // r0
  int v14; // r5
  int v15; // r5
  StateBase *v16; // r0
  int v17; // r6

  v2 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 1708))(v2);
  v3 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 1688))(v3);
  v4 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    v7 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
    v8 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    if ( v9 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      sub_602F3750(v7 + 6152);
  }
  v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 1708))(v10);
  v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 1688))(v11);
  v12 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
  v13 = StateMgr__getCurrentState((StateMgr *)(v12 + 6084));
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
  if ( v14 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    v15 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
    v16 = StateMgr__getCurrentState((StateMgr *)(v15 + 6084));
    v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
    if ( v17 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      sub_602F3750(v15 + 6152);
  }
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 7092) = 1;
  if ( **(_BYTE **)(FIELD_U32(a1, 7108) + 4) )
    sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U8(a1, 8232) = 0;
  FIELD_U32(a1, 7172) = 0;
  return 7172;
}
