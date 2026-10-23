/* sub_603C168C
 * address: 0x603C168C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C168C(int result)
{
  FIELD_U32(result, 6108) = 30 * FIELD_U8(result, 6106);
  return result;
}
