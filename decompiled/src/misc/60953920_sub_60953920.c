/* sub_60953920
 * address: 0x60953920   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60953920(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r7
  int v6; // r1
  int v7; // r8
  int v8; // r0
  bool v9; // zf
  int result; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r1
  bool v14; // zf
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r1
  bool v19; // zf
  int v20; // r1
  int v21; // r2

  FIELD_U32(a1, 20) -= a2[3];
  if ( a2[10] )
  {
    if ( a3 == 1 )
      sub_60913ABC((int)(a2 + 10));
    sub_60913AD4(a2 + 10);
  }
  sead__ListNode__erase((_DWORD *)((char *)a2 + FIELD_U32(a1, 44)));
  v7 = a1 + 48;
  --FIELD_U32(a1, 40);
  if ( FIELD_S32(a1, 56) < 1 )
    goto LABEL_10;
  v8 = FIELD_U32(a1, 52);
  v9 = v8 == 0;
  if ( v8 )
  {
    v6 = FIELD_U32(a1, 60);
    v9 = v8 == v6;
  }
  if ( v9 )
  {
LABEL_10:
    sub_608DE510(a1 + 48, (_DWORD *)((char *)a2 + FIELD_U32(a1, 60)));
    result = FIELD_U32(a1, 56) + 1;
    FIELD_U32(a1, 56) = result;
  }
  else
  {
    if ( v8 != v7 )
    {
      v3 = (_DWORD *)(v8 - v6);
      while ( (unsigned int)(a2[1] + a2[3]) > v3[1] )
      {
        v8 = FIELD_U32(v8, 4);
        v3 = (_DWORD *)(v8 - v6);
        if ( v8 - v6 == v7 - v6 )
          goto LABEL_23;
      }
      sead__ListNode__insertFront((sead_ListNode *)((char *)v3 + v6), (sead_ListNode *)((char *)a2 + v6));
      ++FIELD_U32(a1, 56);
      v11 = a2[3];
      if ( a2[1] + v11 == v3[1] )
      {
        a2[3] = v3[3] + v11;
        sead__ListNode__erase((_DWORD *)((char *)v3 + FIELD_U32(a1, 60)));
        --FIELD_U32(a1, 56);
        sead__ListNode__insertFront((sead_ListNode *)(a1 + 64), (sead_ListNode *)((char *)v3 + FIELD_U32(a1, 76)));
        ++FIELD_U32(a1, 72);
      }
      v12 = FIELD_U32(a1, 60);
      v13 = *(_DWORD *)((char *)a2 + v12);
      v14 = v13 == v7;
      if ( v13 != v7 )
      {
        v3 = (_DWORD *)(v13 - v12);
        v14 = v13 == v12;
      }
      if ( !v14 && v3[1] + v3[3] == a2[1] )
      {
        v15 = v3[1];
        v16 = v3[2];
        *a2 = *v3;
        a2[1] = v15;
        a2[2] = v16;
        a2[3] += v3[3];
        sead__ListNode__erase((_DWORD *)((char *)v3 + FIELD_U32(a1, 60)));
        --FIELD_U32(a1, 56);
        sead__ListNode__insertFront((sead_ListNode *)(a1 + 64), (sead_ListNode *)((char *)v3 + FIELD_U32(a1, 76)));
        ++FIELD_U32(a1, 72);
      }
    }
LABEL_23:
    if ( !a2[14] && !a2[13] )
    {
      sead__ListNode__insertFront((sead_ListNode *)(a1 + 48), (sead_ListNode *)((char *)a2 + FIELD_U32(a1, 60)));
      ++FIELD_U32(a1, 56);
      v17 = FIELD_U32(a1, 60);
      v18 = *(_DWORD *)((char *)a2 + v17);
      v19 = v18 == v7;
      if ( v18 != v7 )
      {
        v3 = (_DWORD *)(v18 - v17);
        v19 = v18 == v17;
      }
      if ( !v19 && v3[1] + v3[3] == a2[1] )
      {
        v20 = v3[1];
        v21 = v3[2];
        *a2 = *v3;
        a2[1] = v20;
        a2[2] = v21;
        a2[3] += v3[3];
        sead__ListNode__erase((_DWORD *)((char *)v3 + FIELD_U32(a1, 60)));
        --FIELD_U32(a1, 56);
        sead__ListNode__insertFront((sead_ListNode *)(a1 + 64), (sead_ListNode *)((char *)v3 + FIELD_U32(a1, 76)));
        ++FIELD_U32(a1, 72);
      }
    }
    result = FIELD_U32(a1, 52);
    if ( result != v7 )
    {
      do
        result = FIELD_U32(result, 4);
      while ( result - FIELD_U32(a1, 60) != v7 - FIELD_U32(a1, 60) );
    }
  }
  return result;
}
