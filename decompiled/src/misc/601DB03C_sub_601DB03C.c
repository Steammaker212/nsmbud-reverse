/* sub_601DB03C
 * address: 0x601DB03C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601DB03C()
{
  int result; // r0

  result = dword_60CC6D78;
  FIELD_U8(dword_60CC6D78, 109036) = -1;
  FIELD_U8(result, 109038) = 3;
  FIELD_U8(result, 109037) = 6;
  return result;
}
