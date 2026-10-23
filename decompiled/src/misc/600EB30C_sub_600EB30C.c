/* sub_600EB30C
 * address: 0x600EB30C   size: 1076   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EB30C(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  _BYTE *v7; // r1
  int v8; // r0
  int v9; // r5
  int v10; // r0
  StateBase *CurrentState; // r0
  int v12; // r5
  StateBase *v13; // r0
  int v14; // r5
  int v15; // r5
  StateBase *v16; // r0
  int v17; // r6
  int v18; // r5
  StateBase *v19; // r0
  int v20; // r6
  int v21; // r4
  StateBase *v22; // r0
  int v23; // r5
  StateBase *v24; // r0
  int v25; // r5

  v3 = (_BYTE *)(a1 + 8132);
  result = FIELD_U8(a1, 8132);
  if ( result )
    return result;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
  {
    v4 = a1;
    if ( *v3 )
      v4 = FIELD_U32(a1, 56);
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 720))(v4) )
    {
      v5 = a1;
      if ( *v3 )
        v5 = FIELD_U32(a1, 56);
      v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 724))(v5);
      v7 = (_BYTE *)(a1 + 8232);
      if ( v6 != 1 || !*v7 )
      {
        *v7 = 1;
        FIELD_U32(a1, 8212) = 0x40000000;
        return sub_600EB770(a1);
      }
    }
  }
  v8 = a1;
  if ( *v3 )
    v8 = FIELD_U32(a1, 56);
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 724))(v8);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1700))(a1);
  if ( v9 )
  {
    if ( !v10 )
    {
      FIELD_U32(a1, 0x2000) = 33;
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v12 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        FIELD_U8(a1, 8120) = 2;
      else
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C851F4);
    }
    v15 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v15 + 1700))(v15) )
    {
      FIELD_U32(v15, 0x2000) = 23;
      v16 = StateMgr__getCurrentState((StateMgr *)(v15 + 6084));
      v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
      if ( v17 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        FIELD_U8(v15, 8120) = 2;
      else
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v15 + 192))(v15, &dword_60C851F4);
    }
    v21 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 1700))(v21);
    if ( !result )
    {
      FIELD_U32(v21, 0x2000) = 13;
      v22 = StateMgr__getCurrentState((StateMgr *)(v21 + 6084));
      v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
      if ( v23 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v21 + 192))(v21, &dword_60C851F4);
      goto LABEL_36;
    }
  }
  else
  {
    if ( !v10 )
    {
      FIELD_U32(a1, 0x2000) = 93;
      v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
      if ( v14 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        FIELD_U8(a1, 8120) = 2;
      else
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C851F4);
    }
    v18 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v18 + 1700))(v18) )
    {
      FIELD_U32(v18, 0x2000) = 48;
      v19 = StateMgr__getCurrentState((StateMgr *)(v18 + 6084));
      v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
      if ( v20 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        FIELD_U8(v18, 8120) = 2;
      else
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v18 + 192))(v18, &dword_60C851F4);
    }
    v21 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 1700))(v21);
    if ( !result )
    {
      FIELD_U32(v21, 0x2000) = 3;
      v24 = StateMgr__getCurrentState((StateMgr *)(v21 + 6084));
      v25 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v24, 0x0) + 2))(v24);
      if ( v25 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v21 + 192))(v21, &dword_60C851F4);
LABEL_36:
      FIELD_U8(v21, 8120) = 2;
      return 8120;
    }
  }
  return result;
}
