/* ChainFragmentHeap_ref
 * address: 0x603EE5F0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall ChainFragmentHeap_ref(sead_ListNode *a1, _DWORD *a2, int a3)
{
  const char *result; // r0
  sead_ListNode *next; // r2
  int v8; // r7
  int v9; // r8
  void (__fastcall ***v10)(_DWORD); // r5
  _DWORD v11[10]; // [sp+8h] [bp-28h] BYREF

  v11[0] = &sead__SafeStringBase__vtable;
  result = "ChainFragmentHeap";
  v11[1] = "ChainFragmentHeap";
  next = FIELD_U32(a1 + (2) * 8, 0x4);
  if ( next )
  {
    result = (const char *)sub_608F882C(0, (int)v11, next, 4, 1, 0);
    v8 = (int)result;
    if ( result )
    {
      v9 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, (int)result);
      v10 = (void (__fastcall ***)(_DWORD))operator_new(0x150u);
      sub_603ED498((int)v10, v8, a2, a3 << 8);
      (**v10)(v10);
      sead__ListNode__insertFront(a1 + 3, (sead_ListNode *)((char *)FIELD_U32(a1 + (4) * 8, 0x4) + (unsigned int)v10));
      result = (char *)&a1[4].FIELD_U32(previous, 0x0) + 1;
      FIELD_U32(a1 + (4) * 8, 0x0) = (sead_ListNode *)result;
      if ( v9 != 1 )
        return (const char *)sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v9);
    }
  }
  return result;
}
