/* sub_60543658
 * address: 0x60543658   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60543658(int result, int a2)
{
  FIELD_U8(result, 3582) = 1;
  FIELD_U32(result, 3552) = a2;
  FIELD_U32(result, 3576) = 255;
  FIELD_U8(result, 3581) = 0;
  return result;
}
