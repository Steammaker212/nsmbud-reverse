/* sub_604ED870
 * address: 0x604ED870   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_604ED870(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  FIELD_U32(a1, 0x0) = (int)&off_60BFD7AC;
  result = sub_6047611C(a1, (int)&a1[220], 1);
  FIELD_U32(result, 0x0) = (int)&off_60BFD7AC;
  FIELD_U32(result + (220) * 16, 0x0) = 0;
  FIELD_U32(result + (220) * 16, 0x4) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(result + (220) * 16, 0x8) = (int)&byte_60B3BA34;
  FIELD_U32(result + (220) * 16, 0xC) = 0;
  LOBYTE(FIELD_U32(result + (221) * 16, 0x0)) = 0;
  return result;
}
