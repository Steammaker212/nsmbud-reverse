/* sub_60008608
 * address: 0x60008608   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_60008608(sead_ListNode *a1)
{
  sead_ListNode *v1; // r5
  sead_ListNode **p_next; // r10
  sead_ListNode *next; // r11
  sead_ListNode *v4; // r4
  sead_ListNode *result; // r0
  char *v6; // r8
  Actor *v7; // r6
  sead_ListNode *v8; // r9
  int heap; // r1
  int v10; // r7
  unsigned int v11; // r0
  unsigned int v12; // r5
  bool v13; // zf
  sead_ListNode **v14; // [sp+4h] [bp-3Ch]
  sead_ListNode *v15; // [sp+8h] [bp-38h]
  sead_ListNode *v16; // [sp+Ch] [bp-34h]
  sead_ListNode *v17; // [sp+18h] [bp-28h]

  v1 = a1;
  p_next = &a1[2866].next;
  next = a1[2866].next;
  v4 = a1[2865].next;
  result = a1 + 2865;
  if ( v4 != result )
  {
    v6 = (char *)((char *)result - (char *)next);
    v7 = (Actor *)((char *)v4 - (char *)next);
    v17 = v1;
    v16 = v1 + 2868;
    v15 = v1 + 2867;
    v14 = &v1[2868].next;
    v8 = v1 + 2866;
    do
    {
      v4 = FIELD_U32(v4, 0x4);
      if ( !FIELD_U8(v7, 0x12) )
      {
        if ( !(*(int (__fastcall **)(Actor *))(FIELD_U32(v7, 0x0) + 16))(v7) )
        {
          result = (sead_ListNode *)(*(int (__fastcall **)(Actor *, _DWORD))(FIELD_U32(v7, 0x0) + 24))(v7, 0);
          goto LABEL_19;
        }
        heap = FIELD_U32(v7, 0x4);
        if ( heap )
          v10 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, heap);
        else
          v10 = 1;
        v11 = (*(int (__fastcall **)(Actor *))(FIELD_U32(v7, 0x0) + 20))(v7);
        v12 = 0;
        if ( v11 < 3 )
          v12 = 3 - v11;
        if ( v10 != 1 )
          sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v10);
        result = (sead_ListNode *)(*(int (__fastcall **)(Actor *, unsigned int))(FIELD_U32(v7, 0x0) + 24))(v7, v12);
        if ( v12 == 1 )
        {
          FIELD_U8(v7, 0x13) = 1;
          sead__ListNode__erase((char *)v7 + (_DWORD)*p_next);
          --FIELD_U32(v8, 0x0);
          sead__ListNode__insertFront(v15, (sead_ListNode *)((char *)v7 + (_DWORD)*v14));
          result = (sead_ListNode *)((char *)&FIELD_U32(v16, 0x0) + 1);
          FIELD_U32(v16, 0x0) = result;
          v1 = v17;
          goto LABEL_19;
        }
        v13 = v12 == 2;
        v1 = v17;
        if ( !v13 )
          goto LABEL_19;
        FIELD_U8(v7, 0x12) = 1;
      }
      sead__ListNode__erase((char *)v7 + (_DWORD)*p_next);
      --FIELD_U32(v8, 0x0);
      result = sub_60008458(v1, v7);
LABEL_19:
      v7 = (Actor *)((char *)v4 - (char *)next);
    }
    while ( (char *)((char *)v4 - (char *)next) != v6 );
  }
  return result;
}
