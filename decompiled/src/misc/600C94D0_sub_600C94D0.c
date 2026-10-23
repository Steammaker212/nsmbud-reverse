/* sub_600C94D0
 * address: 0x600C94D0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_600C94D0()
{
  int result; // r0

  nullsub_380();
  result = dword_60C99D88;
  FIELD_U32(dword_60C99D88, 32) = 1;
  FIELD_U8(result, 31) = 0;
  return result;
}
