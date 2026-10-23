/* sub_6041AFF8
 * address: 0x6041AFF8   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041AFF8(_DWORD *a1, _DWORD *a2, int CurrentHeap_const, int a4)
{
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r1
  nn__mii__CharInfoAccessor *v12; // r0
  int FavoriteColor_const; // r0
  int *FavoriteColor; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r6
  int v21; // r5
  int v23; // r0
  _BYTE v24[456]; // [sp+0h] [bp-1C8h] BYREF

  v8 = a1[6];
  v9 = v8 & 0xFFFFFFFE;
  if ( *((_BYTE *)a2 + 53) )
    v9 = v8 | 1;
  a1[6] = v9;
  v10 = v9 & 0xFFFFFFFD;
  if ( *((_BYTE *)a2 + 54) )
    v10 = v9 | 2;
  a1[6] = v10;
  v11 = v10 & 0xFFFFFFFB;
  if ( *((_BYTE *)a2 + 55) )
    v11 = v10 | 4;
  a1[6] = v11;
  v12 = (nn__mii__CharInfoAccessor *)nn__mii__CharInfoAccessor__ctor(v24, *a2);
  a1[19] = nn__mii__CharInfoAccessor__GetGender_const(v12);
  FavoriteColor_const = nn__mii__CharInfoAccessor__GetFavoriteColor_const((nn__mii__CharInfoAccessor *)v24);
  FavoriteColor = (int *)nn__mii__GetFavoriteColor(FavoriteColor_const, 0);
  v15 = *FavoriteColor;
  v16 = FavoriteColor[1];
  v17 = FavoriteColor[2];
  a1[20] = v15;
  a1[21] = v16;
  a1[22] = v17;
  a1[23] = 1065353216;
  a1[349] = a2[12];
  a1[350] = nn__mii__GetExpressionCount((nn__mii *)a2[12], v15);
  dword_60CC79E0(a1 + 1166, FIELD_U32(dword_60CCFC8C, 28));
  if ( !CurrentHeap_const )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  if ( !a4 )
    a4 = CurrentHeap_const;
  v18 = a4;
  if ( (a1[6] & 1) != 0 )
    v18 = CurrentHeap_const;
  sub_6041B864(a1, a2, v18, a4);
  v19 = a1[6];
  if ( (v19 & 2) != 0 )
  {
    sub_6041B974(a1, a2, CurrentHeap_const, a4);
    v19 = a1[6];
  }
  if ( (v19 & 1) != 0 )
    MiiModelResource_ref(a1, *a2, CurrentHeap_const);
  if ( *((_BYTE *)a2 + 52) )
  {
    v20 = dword_60C9BAF4;
    v21 = dword_60C9BAF4 + 1964;
    sead__CriticalSection__lock(dword_60C9BAF4 + 1964);
    sead__ListNode__insertFront((sead_ListNode *)(v20 + 1916), (sead_ListNode *)((char *)a1 + FIELD_U32(v20, 1928)));
    ++FIELD_U32(v20, 1924);
    return sead__CriticalSection__unlock(v21);
  }
  else
  {
    v23 = sub_60913508(v24);
    sub_60913814(v23);
    sub_6041F17C(a1, v24);
    (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)dword_60CCFC8C + 16))(dword_60CCFC8C, v24);
    sub_6091361C(v24);
    sub_60913598(v24);
    return sub_6041B518(a1);
  }
}
