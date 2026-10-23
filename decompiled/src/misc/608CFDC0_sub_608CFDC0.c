/* sub_608CFDC0
 * address: 0x608CFDC0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CFDC0(int result)
{
  *(_DWORD *)result = &off_60C5B64C;
  FIELD_U32(result, 4) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 20) = -1;
  FIELD_U32(result, 24) = 0;
  FIELD_U8(result, 28) = 0;
  return result;
}
