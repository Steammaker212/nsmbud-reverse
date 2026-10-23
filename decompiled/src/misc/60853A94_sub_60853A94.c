/* sub_60853A94
 * address: 0x60853A94   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853A94(int result, char a2)
{
  FIELD_U32(result, 8) = FIELD_U32(result, 8) & 0xFFFFFFEF | (16 * (a2 & 1));
  return result;
}
