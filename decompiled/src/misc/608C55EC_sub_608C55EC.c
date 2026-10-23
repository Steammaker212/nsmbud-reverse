/* sub_608C55EC
 * address: 0x608C55EC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C55EC(int result)
{
  FIELD_U32(result, 16) = 0;
  FIELD_U16(result, 20) = 0;
  FIELD_U32(result, 8) = 1199570688;
  FIELD_U8(result, 24) = 127;
  FIELD_U32(result, 12) = 1199570688;
  *(_DWORD *)result = 0;
  FIELD_U32(result, 4) = -1000210432;
  return result;
}
