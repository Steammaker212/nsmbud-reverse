/* sub_60980288
 * address: 0x60980288   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60980288(int result, int a2, char a3)
{
  FIELD_U32(result, 232) = a2;
  FIELD_U8(result, 236) = a3;
  return result;
}
