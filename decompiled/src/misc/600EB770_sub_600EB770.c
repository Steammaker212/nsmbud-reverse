/* sub_600EB770
 * address: 0x600EB770   size: 924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EB770(int a1)
{
  _BYTE *v2; // r5
  float v3; // s16
  int result; // r0
  unsigned int v5; // r10
  unsigned __int8 *v6; // r0
  unsigned int v7; // r6
  unsigned int v8; // r9
  int v9; // r11
  unsigned __int8 *v10; // r0
  int v11; // r0
  unsigned int v12; // r7
  StateBase *CurrentState; // r0
  int v14; // r5
  unsigned int v15; // r6
  int v16; // r0
  _BYTE *v17; // r5
  StateBase *v18; // r0
  int v19; // r6
  int v20; // r0
  _BYTE *v21; // r4
  StateBase *v22; // r0
  int v23; // r5
  unsigned __int8 v24; // [sp+4h] [bp-34h] BYREF
  unsigned __int8 v25; // [sp+5h] [bp-33h]
  unsigned __int8 v26; // [sp+6h] [bp-32h]

  v2 = (_BYTE *)(a1 + 8132);
  if ( !FIELD_U8(a1, 8132)
    || (v3 = *(float *)(FIELD_U32(a1, 56) + 116),
        FIELD_F32(a1, 116) = v3
                             + (float)((float)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1680))(a1) + 1) * -300.0),
        result = (unsigned __int8)*v2,
        !*v2) )
  {
    v5 = 0;
    v24 = 0;
    v25 = 1;
    v26 = 2;
    v6 = (unsigned __int8 *)((unsigned int)&v24 | (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31));
    v26 = *v6;
    *v6 = 2;
    v7 = v25;
    sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    v8 = v24;
    v25 = v24;
    sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    v24 = v7;
    if ( FIELD_U8(a1, 8184) == v7
      && *(unsigned __int8 *)((*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0) + 8184) == v8 )
    {
      v9 = *(unsigned __int8 *)((*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1) + 8184);
      if ( v9 == v26 )
      {
        v10 = (unsigned __int8 *)((unsigned int)&v24 | (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31));
        v26 = *v10;
        *v10 = v9;
        v7 = v24;
        v8 = v25;
      }
    }
    FIELD_U8(a1, 8184) = v7;
    *(_BYTE *)((*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0) + 8184) = v8;
    if ( v7 < 3 )
      v5 = v7;
    v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
    v12 = v26;
    FIELD_U8(v11, 8184) = v26;
    FIELD_U32(a1, 8204) = *(_DWORD *)(a1 + 4 * v5 + 8172);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v14 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      FIELD_U8(a1, 8120) = 3;
    }
    else if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1700))(a1) )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C850CC);
    }
    v15 = 0;
    v16 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 1676))(a1, 0);
    v17 = (_BYTE *)v16;
    if ( v8 < 3 )
      v15 = v8;
    FIELD_U32(v16, 8204) = *(_DWORD *)(v16 + 4 * v15 + 8172);
    v18 = StateMgr__getCurrentState((StateMgr *)(v16 + 6084));
    v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
    if ( v19 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v17[8120] = 3;
    }
    else if ( !(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v17 + 1700))(v17) )
    {
      (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v17 + 192))(v17, &dword_60C850CC);
    }
    v20 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1676))(a1, 1);
    v21 = (_BYTE *)v20;
    if ( v12 >= 3 )
      v12 = 0;
    FIELD_U32(v20, 8204) = *(_DWORD *)(v20 + 4 * v12 + 8172);
    v22 = StateMgr__getCurrentState((StateMgr *)(v20 + 6084));
    v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v22, 0x0) + 2))(v22);
    if ( v23 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v21[8120] = 3;
      return 8120;
    }
    else
    {
      result = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v21 + 1700))(v21);
      if ( !result )
        return (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v21 + 192))(v21, &dword_60C850CC);
    }
  }
  return result;
}
