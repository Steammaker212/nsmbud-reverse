/* sead__HeapMgr__findContainHeap_const
 * address: 0x608FA8C4   size: 532   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__HeapMgr__findContainHeap_const(int a1, int a2)
{
  int TlsValue; // r0
  _DWORD *v4; // r6
  unsigned int *v5; // r7
  unsigned int v6; // r5
  _DWORD *v7; // r9
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r1
  bool v11; // zf
  int v12; // r8
  bool v13; // zf
  int v14; // r0
  int *v15; // r6
  int v16; // r4
  int v17; // t1
  int *v18; // r6
  int v19; // r4
  int v20; // t1
  bool v22; // zf
  int v23; // r0

  if ( sead__ThreadMgr__sInstance && (TlsValue = nn__os__GetTlsValue(*(_DWORD *)(sead__ThreadMgr__sInstance + 72))) != 0 )
  {
    v4 = *(_DWORD **)(TlsValue + 100);
    v5 = (unsigned int *)(TlsValue + 104);
    do
      v6 = __ldrex(v5);
    while ( __strex(v6 | 1, v5) );
    v7 = 0;
    v8 = 1;
    if ( v6 )
    {
      if ( !FIELD_U32(v6, 48) )
      {
        v9 = (*(int (__fastcall **)(unsigned int, int))(*(_DWORD *)v6 + 68))(v6, a2);
        v11 = v9 == 0;
        v7 = (_DWORD *)v6;
        v8 = v9 ^ 1;
        if ( !v11 )
          v7 = 0;
      }
    }
    do
      v10 = __ldrex(v5);
    while ( __strex(v10 & 0xFFFFFFFE, v5) );
    if ( v8 != 1 )
      return (_DWORD *)v6;
    v11 = v4 == 0;
    if ( v4 )
      v11 = v4 == v7;
    if ( v11 || v4[12] )
    {
      v12 = (int)v4;
    }
    else
    {
      v12 = 0;
      if ( (*(int (__fastcall **)(_DWORD *, int))(*v4 + 68))(v4, a2) == 1 )
      {
        *v5 = (unsigned int)v4;
        return v4;
      }
    }
    sead__CriticalSection__lock((int)&unk_60CCEEDC);
    v6 = *v5;
    v13 = *v5 == 0;
    if ( *v5 )
      v13 = v6 == (_DWORD)v7;
    if ( !v13 )
    {
      v14 = sub_608F9A44(*v5, a2);
      if ( v14 )
      {
        if ( v14 != v6 )
        {
          *v5 = v14;
          v6 = v14;
        }
        goto LABEL_45;
      }
      v7 = (_DWORD *)v6;
    }
    v22 = v12 == 0;
    if ( v12 )
      v22 = v12 == (_DWORD)v7;
    if ( !v22 )
    {
      v23 = sub_608F9A44(v12, a2);
      v6 = v23;
      if ( v23 )
      {
        *v5 = v23;
        goto LABEL_45;
      }
    }
  }
  else
  {
    sead__CriticalSection__lock((int)&unk_60CCEEDC);
    v5 = 0;
  }
  if ( dword_60CCEEA4 )
  {
    v15 = (int *)dword_60CCEEAC;
    v16 = 4 * dword_60CCEEA4;
    do
    {
      v17 = *v15++;
      v6 = sub_608F9A44(v17, a2);
      if ( v6 )
        goto LABEL_33;
      v16 -= 4;
    }
    while ( v16 );
  }
  if ( dword_60CCEEC0 )
  {
    v18 = (int *)dword_60CCEEC8;
    v19 = 4 * dword_60CCEEC0;
    while ( 1 )
    {
      v20 = *v18++;
      v6 = sub_608F9A44(v20, a2);
      if ( v6 )
        break;
      v19 -= 4;
      if ( !v19 )
      {
        v6 = 0;
        goto LABEL_45;
      }
    }
LABEL_33:
    if ( v5 )
      *v5 = v6;
    goto LABEL_45;
  }
  v6 = 0;
LABEL_45:
  sead__CriticalSection__unlock((int)&unk_60CCEEDC);
  return (_DWORD *)v6;
}
