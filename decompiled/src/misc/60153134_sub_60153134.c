/* sub_60153134
 * address: 0x60153134   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60153134(int a1, int a2)
{
  int result; // r0

  *(float *)a2 = (float)(*(float *)a1 + FIELD_F32(a1, 4)) * 0.5;
  result = FIELD_U32(a1, 8);
  FIELD_U32(a2, 4) = result;
  return result;
}
