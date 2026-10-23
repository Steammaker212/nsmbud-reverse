/* sub_6076E5CC
 * address: 0x6076E5CC   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076E5CC(int result)
{
  FIELD_U32(result, 1236) &= ~0x10000u;
  return result;
}
