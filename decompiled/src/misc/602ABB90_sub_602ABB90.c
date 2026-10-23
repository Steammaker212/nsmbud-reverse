/* sub_602ABB90
 * address: 0x602ABB90   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602ABB90(int result)
{
  FIELD_U32(result, 7244) = 1;
  FIELD_U32(result, 7292) = FIELD_U16(result, 6276);
  return result;
}
