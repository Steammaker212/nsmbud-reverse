/* sub_607743D8
 * address: 0x607743D8   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607743D8(int result)
{
  FIELD_U32(result, 1236) &= ~0x200u;
  return result;
}
