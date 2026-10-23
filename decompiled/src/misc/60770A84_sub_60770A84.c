/* sub_60770A84
 * address: 0x60770A84   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60770A84(int result)
{
  FIELD_U32(result, 1208) &= ~0x200u;
  FIELD_U32(result, 9952) = 0;
  return result;
}
