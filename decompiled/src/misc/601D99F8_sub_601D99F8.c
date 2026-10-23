/* sub_601D99F8
 * address: 0x601D99F8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601D99F8()
{
  int result; // r0

  sub_6081AF3C(dword_60CC6C28);
  result = dword_60CC6D78;
  FIELD_U8(dword_60CC6D78, 2094) = 0;
  FIELD_U8(result, 2095) = 0;
  return result;
}
