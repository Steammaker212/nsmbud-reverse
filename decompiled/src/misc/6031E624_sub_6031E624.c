/* sub_6031E624
 * address: 0x6031E624   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031E624(int result)
{
  FIELD_U32(result, 12992) = 60 * FIELD_U8(result, 20);
  return result;
}
