/* sead__IDisposer__ctor
 * address: 0x608F5BAC   size: 148   group: sdklib
 * sym: sead::IDisposer::IDisposer(sead::Heap*, sead::IDisposer::HeapNullOption) as C1
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__IDisposer__ctor(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *ContainHeap_const; // r0

  *a1 = &sead__IDisposer__vtable;
  a1[1] = a2;
  a1[2] = 0;
  a1[3] = 0;
  if ( a2 )
  {
    ContainHeap_const = a2;
LABEL_3:
    sead__Heap__appendDisposer(ContainHeap_const, a1);
    return a1;
  }
  if ( a3 < 2 )
  {
    if ( !sead__HeapMgr__sInstance )
      return a1;
    ContainHeap_const = sead__HeapMgr__findContainHeap_const(sead__HeapMgr__sInstance, (int)a1);
    goto LABEL_11;
  }
  if ( a3 == 3 && sead__HeapMgr__sInstance )
  {
    ContainHeap_const = (_DWORD *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
LABEL_11:
    a1[1] = ContainHeap_const;
    if ( !ContainHeap_const )
      return a1;
    goto LABEL_3;
  }
  return a1;
}
