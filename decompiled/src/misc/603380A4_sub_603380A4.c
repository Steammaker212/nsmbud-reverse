/* sub_603380A4
 * address: 0x603380A4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603380A4(int result)
{
  FIELD_U32(result, 120) = 0;
  FIELD_U32(result, 80) ^= 1u;
  return result;
}
