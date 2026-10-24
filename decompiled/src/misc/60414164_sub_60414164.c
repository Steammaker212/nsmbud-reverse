/* sub_60414164
 * address: 0x60414164   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_60414164(sead_ListNode *a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r6
  sead_ListNode *v5; // r4
  sead_ListNode *v6; // r0
  sead_ListNode *v7; // r7
  sead_ListNode **p_next; // r0
  sead_ListNode *v9; // r1
  sead_ListNode *next; // t1
  sead_ListNode *v11; // r1
  sead_ListNode *v12; // r0
  sead_ListNode *v13; // r6
  sead_ListNode *v14; // r1
  int v16; // r1
  sead_ListNode *v17; // r0
  sead_ListNode **v18; // r0
  sead_ListNode *v19; // r1
  sead_ListNode *v20; // t1

  v3 = a3[10];
  if ( a2 )
  {
    v5 = 0;
    if ( v3 >= 4 )
      v3 = 0;
    v6 = &a1[2691 * v3];
    v7 = v6 + 3;
    if ( (int)FIELD_U32(v6 + (3) * 8, 0x0) >= (int)v6[4].next )
      return v5;
    next = FIELD_U32(v6 + (3) * 8, 0x4);
    p_next = &FIELD_U32(v6 + (3) * 8, 0x4);
    v9 = next;
    v5 = 0;
    if ( next )
    {
      v5 = v9;
      *p_next = FIELD_U32(v9, 0x0);
    }
    qmemcpy(v5, a3, 0x4Cu);
    FIELD_U32(v5 + (9) * 8, 0x4) = 0;
    v11 = (sead_ListNode *)((char *)v5 + 76);
    FIELD_U32(v5 + (10) * 8, 0x0) = 0;
    v12 = &a1[2691 * v3 + 2];
    goto LABEL_20;
  }
  if ( v3 != 1 )
  {
    v5 = 0;
    LOWORD(v16) = 20600;
    if ( v3 >= 4 )
      v3 = 0;
    HIWORD(v16) = 1;
    v17 = &a1[2691 * v3];
    v7 = (sead_ListNode *)((char *)v17 + v16);
    if ( (int)*(sead_ListNode **)((char *)&FIELD_U32(v17, 0x0) + v16) >= (int)*(sead_ListNode **)((char *)&FIELD_U32(v17 + (1) * 8, 0x4) + v16) )
      return v5;
    v5 = 0;
    v20 = v17[10767].next;
    v18 = &v17[10767].next;
    v19 = v20;
    if ( v20 )
    {
      v5 = v19;
      *v18 = FIELD_U32(v19, 0x0);
    }
    qmemcpy(v5, a3, 0x4Cu);
    FIELD_U32(v5 + (9) * 8, 0x4) = 0;
    v11 = (sead_ListNode *)((char *)v5 + 76);
    FIELD_U32(v5 + (10) * 8, 0x0) = 0;
    v12 = &a1[2691 * v3 + 10766];
LABEL_20:
    sead__ListNode__insertFront(v12, v11);
    ++FIELD_U32(v7, 0x0);
    return v5;
  }
  v5 = 0;
  if ( (int)a1[10767].previous < (int)a1[10768].next )
  {
    v13 = 0;
    v5 = 0;
    v14 = a1[10767].next;
    if ( v14 )
    {
      v13 = a1[10767].next;
      a1[10767].next = FIELD_U32(v14, 0x0);
    }
    qmemcpy(v13, a3, 0x4Cu);
    FIELD_U32(v13 + (9) * 8, 0x4) = 0;
    FIELD_U32(v13 + (10) * 8, 0x0) = 0;
    sead__ListNode__insertFront(a1 + 10766, (sead_ListNode *)((char *)v13 + 76));
    ++a1[10767].previous;
    if ( v13 )
    {
      FIELD_U32(v13 + (5) * 8, 0x0) = 0;
      return v13;
    }
  }
  return v5;
}
