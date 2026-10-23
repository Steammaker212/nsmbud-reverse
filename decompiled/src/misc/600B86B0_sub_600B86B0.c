/* sub_600B86B0
 * address: 0x600B86B0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600B86B0(int result)
{
  FIELD_U32(result, 6124) = FIELD_U32(result, 20) & 0xF;
  return result;
}
