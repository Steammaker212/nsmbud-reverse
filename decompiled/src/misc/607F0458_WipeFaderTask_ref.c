/* WipeFaderTask_ref
 * address: 0x607F0458   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WipeFaderTask_ref(int a1, int a2)
{
  sead__FaderTaskBase__ctor(a1, a2, "WipeFaderTask");
  *(_DWORD *)a1 = off_60C271A0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 500));
  FIELD_U32(a1, 516) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 520) = &byte_60ABC94D;
  FIELD_U32(a1, 500) = off_60C5E9A4;
  FIELD_U32(a1, 524) = 0;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 532) = 1;
  FIELD_U32(a1, 540) = 0;
  FIELD_U32(a1, 544) = 0;
  FIELD_U32(a1, 548) = 0;
  FIELD_U32(a1, 536) = off_60BD8394;
  *(_DWORD *)a1 = off_60C27218;
  sub_60560B78(a1 + 568);
  FIELD_U8(a1, 64540) = 0;
  return a1;
}
