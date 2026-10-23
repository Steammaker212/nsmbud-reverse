/* sub_6059BDD4
 * address: 0x6059BDD4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059BDD4(int result)
{
  FIELD_U16(result, 16) |= 1u;
  FIELD_U32(result, 32) = 4;
  FIELD_U32(result, 20) = 1053609165;
  return result;
}
