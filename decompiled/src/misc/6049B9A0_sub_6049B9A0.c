/* sub_6049B9A0
 * address: 0x6049B9A0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049B9A0(int result)
{
  FIELD_U8(result, 5354) = 0;
  *(_BYTE *)(FIELD_U32(result, 3632) + 2697) = 1;
  FIELD_U32(result, 3632) = 0;
  FIELD_U8(result, 5353) = 0;
  return result;
}
