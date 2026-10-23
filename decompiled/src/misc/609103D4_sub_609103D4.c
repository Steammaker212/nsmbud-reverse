/* sub_609103D4
 * address: 0x609103D4   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_609103D4(int a1, _DWORD *a2, void *a3)
{
  _DWORD *v3; // r5
  int CurrentHeap_const; // r0
  int *v8; // r9
  _DWORD *v9; // r0
  char *v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  bool v18; // zf
  int v19; // r7
  char *v20; // r0
  int v21; // r0

  CurrentHeap_const = (int)a3;
  if ( !a3 )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  FIELD_U32(a1, 52) = CurrentHeap_const;
  if ( a2 )
  {
    FIELD_U32(a1, 20) = a2[1];
    v8 = (int *)(a1 + 20);
    FIELD_U32(a1, 24) = a2[2];
    FIELD_U32(a1, 28) = a2[3];
    FIELD_U32(a1, 32) = a2[4];
    if ( a2[7] )
    {
      v3 = a2 + 5;
      do
      {
        v9 = sub_608DE5C8((int)(a2 + 5));
        if ( v9 )
          v10 = (char *)v9 - a2[8];
        else
          v10 = 0;
        sead__ListNode__insertFront((sead_ListNode *)(a1 + 36), (sead_ListNode *)&v10[FIELD_U32(a1, 48)]);
        ++FIELD_U32(a1, 44);
      }
      while ( a2[7] );
    }
  }
  else
  {
    v8 = (int *)(a1 + 20);
  }
  if ( !*v8 )
  {
    v11 = operator_new_8DE25C(0xC4u, a3, 4);
    *v8 = sub_608DD918(v11);
    FIELD_U8(a1, 57) = 1;
  }
  if ( !FIELD_U32(a1, 28) )
  {
    v12 = operator_new_8DE25C(0x200u, a3, 4);
    FIELD_U32(a1, 28) = sub_608DA828(v12);
    FIELD_U8(a1, 59) = 1;
  }
  if ( !FIELD_U32(a1, 24) )
  {
    v13 = operator_new_8DE25C(0x14u, a3, 4);
    FIELD_U32(a1, 24) = sub_60911A94(v13);
    FIELD_U8(a1, 58) = 1;
  }
  if ( *v8 )
    (*(void (__fastcall **)(int))(*(_DWORD *)*v8 + 16))(*v8);
  v14 = FIELD_U32(a1, 28);
  if ( v14 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 16))(v14);
  v15 = FIELD_U32(a1, 24);
  if ( v15 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v15 + 8))(v15, a1);
  v16 = FIELD_U32(a1, 32);
  if ( v16 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v16 + 16))(v16, a1);
  v17 = FIELD_U32(a1, 44);
  v18 = v17 == 0;
  if ( v17 )
  {
    a2 = *(_DWORD **)(a1 + 40);
    v3 = (_DWORD *)(a1 + 36);
    v18 = a2 == (_DWORD *)(a1 + 36);
  }
  if ( !v18 )
  {
    v19 = FIELD_U32(a1, 48);
    v20 = (char *)a2 - v19;
    do
    {
      (*(void (__fastcall **)(char *, int, void *))(*(_DWORD *)v20 + 20))(v20, a1, a3);
      a2 = (_DWORD *)a2[1];
      v20 = (char *)a2 - v19;
    }
    while ( (char *)a2 - v19 != (char *)v3 - FIELD_U32(a1, 48) );
  }
  v21 = FIELD_U32(a1, 32);
  if ( v21 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 20))(v21);
  FIELD_U8(a1, 56) = 1;
  return 1;
}
