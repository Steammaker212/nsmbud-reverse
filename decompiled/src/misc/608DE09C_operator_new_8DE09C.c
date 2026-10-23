/* operator_new_8DE09C
 * address: 0x608DE09C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall operator_new_8DE09C(unsigned int a1)
{
  int CurrentHeap_const; // r0

  if ( !sead__HeapMgr__sInstance )
    return malloc(a1);
  CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  if ( CurrentHeap_const )
    return (*(int (__fastcall **)(int, unsigned int, int))(*(_DWORD *)CurrentHeap_const + 24))(CurrentHeap_const, a1, 4);
  else
    return 0;
}
