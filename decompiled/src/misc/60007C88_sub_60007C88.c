/* sub_60007C88
 * address: 0x60007C88   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60007C88(sead_ListNode *a1)
{
  sead_ListNode *next; // r10
  sead_ListNode **p_next; // r11
  sead_ListNode *v4; // r4
  char *v5; // r9
  sead_ListNode *i; // r0
  sead_ListNode *v7; // r4
  sead_ListNode *v8; // r5
  int v9; // r1
  sead_ListNode *v11; // [sp+4h] [bp-2Ch]

  sub_60008EB4(&a1[3396], sub_60007DB0, 0);
  v11 = a1;
  p_next = &a1[2866].next;
  next = a1[2866].next;
  v4 = a1[2865].next;
  if ( v4 != (sead_ListNode *)(p_next - 3) )
  {
    v5 = (char *)((char *)v4 - (char *)next);
    for ( i = next; ; i = *p_next )
    {
      v4 = FIELD_U32(v4, 0x4);
      sead__ListNode__erase((char *)i + (_DWORD)v5);
      --v11[2866].previous;
      sead__ListNode__insertFront(v11 + 2867, (sead_ListNode *)((char *)v11[2868].next + (unsigned int)v5));
      v5 = (char *)((char *)v4 - (char *)next);
      ++v11[2868].previous;
      if ( (char *)v4 - (char *)next == (char *)(p_next - 3) - (char *)next )
        break;
    }
  }
  v7 = v11[2869].next;
  if ( v7 != &v11[2869] )
  {
    v8 = v11[2870].next;
    v9 = (char *)v7 - (char *)v8;
    do
    {
      v7 = FIELD_U32(v7, 0x4);
      if ( FIELD_U8(v9, 19) )
        sub_60007FF0(v11, v9);
      v9 = (char *)v7 - (char *)v8;
    }
    while ( (char *)v7 - (char *)v8 != (char *)&v11[2869] - (char *)v8 );
  }
  return sub_60007858((int)v11, 1);
}
