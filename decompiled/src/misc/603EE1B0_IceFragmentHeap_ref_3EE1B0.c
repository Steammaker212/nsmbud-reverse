/* IceFragmentHeap_ref_3EE1B0
 * address: 0x603EE1B0   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall IceFragmentHeap_ref_3EE1B0(sead_ListNode *a1, int a2, int a3, int a4)
{
  int v5; // r11
  int *result; // r0
  sead_ListNode *next; // r2
  int *v8; // r6
  int v9; // r5
  void (__fastcall ***v10)(_DWORD); // r9
  sead_ListNode *v11; // [sp+14h] [bp-3Ch]
  _DWORD v15[11]; // [sp+24h] [bp-2Ch] BYREF

  v5 = 0;
  v11 = a1 + 3;
  result = &sead__HeapMgr__sInstance;
  do
  {
    v15[0] = &sead__SafeStringBase__vtable;
    v15[1] = "IceFragmentHeap";
    next = a1[2].next;
    if ( next )
    {
      result = (int *)sub_608F882C(0, (int)v15, next, 4, 1, 0);
      v8 = result;
      if ( result )
      {
        v9 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, (int)result);
        v10 = (void (__fastcall ***)(_DWORD))operator_new(0x6Cu);
        sub_603EED64(v10, v8, a2, a4, &dword_60B3B95C, v5 | a3 | 0x1000);
        (**v10)(v10);
        sead__ListNode__insertFront(v11, (sead_ListNode *)((char *)a1[4].next + (unsigned int)v10));
        result = (int *)((char *)&a1[4].FIELD_U32(previous, 0x0) + 1);
        a1[4].previous = (sead_ListNode *)result;
        if ( v9 != 1 )
          result = (int *)sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v9);
      }
    }
    v5 += 256;
  }
  while ( v5 != 1024 );
  return result;
}
