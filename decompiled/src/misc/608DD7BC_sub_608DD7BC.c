/* sub_608DD7BC
 * address: 0x608DD7BC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DD7BC(_DWORD *a1, unsigned int a2, int CurrentHeap_const)
{
  int v6; // r0

  sub_608AC26C((int)a1);
  *a1 = off_60C5BCF0;
  a1[11] = &off_60C5BD0C;
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  if ( !CurrentHeap_const )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  if ( !a2 )
    a2 = (*(int (__fastcall **)(int, int))(*(_DWORD *)CurrentHeap_const + 64))(CurrentHeap_const, 4) - 16;
  v6 = operator_new_8DE2C8(a2, CurrentHeap_const, 4);
  a1[12] = v6;
  sub_608AC3CC((int)a1, v6, a2);
  return a1;
}
