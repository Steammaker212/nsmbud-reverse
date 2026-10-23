/* sub_603D74DC
 * address: 0x603D74DC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D74DC(int result)
{
  FIELD_U32(result, 80) ^= 1u;
  FIELD_U8(result, 11812) = 1;
  return result;
}
