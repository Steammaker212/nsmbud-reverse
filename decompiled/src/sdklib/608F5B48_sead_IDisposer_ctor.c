/* sead_IDisposer_ctor
 * address: 0x608F5B48   size: 92   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sead_IDisposer_ctor(sead_IDisposer *a1)
{
  _DWORD *ContainHeap_const; // r0

  FIELD_U32(a1, 0x0) = (int)&sead__IDisposer__vtable;
  FIELD_U32(a1, 0x4) = 0;
  FIELD_U32(a1, 0x8) = 0;
  FIELD_U32(a1, 0xC) = 0;
  if ( sead__HeapMgr__sInstance )
  {
    ContainHeap_const = sead__HeapMgr__findContainHeap_const(sead__HeapMgr__sInstance, (int)a1);
    FIELD_U32(a1, 0x4) = (int)ContainHeap_const;
    if ( ContainHeap_const )
      sead__Heap__appendDisposer(ContainHeap_const, a1);
  }
  return a1;
}
