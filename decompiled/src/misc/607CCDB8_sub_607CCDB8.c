/* sub_607CCDB8
 * address: 0x607CCDB8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CCDB8(int result)
{
  FIELD_U32(result, 1204) &= ~0x20000000u;
  FIELD_U8(result, 11500) = 1;
  return result;
}
