/* sub_6083D7FC
 * address: 0x6083D7FC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083D7FC(int result)
{
  *(_BYTE *)result &= ~1u;
  FIELD_U32(result, 8) = 0;
  FIELD_U16(result, 2) = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U16(result, 4) = 0;
  return result;
}
