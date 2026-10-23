/* sub_608AF450
 * address: 0x608AF450   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AF450(int result, int a2)
{
  FIELD_U32(result, 208) = a2;
  FIELD_U8(result, 186) = a2 > 0;
  return result;
}
