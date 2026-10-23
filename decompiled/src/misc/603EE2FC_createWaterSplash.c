/* createWaterSplash
 * address: 0x603EE2FC   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall createWaterSplash(sead_ListNode *a1)
{
  char *result; // r0
  sead_ListNode *next; // r2
  int v4; // r8
  void (__fastcall ***v5)(_DWORD); // r6
  _DWORD v6[10]; // [sp+8h] [bp-28h] BYREF

  v6[0] = &sead__SafeStringBase__vtable;
  result = "WaterSplashHeap";
  v6[1] = "WaterSplashHeap";
  next = a1[2].next;
  if ( next )
  {
    result = (char *)sub_608F882C(0, (int)v6, next, 4, 1, 0);
    if ( result )
    {
      v4 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, (int)result);
      v5 = (void (__fastcall ***)(_DWORD))operator_new(0x68u);
      createWaterSplash_helper(v5);
      (**v5)(v5);
      sead__ListNode__insertFront(a1 + 3, (sead_ListNode *)((char *)a1[4].next + (unsigned int)v5));
      result = (char *)&a1[4].FIELD_U32(previous, 0x0) + 1;
      a1[4].previous = (sead_ListNode *)result;
      if ( v4 != 1 )
        return (char *)sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v4);
    }
  }
  return result;
}
