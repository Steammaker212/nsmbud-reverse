/* sub_608F6BCC
 * address: 0x608F6BCC   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F6BCC(sead_ListNode *a1, int a2, int a3)
{
  int v6; // r4
  sead_ListNode *next; // r0
  sead_ListNode *v8; // r1
  char *v9; // r9
  int v10; // r0
  unsigned int v11; // r7
  int v12; // r10
  unsigned int v13; // r1
  unsigned int v15; // r7
  sead_ListNode *v16; // r1
  sead_ListNode *v17; // r0
  int v18; // r1
  _DWORD *v19; // r1
  sead_ListNode *v20; // r2
  sead_ListNode *v21; // r0
  sead_ListNode *v22; // r1

  v6 = sub_608F6F58();
  if ( !v6 )
    return 0;
  next = a1[17].next;
  v8 = *(sead_ListNode **)((char *)&FIELD_U32(next, 0x4) + v6);
  v9 = (char *)((char *)v8 - (char *)next);
  v10 = v6 + 16;
  if ( v8 == &a1[16] )
    v9 = 0;
  v11 = ((a3 + FIELD_U16(v6, 10) + v10 - 1) & -a3) - (FIELD_U16(v6, 10) + v10);
  v12 = FIELD_U32(v6, 12) - a2;
  if ( v11 < 0x10000 )
  {
    FIELD_U16(v6, 10) = v11;
    if ( (_WORD)v11 )
      *(_DWORD *)(v10 + (unsigned __int16)v11 - 4) = v6 + 1;
    FIELD_U32(v6, 12) = a2;
    sead__ListNode__erase((sead_ListNode **)((char *)&a1[17].FIELD_U32(next, 0x0) + v6));
    --a1[17].previous;
  }
  else
  {
    FIELD_U16(v6, 10) = 0;
    FIELD_U32(v6, 12) = v11 - 16;
    *(_DWORD *)(v11 + v6) = 0;
    v13 = v11 + v6;
    FIELD_U32(v13, 4) = 0;
    FIELD_U32(v13, 8) = 0;
    FIELD_U32(v13, 12) = 0;
    FIELD_U16(v13, 10) = 0;
    FIELD_U32(v13, 12) = a2;
    v6 += v11;
  }
  v15 = v12 - v11;
  v16 = (sead_ListNode *)((char *)a1[19].next + v6);
  v17 = a1 + 18;
  if ( a1[10].previous == (sead_ListNode *)1 )
    sead__ListNode__insertFront(v17, v16);
  else
    sub_608DE510((int)v17, v16);
  ++a1[19].previous;
  if ( v15 < 0x11 )
  {
    if ( v15 )
      FIELD_U32(v6, 12) = v15 + a2;
    return v6;
  }
  else
  {
    v18 = a2 + v6 + FIELD_U16(v6, 10);
    FIELD_U32(v18, 16) = 0;
    v19 = (_DWORD *)(v18 + 16);
    v19[1] = 0;
    v19[2] = 0;
    v19[3] = 0;
    v19[3] = v15 - 16;
    *((_WORD *)v19 + 4) = -1;
    v20 = a1[17].next;
    if ( v9 )
    {
      v21 = (sead_ListNode *)&v9[(_DWORD)v20];
      v22 = (sead_ListNode *)((char *)v19 + (_DWORD)v20);
    }
    else
    {
      v22 = (sead_ListNode *)((char *)v19 + (_DWORD)v20);
      v21 = a1 + 16;
    }
    sead__ListNode__insertFront(v21, v22);
    ++a1[17].previous;
    return v6;
  }
}
