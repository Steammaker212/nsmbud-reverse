/* sub_607982E0
 * address: 0x607982E0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607982E0(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 1216);
  if ( (v1 & 0x8000000) != 0 )
    FIELD_U32(result, 1216) = v1 | 0x10000000;
  return result;
}
