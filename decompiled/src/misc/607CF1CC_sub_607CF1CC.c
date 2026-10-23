/* sub_607CF1CC
 * address: 0x607CF1CC   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CF1CC(int result)
{
  if ( (FIELD_U8(result, 1239) & 1) != 0 )
    FIELD_U32(result, 1236) |= 0x80000u;
  return result;
}
