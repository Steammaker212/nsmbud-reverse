/* sub_6098D54C
 * address: 0x6098D54C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098D54C(_DWORD *a1)
{
  int v2; // r5

  *a1 = off_60C600F4;
  if ( sead__HeapMgr__findContainHeap_const(sead__HeapMgr__sInstance, a1[6]) )
  {
    sub_6098B5B8();
    v2 = (int)(a1 + 10);
    sub_608555E0(a1 + 10, (void (__fastcall *)(int, int))sub_60990A70, 0);
    sub_60855108((int)(a1 + 10), FIELD_U32(dword_60CCF464, 36));
    sub_6098B60C();
  }
  else
  {
    v2 = (int)(a1 + 10);
  }
  sub_6098D9AC(a1 + 212);
  sub_608550B0(v2);
  return a1;
}
