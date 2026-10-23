/* sub_6007E31C
 * address: 0x6007E31C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6007E31C(int result)
{
  FIELD_U32(result, 6348) = 15 * FIELD_U8(result, 22) + 10;
  return result;
}
