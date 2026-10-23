/* IcicleDewHeap_ref
 * address: 0x603EE400   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall IcicleDewHeap_ref(sead_ListNode *a1, int a2)
{
  const char *result; // r0
  sead_ListNode *next; // r2
  const char *v6; // r7
  int v7; // r8
  void (__fastcall ***v8)(_DWORD); // r6
  _DWORD v9[8]; // [sp+8h] [bp-20h] BYREF

  v9[0] = &sead__SafeStringBase__vtable;
  result = "IcicleDewHeap";
  v9[1] = "IcicleDewHeap";
  next = a1[2].next;
  if ( next )
  {
    result = (const char *)sub_608F882C(0, (int)v9, next, 4, 1, 0);
    v6 = result;
    if ( result )
    {
      v7 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, (int)result);
      v8 = (void (__fastcall ***)(_DWORD))operator_new(0x60u);
      sub_603EF270(v8, v6, a2);
      (**v8)(v8);
      sead__ListNode__insertFront(a1 + 3, (sead_ListNode *)((char *)a1[4].next + (unsigned int)v8));
      result = (char *)&a1[4].FIELD_U32(previous, 0x0) + 1;
      a1[4].previous = (sead_ListNode *)result;
      if ( v7 != 1 )
        return (const char *)sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v7);
    }
  }
  return result;
}
