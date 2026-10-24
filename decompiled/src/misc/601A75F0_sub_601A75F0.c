/* sub_601A75F0
 * address: 0x601A75F0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_601A75F0(Actor *a1, unsigned __int8 *a2)
{
  Actor *result; // r0

  result = sub_60185C70(a1, a2);
  FIELD_U32(result, 0x0) = (int)off_60BD6100;
  FIELD_U32(result + (3) * 80, 0x18) = -1;
  return result;
}
