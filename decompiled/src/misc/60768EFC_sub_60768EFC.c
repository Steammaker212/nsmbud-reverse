/* sub_60768EFC
 * address: 0x60768EFC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60768EFC(int a1)
{
  return (FIELD_U8(a1, 1234) & 0x10) != 0 && FIELD_U32(a1, 9708) == 1;
}
