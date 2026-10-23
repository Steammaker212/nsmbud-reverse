/* sub_601B519C
 * address: 0x601B519C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B519C(int result)
{
  FIELD_U32(result, 1220) = 655360000;
  FIELD_U32(result, 1120) |= 0x1000u;
  return result;
}
