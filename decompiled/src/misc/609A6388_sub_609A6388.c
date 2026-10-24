/* sub_609A6388
 * address: 0x609A6388   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A6388(sead_ListNode *a1, int a2, _DWORD *a3, int a4)
{
  int v7; // r11
  bool v8; // zf
  sead_ListNode *previous; // r0
  sead_ListNode *next; // r1
  sead_ListNode *v11; // r9
  sead_ListNode *v12; // r3
  sead_ListNode *v13; // r7
  sead_ListNode *v14; // r8
  sead_ListNode *v15; // r0
  int v16; // r1
  int i; // r2
  sead_ListNode *v18; // r0
  sead_ListNode *v19; // r7
  sead_ListNode *v20; // r9
  _DWORD *v21; // r4
  _DWORD *v23; // [sp+4h] [bp-2Ch]

  v7 = 0;
  v8 = **(_BYTE **)(a2 + 4) == 0;
  if ( **(_BYTE **)(a2 + 4) )
    v8 = FIELD_U32(a1 + (16) * 8, 0x0) == 0;
  if ( !v8 )
  {
    previous = FIELD_U32(a1 + (15) * 8, 0x0);
    next = FIELD_U32(a1 + (16) * 8, 0x4);
    if ( (int)previous < (int)next )
    {
      v11 = FIELD_U32(a1 + (14) * 8, 0x4);
      v12 = a1 + 14;
      if ( v11 == &a1[14] )
      {
LABEL_18:
        v7 = 1;
        if ( (int)previous < (int)next )
        {
          v18 = FIELD_U32(a1 + (15) * 8, 0x4);
          v19 = 0;
          v20 = v12;
          v21 = a3;
          if ( v18 )
          {
            v19 = FIELD_U32(a1 + (15) * 8, 0x4);
            FIELD_U32(a1 + (15) * 8, 0x4) = FIELD_U32(v18, 0x0);
          }
          sub_6097114C(v19, a4, (_DWORD *)a2, 4);
          sub_6097114C(&FIELD_U32(v19 + (1) * 8, 0x4), a4, v21, 4);
          FIELD_U32(v19 + (3) * 8, 0x0) = 0;
          v19[3].next = 0;
          sead__ListNode__insertFront(v20, v19 + 3);
          ++FIELD_U32(a1 + (15) * 8, 0x0);
        }
      }
      else
      {
        v13 = v11 - 3;
        v23 = a3;
        while ( 1 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2);
          (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2);
          v14 = *(sead_ListNode **)(a2 + 4);
          ((void (__fastcall *)(sead_ListNode *))FIELD_U32(v13, 0x0)[1].next)(v13);
          v15 = FIELD_U32(v13, 0x4);
          if ( v14 == v15 )
            break;
          v16 = FIELD_U32(a2, 4);
          for ( i = 1; *(unsigned __int8 *)(v16 + i - 1) == *((unsigned __int8 *)v15 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v16 + i - 1) )
              return v7;
            if ( i > 0x80000 || *(unsigned __int8 *)(v16 + i) != *((unsigned __int8 *)&FIELD_U32(v15, 0x0) + i) )
              break;
            if ( !*(_BYTE *)(v16 + i) )
              return v7;
          }
          v11 = FIELD_U32(v11, 0x4);
          v13 = v11 - 3;
          if ( &v11[-3] == &a1[11] )
          {
            previous = FIELD_U32(a1 + (15) * 8, 0x0);
            next = FIELD_U32(a1 + (16) * 8, 0x4);
            a3 = v23;
            v12 = a1 + 14;
            goto LABEL_18;
          }
        }
      }
    }
  }
  return v7;
}
