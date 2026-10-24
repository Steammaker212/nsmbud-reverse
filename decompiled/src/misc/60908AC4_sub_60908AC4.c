/* sub_60908AC4
 * address: 0x60908AC4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60908AC4(sead_IDisposer *a1)
{
  int *p_containingHeap; // r0

  FIELD_U32(a1, 0x0) = (int)off_60C5CEF8;
  p_containingHeap = &FIELD_U32(a1 + (1) * 16, 0x4);
  *p_containingHeap = (int)p_containingHeap;
  FIELD_U32(a1 + (1) * 16, 0x8) = (int)p_containingHeap;
  FIELD_U32(a1 + (1) * 16, 0xC) = 0;
  sead__CriticalSection__ctor(a1 + 2);
  FIELD_U32(a1 + (4) * 16, 0x4) = 0;
  nn__os__AllocateTlsSlot(&FIELD_U32(a1 + (4) * 16, 0x8), 0);
  return a1;
}
