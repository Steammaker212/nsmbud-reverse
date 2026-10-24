/* sub_608F01B0
 * address: 0x608F01B0   size: 940   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608F01B0(int a1, _DWORD *a2)
{
  int v4; // r6
  _DWORD *v5; // r8
  int v6; // r5
  _DWORD *v7; // r4
  void (__fastcall *v8)(_DWORD *); // r1
  int v9; // r7
  int v10; // r1
  int v11; // r0
  unsigned int v12; // r4
  unsigned int v13; // r1
  _DWORD *v14; // r1
  int v15; // r4
  int v16; // r4
  int v17; // r4
  int v18; // r5
  int v19; // r5
  sead_ListNode *next; // r0
  sead_ListNode **p_next; // r1
  sead_ListNode *v22; // r4
  sead_ListNode *previous; // r0
  int v24; // r11
  sead_ListNode *v25; // r5
  sead_ListNode *v26; // r6
  sead_ListNode *v27; // r4
  _DWORD *v28; // r0
  sead_ListNode v30; // [sp+8h] [bp-48h] BYREF
  int v31; // [sp+10h] [bp-40h]
  _DWORD v32[5]; // [sp+14h] [bp-3Ch] BYREF
  int v33; // [sp+28h] [bp-28h]

  v4 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  v33 = 0;
  v32[4] = 0;
  TaskHeap_ref(a1, (int)v32, (int)a2);
  v5 = (_DWORD *)sub_608F0578(a1, a2, v32);
  v6 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v7 = v5 + 17;
    do
    {
      if ( *v7 )
        sead__SafeStringBase__operator_assign(*v7 + 16, (int)(v5 + 9));
      ++v7;
      --v6;
    }
    while ( v6 );
  }
  v8 = (void (__fastcall *)(_DWORD *))a2[31];
  if ( v8 )
    v8(v5);
  v9 = 1;
  v5[24] = 1;
  v10 = v32[v33];
  if ( v10 )
    v9 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v10);
  (*(void (__fastcall **)(_DWORD *))(*v5 + 40))(v5);
  if ( v9 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v9);
  v11 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v12 = 0;
    do
    {
      v13 = 0;
      if ( v11 > v12 )
        v13 = v12;
      v14 = &a2[5 * v13];
      if ( *((_BYTE *)v14 + 24) )
      {
        sub_608EF600(v5, v12, v14[5]);
        v11 = dword_60CCEEA4;
      }
      ++v12;
    }
    while ( (int)v12 < v11 );
  }
  sead__CriticalSection__lock(v4);
  if ( v5[24] != 2 )
  {
    v5[24] = 2;
    v15 = v5[16];
    if ( v15 )
    {
      v5[16] = 0;
      sead__ListNode__erase(v5 + 13);
      --FIELD_U32(v15, 8);
    }
  }
  sead__CriticalSection__unlock(v4);
  sead__CriticalSection__lock(v4);
  if ( v5[24] != 4 )
  {
    v5[24] = 4;
    v16 = v5[16];
    if ( v16 )
    {
      v5[16] = 0;
      sead__ListNode__erase(v5 + 13);
      --FIELD_U32(v16, 8);
    }
    sub_608F0A9C(a1, a1 + 76, v5);
    (*(void (__fastcall **)(_DWORD *))(*v5 + 44))(v5);
  }
  sead__CriticalSection__unlock(v4);
  v17 = a2[28];
  if ( v17 )
  {
    v31 = 0;
    v30.next = &v30;
    v30.previous = &v30;
    if ( FIELD_U8(v17, 56) )
    {
      v18 = FIELD_U32(v17, 28);
      if ( v18 )
      {
        FIELD_U32(v17, 28) = 0;
        sead__ListNode__erase((_DWORD *)(v17 + 16));
        --FIELD_U32(v18, 8);
      }
      FIELD_U8(v17, 56) = 0;
    }
    v19 = FIELD_U32(v17, 28);
    if ( v19 )
    {
      FIELD_U32(v17, 28) = 0;
      sead__ListNode__erase((_DWORD *)(v17 + 16));
      --FIELD_U32(v19, 8);
    }
    FIELD_U32(v17, 28) = &v30;
    sead__ListNode__insertFront(&v30, (sead_ListNode *)(v17 + 16));
    ++v31;
    FIELD_U8(v17, 56) = 1;
    next = v30.next;
    if ( v30.next != &v30 )
    {
      p_next = &v30.FIELD_U32(next, 0x4);
      do
      {
        v22 = *p_next;
        previous = FIELD_U32(next + (1) * 8, 0x0)[4].previous;
        if ( previous )
          ((void (__fastcall *)(sead_ListNode *, _DWORD *))FIELD_U32(previous, 0x0))(previous, v5);
        p_next = &FIELD_U32(v22, 0x4);
        next = v22;
      }
      while ( v22 != &v30 );
      next = v30.next;
    }
    v24 = v4;
    if ( next != &v30 )
    {
      v25 = next;
      do
      {
        v26 = FIELD_U32(next + (1) * 8, 0x0);
        v25 = FIELD_U32(v25, 0x4);
        if ( LOBYTE(FIELD_U32(v26 + (7) * 8, 0x0)) )
        {
          v27 = FIELD_U32(v26 + (3) * 8, 0x4);
          if ( v27 )
          {
            FIELD_U32(v26 + (3) * 8, 0x4) = 0;
            sead__ListNode__erase(&FIELD_U32(v26 + (2) * 8, 0x0));
            --FIELD_U32(v27 + (1) * 8, 0x0);
          }
          LOBYTE(FIELD_U32(v26 + (7) * 8, 0x0)) = 0;
        }
        next = v25;
      }
      while ( v25 != &v30 );
    }
    v4 = v24;
  }
  v28 = (_DWORD *)a2[27];
  if ( v28 )
    *v28 = v5;
  sead__CriticalSection__unlock(v4);
  return v5;
}
