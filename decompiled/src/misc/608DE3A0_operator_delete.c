/* operator_delete
 * address: 0x608DE3A0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall operator_delete(void *a1)
{
  _DWORD *ContainHeap_const; // r0

  if ( sead__HeapMgr__sInstance )
  {
    if ( a1 )
    {
      ContainHeap_const = sead__HeapMgr__findContainHeap_const(sead__HeapMgr__sInstance, (int)a1);
      if ( ContainHeap_const )
        (*(void (__fastcall **)(_DWORD *, void *))(*ContainHeap_const + 0x1C))(ContainHeap_const, a1);
    }
  }
  else
  {
    free(a1);
  }
}
