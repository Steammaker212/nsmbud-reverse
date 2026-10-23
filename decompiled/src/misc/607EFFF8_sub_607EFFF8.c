/* sub_607EFFF8
 * address: 0x607EFFF8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EFFF8(int a1, int a2, const char *a3)
{
  sead__FaderTaskBase__ctor(a1, a2, a3);
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
  return a1;
}
