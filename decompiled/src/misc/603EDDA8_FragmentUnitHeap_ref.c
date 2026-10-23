/* FragmentUnitHeap_ref
 * address: 0x603EDDA8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall FragmentUnitHeap_ref(int a1, int a2)
{
  _DWORD *result; // r0
  _DWORD v4[4]; // [sp+8h] [bp-10h] BYREF

  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "FragmentUnitHeap";
  result = sub_608FAFA4(0x10000, 240, (int)v4, 4, a2, 0);
  FIELD_U32(a1, 20) = result;
  return result;
}
