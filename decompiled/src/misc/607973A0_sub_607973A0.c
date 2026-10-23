/* sub_607973A0
 * address: 0x607973A0   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607973A0(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 11368);
  FIELD_U8(result, 500) = 1;
  return result;
}
