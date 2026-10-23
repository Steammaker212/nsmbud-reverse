/* sub_607F9DCC
 * address: 0x607F9DCC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607F9DCC()
{
  int result; // r0

  FIELD_U8(dword_60C9BB38, 628) = 0;
  result = dword_60CC6C2C;
  FIELD_U8(dword_60CC6C2C, 286) &= ~1u;
  return result;
}
