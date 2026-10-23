/* sub_608DD90C
 * address: 0x608DD90C   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DD90C(int result, int a2, int a3)
{
  FIELD_U32(result, 52) = a2;
  FIELD_U32(result, 56) = a3;
  return result;
}
