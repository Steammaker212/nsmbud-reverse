/* sub_606BB794
 * address: 0x606BB794   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BB794(int result)
{
  int v1; // r1

  v1 = FIELD_U8(result, 92);
  FIELD_U32(result, 72) = 0;
  FIELD_U32(result, 68) = *(_DWORD *)(result + 16 * v1 + 36);
  return result;
}
