/* sead__ResourceMgr__ctor
 * address: 0x60902484   size: 380   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sead__ResourceMgr__ctor(sead_ListNode *a1)
{
  sead_ListNode *v2; // r9
  sead_ListNode *v3; // r0
  _DWORD *ContainHeap_const; // r0
  int v5; // r6
  sead_ListNode *v6; // r8
  char *v7; // r7
  int v8; // r0
  size_t v9; // r5
  int v10; // r5

  v2 = a1 + 2;
  v3 = (sead_ListNode *)((char *)a1 + 28);
  a1[2].previous = v2;
  a1[2].next = v2;
  a1[3].previous = 0;
  a1[3].next = v3;
  a1[4].previous = v3;
  a1[4].next = 0;
  a1[5].previous = 0;
  a1[5].next = 0;
  if ( sead__HeapMgr__sInstance )
  {
    ContainHeap_const = sead__HeapMgr__findContainHeap_const(sead__HeapMgr__sInstance, (int)a1);
    v5 = operator_new_8DE25C(0x4Cu, ContainHeap_const, 4);
    *(_DWORD *)v5 = off_60C5CB68;
    FIELD_U32(v5, 16) = 0;
    v6 = (sead_ListNode *)(v5 + 16);
    FIELD_U32(v5, 20) = 0;
    FIELD_U32(v5, 24) = v5;
    FIELD_U32(v5, 28) = 0;
    sead_IDisposer_ctor((sead_IDisposer *)v5);
    *(_DWORD *)v5 = off_60C5CB68;
    FIELD_U32(v5, 36) = v5 + 44;
    FIELD_U32(v5, 32) = &BufferedSafeStringBase_char_vtable_probably;
    FIELD_U32(v5, 40) = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const(v5 + 32);
    **(_BYTE **)(v5 + 36) = 0;
    FIELD_U32(v5, 32) = &off_60BD4C20;
    *(_DWORD *)v5 = off_60BFCA34;
    a1[5].previous = (sead_ListNode *)v5;
    a1[5].next = (sead_ListNode *)v5;
    v7 = *(char **)(v5 + 36);
    if ( v7 != &byte_60ABC94D )
    {
      v8 = FIELD_U32(v5, 40);
      v9 = v8 - 1;
      if ( v8 > 0 )
        v9 = 0;
      memset(*(void **)(v5 + 36), 0, v9);
      v7[v9] = 0;
    }
    v10 = FIELD_U32(v5, 28);
    if ( v10 )
    {
      FIELD_U32(v5, 28) = 0;
      sead__ListNode__erase(v6);
      --FIELD_U32(v10, 8);
    }
    FIELD_U32(v5, 28) = v2;
    sead__ListNode__insertFront(v2, v6);
    ++a1[3].previous;
  }
  return a1;
}
