/* sub_60475C8C
 * address: 0x60475C8C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60475C8C(int a1)
{
  void *CurrentHeap_const; // r0
  int v3; // r0
  int result; // r0

  CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v3 = operator_new_8DE25C(0x24u, CurrentHeap_const, 4);
  result = sub_60982D30(v3, FIELD_U32(dword_60CD0C84, 836), FIELD_U32(dword_60CD0C84, 856));
  FIELD_U32(a1, 3520) = result;
  return result;
}
