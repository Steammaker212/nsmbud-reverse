/* sub_60544C6C
 * address: 0x60544C6C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60544C6C(int result)
{
  *(_BYTE *)(FIELD_U32(result, 33468) + 508) = 1;
  FIELD_U32(result, 33472) = 8;
  return result;
}
