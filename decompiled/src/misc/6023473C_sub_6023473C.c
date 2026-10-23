/* sub_6023473C
 * address: 0x6023473C   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023473C(int result, int a2, char a3)
{
  FIELD_U32(result, 36) = a2;
  FIELD_U8(result, 9) = a3;
  return result;
}
