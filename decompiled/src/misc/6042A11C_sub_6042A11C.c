/* sub_6042A11C
 * address: 0x6042A11C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042A11C(_DWORD *a1, int CurrentHeap_const, int a3, int a4)
{
  int result; // r0

  if ( !CurrentHeap_const )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)CurrentHeap_const + 24))(CurrentHeap_const, a3, a4);
  a1[1] = result;
  a1[2] = 0;
  a1[3] = a3;
  return result;
}
