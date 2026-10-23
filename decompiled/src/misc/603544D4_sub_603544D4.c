/* sub_603544D4
 * address: 0x603544D4   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603544D4(int result)
{
  FIELD_U32(result, 3176) &= ~0x40000u;
  FIELD_U32(result, 3184) &= ~0x40000u;
  return result;
}
