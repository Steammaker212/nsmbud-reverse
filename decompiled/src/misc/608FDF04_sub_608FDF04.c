/* sub_608FDF04
 * address: 0x608FDF04   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608FDF04(signed int a1, int CurrentHeap_const, signed int a3)
{
  int v5; // r6
  _DWORD *result; // r0

  if ( a1 < 1 )
    return 0;
  if ( !CurrentHeap_const )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  if ( a3 < 5 )
  {
    result = (_DWORD *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)CurrentHeap_const + 24))(
                         CurrentHeap_const,
                         a1 + 12,
                         4);
    v5 = 12;
  }
  else
  {
    v5 = (a3 + 11) & -a3;
    result = (_DWORD *)(*(int (__fastcall **)(int, int, signed int))(*(_DWORD *)CurrentHeap_const + 24))(
                         CurrentHeap_const,
                         v5 + a1,
                         a3);
  }
  *result = (char *)result + v5;
  result[1] = 0;
  result[2] = a1;
  *((_BYTE *)result + v5) = 0;
  return result;
}
