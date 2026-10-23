/* sub_6043E8F0
 * address: 0x6043E8F0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_6043E8F0(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  result = sead_IDisposer_ctor(a1);
  FIELD_U32(result, 0x0) = (int)off_60BFAAF8;
  result[1].vtable = (int)&off_60BFAB08;
  result[1].containingHeap = 0;
  result[1].field_8 = 0;
  result[1].field_C = 0;
  result[2].vtable = (int)&sead__SafeStringBase__vtable;
  result[2].containingHeap = (int)&byte_60B3BA34;
  result[2].field_8 = 0;
  result[2].field_C = 0;
  return result;
}
