/* sub_604ED37C
 * address: 0x604ED37C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_604ED37C(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  FIELD_U32(a1, 0x0) = (int)&off_60BFECCC;
  result = sub_6047611C(a1, (int)&a1[220], 2);
  FIELD_U32(result, 0x0) = (int)&off_60BFECCC;
  result[220].vtable = 0;
  result[220].containingHeap = (int)&sead__SafeStringBase__vtable;
  result[220].field_8 = (int)&byte_60B3BA34;
  result[220].field_C = 0;
  LOBYTE(result[221].vtable) = 0;
  result[221].containingHeap = 0;
  result[221].field_8 = (int)&sead__SafeStringBase__vtable;
  result[221].field_C = (int)&byte_60B3BA34;
  result[222].vtable = 0;
  LOBYTE(result[222].containingHeap) = 0;
  result[222].field_C = 2139095039;
  result[223].vtable = 2139095039;
  result[223].containingHeap = -8388609;
  result[223].field_8 = -8388609;
  result[223].field_C = 0;
  LOBYTE(result[224].vtable) = 0;
  result[222].field_8 = 0;
  return result;
}
