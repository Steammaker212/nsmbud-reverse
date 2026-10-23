/* sub_608EFDC8
 * address: 0x608EFDC8   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EFDC8(int a1)
{
  int v2; // r9
  int v3; // r0
  _DWORD *v4; // r5
  nn__os *v5; // r0
  int v6; // r1
  int v7; // r8
  int v8; // r0
  _DWORD *v9; // r6
  _DWORD *v10; // r1
  bool v11; // zf
  int v12; // r2
  int v13; // r0
  unsigned int v14; // r7
  unsigned int v15; // r1
  _DWORD *v16; // r1
  int v17; // r4

  v2 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  v3 = FIELD_U32(a1, 56);
  if ( v3 == a1 + 52 )
  {
    v5 = (nn__os *)sead__CriticalSection__unlock(v2);
  }
  else
  {
    v4 = *(_DWORD **)(v3 + 8);
    v5 = (nn__os *)sead__CriticalSection__unlock(v2);
    if ( v4 )
    {
      v6 = v4[v4[22] + 17];
      if ( v6 )
        v7 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v6);
      else
        v7 = 1;
      (*(void (__fastcall **)(_DWORD *))(*v4 + 40))(v4);
      v8 = FIELD_U32(a1, 148);
      v9 = 0;
      if ( FIELD_S32(v8, 8) >= 1 )
      {
        v10 = *(_DWORD **)(v8 + 4);
        v11 = v10 == 0;
        if ( v10 )
        {
          v10 -= 37;
          v11 = v10 == 0;
        }
        if ( !v11 )
        {
          while ( (_DWORD *)*v10 != v4 )
          {
            v12 = v10[38];
            v10 = (_DWORD *)(v12 - 148);
            if ( v12 == v8 )
              v10 = 0;
            if ( !v10 )
              goto LABEL_18;
          }
          v9 = v10;
        }
      }
LABEL_18:
      v13 = dword_60CCEEA4;
      if ( dword_60CCEEA4 >= 1 )
      {
        v14 = 0;
        do
        {
          v15 = 0;
          if ( v13 > v14 )
            v15 = v14;
          v16 = &v9[5 * v15];
          if ( *((_BYTE *)v16 + 28) )
          {
            sub_608EF600(v4, v14, v16[6]);
            v13 = dword_60CCEEA4;
          }
          ++v14;
        }
        while ( (int)v14 < v13 );
      }
      sead__CriticalSection__lock(v2);
      if ( v4[24] != 2 )
      {
        v4[24] = 2;
        v17 = v4[16];
        if ( v17 )
        {
          v4[16] = 0;
          sead__ListNode__erase(v4 + 13);
          --FIELD_U32(v17, 8);
        }
      }
      v5 = (nn__os *)sead__CriticalSection__unlock(v2);
      if ( v7 != 1 )
        v5 = (nn__os *)sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v7);
    }
  }
  return nn__os__YieldThread__thunk(v5);
}
