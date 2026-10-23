/* sub_6099F5D4
 * address: 0x6099F5D4   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099F5D4(sead_ListNode *a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // r11
  sead_ListNode *previous; // r0
  sead_ListNode *next; // r1
  sead_ListNode *v8; // r11
  sead_ListNode *v9; // r5
  sead_ListNode *v10; // r6
  sead_ListNode *v11; // r11
  sead_ListNode *v12; // r0
  sead_ListNode *v13; // r1
  int i; // r2
  sead_ListNode *v15; // r0
  sead_ListNode *v16; // r4
  sead_ListNode *v17; // r11
  signed int v18; // r5
  int v19; // r0
  bool v20; // cc
  sead_ListNode *v21; // r5
  sead_ListNode *v22; // r8
  int v23; // r0
  signed int v24; // r7
  sead_ListNode *v25; // r0
  int v26; // r0
  sead_ListNode *v27; // r0

  v5 = 0;
  previous = a1[4].previous;
  next = a1[5].next;
  if ( (int)previous >= (int)next )
    return v5;
  v8 = a1 + 3;
  v9 = a1[3].next;
  if ( v9 == &a1[3] )
  {
LABEL_15:
    v10 = 0;
    if ( (int)previous < (int)next )
    {
      v15 = a1[4].next;
      v10 = 0;
      if ( v15 )
      {
        v10 = a1[4].next;
        a1[4].next = FIELD_U32(v15, 0x0);
      }
      FIELD_U32(v10, 0x4) = (sead_ListNode *)((char *)v10 + 12);
      FIELD_U32(v10, 0x0) = (sead_ListNode *)&BufferedSafeStringBase_char_vtable_probably;
      v10[1].previous = (sead_ListNode *)8;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v10);
      LOBYTE(FIELD_U32(v10, 0x4)) = 0;
      FIELD_U32(v10, 0x0) = (sead_ListNode *)&off_60BD4B8C;
      v10[3].previous = v10 + 4;
      v10[2].next = (sead_ListNode *)&BufferedSafeStringBase_char_vtable_probably;
      v10[3].next = (sead_ListNode *)128;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v10[2].next);
      LOBYTE(v10[3].FIELD_U32(previous, 0x0)) = 0;
      v10[2].next = (sead_ListNode *)&off_60BD95A8;
      v10[20].previous = 0;
      v10[20].next = 0;
      sead__ListNode__insertFront(v8, v10 + 20);
      ++a1[4].previous;
    }
    v16 = FIELD_U32(v10, 0x4);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v17 = (sead_ListNode *)a2[1];
    if ( v16 != v17 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v18 = 0;
      v19 = a2[1];
      while ( *(_BYTE *)(v19 + v18) )
      {
        if ( !*(_BYTE *)(v19 + v18 + 1) )
        {
          ++v18;
          break;
        }
        if ( !*(_BYTE *)(v19 + v18 + 2) )
        {
          v18 += 2;
          break;
        }
        v20 = v18 + 2 <= 0x7FFFF;
        v18 += 3;
        if ( !v20 )
        {
          v18 = 0;
          break;
        }
      }
      v25 = v10[1].previous;
      if ( v18 >= (int)v25 )
        v18 = (signed int)&v25[-1].next + 3;
      qmemcpy(v16, v17, v18);
      *((_BYTE *)&FIELD_U32(v16, 0x0) + v18) = 0;
    }
    v21 = v10[3].previous;
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v22 = (sead_ListNode *)a3[1];
    v5 = 1;
    if ( v21 != v22 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v24 = 0;
      v26 = a3[1];
      while ( *(_BYTE *)(v26 + v24) )
      {
        if ( !*(_BYTE *)(v26 + v24 + 1) )
        {
LABEL_45:
          ++v24;
          goto LABEL_47;
        }
        if ( !*(_BYTE *)(v26 + v24 + 2) )
        {
LABEL_46:
          v24 += 2;
          goto LABEL_47;
        }
        v20 = v24 + 2 <= 0x7FFFF;
        v24 += 3;
        if ( !v20 )
        {
          v24 = 0;
          goto LABEL_47;
        }
      }
      goto LABEL_47;
    }
  }
  else
  {
    v10 = v9 - 20;
    while ( 1 )
    {
      ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v10, 0x0)[1].next)(v10);
      ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v10, 0x0)[1].next)(v10);
      v11 = FIELD_U32(v10, 0x4);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v12 = (sead_ListNode *)a2[1];
      if ( v11 == v12 )
        break;
      v13 = FIELD_U32(v10, 0x4);
      for ( i = 1; *((unsigned __int8 *)v13 + i - 1) == *((unsigned __int8 *)v12 + i - 1); i += 2 )
      {
        if ( !*((_BYTE *)v13 + i - 1) )
          goto LABEL_26;
        if ( i >= 524289 || *((unsigned __int8 *)&FIELD_U32(v13, 0x0) + i) != *((unsigned __int8 *)&FIELD_U32(v12, 0x0) + i) )
          break;
        if ( !*((_BYTE *)&FIELD_U32(v13, 0x0) + i) )
          goto LABEL_26;
      }
      v9 = FIELD_U32(v9, 0x4);
      v10 = v9 - 20;
      if ( &v9[-20] == &a1[-17] )
      {
        previous = a1[4].previous;
        next = a1[5].next;
        v8 = a1 + 3;
        goto LABEL_15;
      }
    }
LABEL_26:
    v21 = v10[3].previous;
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v22 = (sead_ListNode *)a3[1];
    v5 = 1;
    if ( v21 != v22 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v23 = a3[1];
      v24 = 0;
      while ( *(_BYTE *)(v23 + v24) )
      {
        if ( !*(_BYTE *)(v23 + v24 + 1) )
          goto LABEL_45;
        if ( !*(_BYTE *)(v23 + v24 + 2) )
          goto LABEL_46;
        v20 = v24 + 2 <= 0x7FFFF;
        v24 += 3;
        if ( !v20 )
        {
          v24 = 0;
          break;
        }
      }
LABEL_47:
      v27 = v10[3].next;
      if ( v24 >= (int)v27 )
        v24 = (signed int)&v27[-1].next + 3;
      qmemcpy(v21, v22, v24);
      *((_BYTE *)&FIELD_U32(v21, 0x0) + v24) = 0;
    }
  }
  return v5;
}
