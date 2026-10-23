/* sead__ExpHeap__tryCreate
 * address: 0x608F5D68   size: 732   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__ExpHeap__tryCreate(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  _DWORD *CurrentHeap_const; // r4
  int v10; // r6
  unsigned int v11; // r6
  int v12; // r5
  unsigned int v13; // r0
  int v14; // r9
  int v15; // r7
  unsigned int v16; // r6
  int v17; // r6
  int v18; // r6
  _DWORD *v19; // r0
  unsigned int v21; // [sp+0h] [bp-30h]

  CurrentHeap_const = a3;
  if ( !a3 )
  {
    CurrentHeap_const = (_DWORD *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    if ( !CurrentHeap_const )
      return 0;
  }
  if ( a1 )
    v10 = a1 + 3;
  else
    v10 = (*(int (__fastcall **)(_DWORD *, int))(*CurrentHeap_const + 64))(CurrentHeap_const, a4);
  v11 = v10 & 0xFFFFFFFC;
  v12 = 0;
  if ( v11 >= 0xB1 )
  {
    v13 = abs32(a4);
    if ( ((v13 - 1) & v13) == 0 )
    {
      v14 = a5;
      v15 = (*(int (__fastcall **)(_DWORD *, unsigned int, int))(*CurrentHeap_const + 24))(
              CurrentHeap_const,
              v11,
              a5 * a4);
      if ( v15 )
      {
        if ( CurrentHeap_const[20] == -1 )
          v14 = -a5;
        if ( v14 == 1 )
        {
          sead__Heap__ctor(v15, a2, CurrentHeap_const, v15, v11, 1, a6);
          *(_DWORD *)v15 = off_60C5C8B8;
          FIELD_U32(v15, 24) = &off_60C5C934;
          FIELD_U8(v15, 124) = 0;
          FIELD_U8(v15, 125) = 0;
          FIELD_U32(v15, 128) = v15 + 128;
          FIELD_U32(v15, 132) = v15 + 128;
          FIELD_U32(v15, 136) = 0;
          FIELD_U32(v15, 140) = -1;
          FIELD_U32(v15, 144) = v15 + 144;
          FIELD_U32(v15, 148) = v15 + 144;
          FIELD_U32(v15, 152) = 0;
          FIELD_U32(v15, 156) = -1;
          if ( (FIELD_U8(v15, 120) & 1) != 0 )
          {
            sead__CriticalSection__lock(v15 + 84);
            FIELD_U32(v15, 140) = 0;
            FIELD_U32(v15, 156) = 0;
            sead__CriticalSection__unlock(v15 + 84);
          }
          else
          {
            FIELD_U32(v15, 140) = 0;
            FIELD_U32(v15, 156) = 0;
          }
          v12 = v15;
        }
        else
        {
          v21 = v11;
          v16 = v11 + v15;
          v12 = v16 - 160;
          sead__Heap__ctor(v16 - 160, a2, CurrentHeap_const, v15, v21, v14, a6);
          *(_DWORD *)(v16 - 160) = off_60C5C8B8;
          *(_DWORD *)(v16 - 136) = &off_60C5C934;
          *(_BYTE *)(v16 - 36) = 0;
          *(_BYTE *)(v16 - 35) = 0;
          *(_DWORD *)(v16 - 32) = v16 - 32;
          *(_DWORD *)(v16 - 28) = v16 - 32;
          *(_DWORD *)(v16 - 24) = 0;
          *(_DWORD *)(v16 - 20) = -1;
          *(_DWORD *)(v16 - 16) = v16 - 16;
          *(_DWORD *)(v16 - 12) = v16 - 16;
          *(_DWORD *)(v16 - 8) = 0;
          *(_DWORD *)(v16 - 4) = -1;
          if ( (*(_BYTE *)(v16 - 40) & 1) != 0 )
          {
            v17 = v16 - 76;
            sead__CriticalSection__lock(v17);
            FIELD_U32(v12, 140) = 0;
            FIELD_U32(v12, 156) = 0;
            sead__CriticalSection__unlock(v17);
          }
          else
          {
            *(_DWORD *)(v16 - 20) = 0;
            *(_DWORD *)(v16 - 4) = 0;
          }
        }
        v18 = 0;
        if ( (FIELD_U8(v12, 120) & 1) != 0 )
        {
          v18 = v12 + 84;
          sead__CriticalSection__lock(v12 + 84);
        }
        if ( FIELD_U32(v12, 80) == 1 )
        {
          FIELD_U32(v12, 160) = 0;
          v19 = (_DWORD *)(v12 + 160);
        }
        else
        {
          v19 = *(_DWORD **)(v12 + 28);
          *v19 = 0;
        }
        v19[1] = 0;
        v19[2] = 0;
        v19[3] = 0;
        v19[3] = FIELD_U32(v12, 32) - 176;
        *((_WORD *)v19 + 4) = -1;
        sead__ListNode__insertFront(
          (sead_ListNode *)(v12 + 128),
          (sead_ListNode *)((char *)v19 + FIELD_U32(v12, 140)));
        ++FIELD_U32(v12, 136);
        if ( v18 )
          sead__CriticalSection__unlock(v18);
        (*(void (__fastcall **)(_DWORD *, int))(*CurrentHeap_const + 104))(CurrentHeap_const, v12);
      }
    }
  }
  return v12;
}
