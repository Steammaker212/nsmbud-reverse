/* sub_608D2FBC
 * address: 0x608D2FBC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608D2FBC()
{
  int result; // r0

  result = sub_608D39CC();
  FIELD_U32(result, 168) = result + 168;
  FIELD_U32(result, 172) = result + 168;
  *(_DWORD *)result = off_60C5B740;
  FIELD_U32(result, 164) = off_60C5B770;
  FIELD_U32(result, 1500) = 0;
  FIELD_U32(result, 1504) = 0;
  FIELD_U16(result, 1516) = 0;
  FIELD_U8(result, 1518) = 0;
  FIELD_U32(result, 1512) = 0;
  return result;
}
