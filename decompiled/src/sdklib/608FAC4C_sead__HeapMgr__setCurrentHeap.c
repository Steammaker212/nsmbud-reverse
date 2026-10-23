/* sead__HeapMgr__setCurrentHeap
 * address: 0x608FAC4C   size: 44   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__HeapMgr__setCurrentHeap(int a1, int a2)
{
  int TlsValue; // r0
  int v4; // r1

  TlsValue = nn__os__GetTlsValue(*(_DWORD *)(sead__ThreadMgr__sInstance + 72));
  v4 = FIELD_U32(TlsValue, 100);
  FIELD_U32(TlsValue, 100) = a2;
  return v4;
}
