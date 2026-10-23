/* operator_new_8DE25C
 * address: 0x608DE25C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall operator_new_8DE25C(unsigned int a1, void *heap, int a3)
{
  if ( !sead__HeapMgr__sInstance )
    return malloc(a1);
  if ( heap )
    return (*(int (__fastcall **)(void *, unsigned int, int))(*(_DWORD *)heap + 24))(heap, a1, a3);
  heap = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  if ( heap )
    return (*(int (__fastcall **)(void *, unsigned int, int))(*(_DWORD *)heap + 24))(heap, a1, a3);
  return 0;
}
