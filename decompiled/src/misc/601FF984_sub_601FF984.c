/* sub_601FF984
 * address: 0x601FF984   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601FF984()
{
  int result; // r0

  result = dword_60CC6D78;
  if ( (FIELD_U16(dword_60CC6D78, 520) & 0x100) == 0 )
  {
    FIELD_U16(dword_60CC6D78, 520) |= 0x100u;
    FIELD_U8(result, 2092) |= 1u;
    FIELD_U32(result, 412) = 0;
    FIELD_U32(result, 416) = 0;
    FIELD_U32(result, 420) = 10;
  }
  return result;
}
