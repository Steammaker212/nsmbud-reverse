/* BlockFragmentHeap_ref
 * address: 0x603EDFA0   size: 244   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall BlockFragmentHeap_ref(sead_ListNode *a1, _DWORD *a2, int a3, char a4)
{
  const char *result; // r0
  sead_ListNode *next; // r2
  int v10; // r5
  int v11; // r8
  void (__fastcall ***v12)(_DWORD); // r6
  _DWORD v13[10]; // [sp+8h] [bp-28h] BYREF

  v13[0] = &sead__SafeStringBase__vtable;
  result = "BlockFragmentHeap";
  v13[1] = "BlockFragmentHeap";
  next = a1[2].next;
  if ( next )
  {
    result = (const char *)sub_608F882C(0, (int)v13, next, 4, 1, 0);
    v10 = (int)result;
    if ( result )
    {
      v11 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, (int)result);
      v12 = (void (__fastcall ***)(_DWORD))operator_new(0x10Cu);
      sub_603ECDF0((int)v12, v10, a2, a3, a4);
      (**v12)(v12);
      sead__ListNode__insertFront(a1 + 3, (sead_ListNode *)((char *)a1[4].next + (unsigned int)v12));
      result = (char *)&a1[4].FIELD_U32(previous, 0x0) + 1;
      a1[4].previous = (sead_ListNode *)result;
      if ( v11 != 1 )
        return (const char *)sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v11);
    }
  }
  return result;
}
