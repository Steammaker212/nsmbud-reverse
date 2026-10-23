/* sub_607FEB48
 * address: 0x607FEB48   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_607FEB48(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60C27DCC;
  result[1].vtable = a2;
  result[1].containingHeap = 1117782016;
  result[1].field_8 = 1116733440;
  LOBYTE(result[1].field_C) = 0;
  return result;
}
