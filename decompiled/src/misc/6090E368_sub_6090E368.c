/* sub_6090E368
 * address: 0x6090E368   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6090E368()
{
  int result; // r0

  result = sub_6090B350((int)byte_60CCF474);
  FIELD_U8(result, 89) = 0;
  *(_WORD *)result = 0;
  return result;
}
