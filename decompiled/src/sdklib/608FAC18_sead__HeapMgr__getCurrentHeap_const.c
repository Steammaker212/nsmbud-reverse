/* sead__HeapMgr__getCurrentHeap_const
 * address: 0x608FAC18   size: 48   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__HeapMgr__getCurrentHeap_const(int a1)
{
  int TlsValue; // r0
  int v3; // r1

  TlsValue = nn__os__GetTlsValue(*(_DWORD *)(sead__ThreadMgr__sInstance + 72));
  v3 = TlsValue + 100;
  if ( !TlsValue )
    v3 = a1 + 4;
  return *(_DWORD *)v3;
}
