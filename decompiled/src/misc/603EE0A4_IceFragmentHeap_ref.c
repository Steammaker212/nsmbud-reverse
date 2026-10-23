/* IceFragmentHeap_ref
 * address: 0x603EE0A4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall IceFragmentHeap_ref(sead_ListNode *a1, int a2, int a3, int a4, int a5)
{
  const char *result; // r0
  sead_ListNode *next; // r2
  const char *v11; // r5
  int v12; // r8
  void (__fastcall ***v13)(_DWORD); // r6
  _DWORD v14[11]; // [sp+Ch] [bp-2Ch] BYREF

  v14[0] = &sead__SafeStringBase__vtable;
  result = "IceFragmentHeap";
  v14[1] = "IceFragmentHeap";
  next = a1[2].next;
  if ( next )
  {
    result = (const char *)sub_608F882C(0, (int)v14, next, 4, 1, 0);
    v11 = result;
    if ( result )
    {
      v12 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, (int)result);
      v13 = (void (__fastcall ***)(_DWORD))operator_new(0x6Cu);
      sub_603EED64(v13, v11, a2, a4, a5, a3);
      (**v13)(v13);
      sead__ListNode__insertFront(a1 + 3, (sead_ListNode *)((char *)a1[4].next + (unsigned int)v13));
      result = (char *)&a1[4].FIELD_U32(previous, 0x0) + 1;
      a1[4].previous = (sead_ListNode *)result;
      if ( v12 != 1 )
        return (const char *)sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v12);
    }
  }
  return result;
}
