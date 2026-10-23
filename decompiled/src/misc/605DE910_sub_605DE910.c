/* sub_605DE910
 * address: 0x605DE910   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605DE910(int a1)
{
  return !sub_605DBD64(a1) && (FIELD_U8(a1, 6265) & 0x20) == 0;
}
