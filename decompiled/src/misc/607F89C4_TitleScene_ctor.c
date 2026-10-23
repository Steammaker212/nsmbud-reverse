/* TitleScene_ctor
 * address: 0x607F89C4   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall TitleScene_ctor(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0

  result = CalculateTask3_ctor(a1, a2, (int)"TitleScene");
  FIELD_U32(result, 0x0) = (int)off_60C27B24;
  return result;
}
