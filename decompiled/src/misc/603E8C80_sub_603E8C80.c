/* sub_603E8C80
 * address: 0x603E8C80   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_603E8C80(sead_IDisposer *a1)
{
  sead_IDisposer *result; // r0

  result = sub_603E4258(a1);
  FIELD_U32(result, 0x0) = (int)off_60BF8FFC;
  LOWORD(FIELD_U32(result + (1) * 16, 0x8)) = 0;
  return result;
}
